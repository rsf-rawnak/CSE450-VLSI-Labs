library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity alu_8bit is
    Port (
        A      : in  STD_LOGIC_VECTOR(7 downto 0);   -- ACC
        B      : in  STD_LOGIC_VECTOR(7 downto 0);   -- operand
        OP     : in  STD_LOGIC_VECTOR(1 downto 0);   -- 00 ADD, 01 XOR, 10 SUB, 11 SHR
        RESULT : out STD_LOGIC_VECTOR(7 downto 0)
    );
end alu_8bit;
architecture Structural of alu_8bit is
    component full_adder_8bit
        Port (
            A    : in  STD_LOGIC_VECTOR(7 downto 0);
            B    : in  STD_LOGIC_VECTOR(7 downto 0);
            CIN  : in  STD_LOGIC;
            SUM  : out STD_LOGIC_VECTOR(7 downto 0);
            COUT : out STD_LOGIC
        );
    end component;
    component xor_gate
        Port ( A : in STD_LOGIC; B : in STD_LOGIC; Y : out STD_LOGIC );
    end component;
    component not_gate
        Port ( A : in STD_LOGIC; Y : out STD_LOGIC );
    end component;
    signal ADD_R, XOR_R, SUB_R, SHR_R : STD_LOGIC_VECTOR(7 downto 0);
    signal B_NOT : STD_LOGIC_VECTOR(7 downto 0);   -- ~B, needed for SUB
    signal CARRY_UNUSED  : STD_LOGIC;
    signal CARRY_UNUSED2 : STD_LOGIC;
begin
    -- ADD : A + B (carry discarded)
    ADDER: full_adder_8bit
        port map (A => A, B => B, CIN => '0', SUM => ADD_R, COUT => CARRY_UNUSED);
    -- XOR bit by bit, and invert every bit of B (for SUB)
    GEN_LOGIC: for i in 0 to 7 generate
        X: xor_gate port map (A => A(i), B => B(i), Y => XOR_R(i));
        N: not_gate port map (A => B(i), Y => B_NOT(i));
    end generate;
    -- SUB : A - B = A + (~B) + 1   (two's complement, modulo 256)
    SUBTRACTOR: full_adder_8bit
        port map (A => A, B => B_NOT, CIN => '1', SUM => SUB_R, COUT => CARRY_UNUSED2);

    -- SHR : logical shift right by 1, 0 enters the MSB
    SHR_R <= '0' & A(7 downto 1);

    with OP select
        RESULT <= ADD_R when "00",
                  XOR_R when "01",
                  SUB_R when "10",
                  SHR_R when others;
end Structural;