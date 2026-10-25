LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY instruction_decoder_tb IS
END instruction_decoder_tb;
ARCHITECTURE behavior OF instruction_decoder_tb IS
    COMPONENT instruction_decoder
        PORT (
            INSTRUCTION : IN  std_logic_vector(11 downto 0);
            OPCODE      : OUT std_logic_vector(3 downto 0);
            OPERAND     : OUT std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    signal INSTRUCTION : std_logic_vector(11 downto 0) := (others => '0');
    signal OPCODE      : std_logic_vector(3 downto 0);
    signal OPERAND     : std_logic_vector(7 downto 0);
BEGIN
    uut : instruction_decoder
        PORT MAP (INSTRUCTION => INSTRUCTION, OPCODE => OPCODE, OPERAND => OPERAND);
    stim_proc : process
    begin
        INSTRUCTION <= x"180"; wait for 10 ns;   -- LDI 80
        assert OPCODE = "0001" and OPERAND = x"80" report "FAIL: LDI 80" severity error;
        INSTRUCTION <= x"20F"; wait for 10 ns;   -- ADD 0F
        assert OPCODE = "0010" and OPERAND = x"0F" report "FAIL: ADD 0F" severity error;
        INSTRUCTION <= x"310"; wait for 10 ns;   -- SUB 10
        assert OPCODE = "0011" and OPERAND = x"10" report "FAIL: SUB 10" severity error;
        INSTRUCTION <= x"63F"; wait for 10 ns;   -- XOR 3F
        assert OPCODE = "0110" and OPERAND = x"3F" report "FAIL: XOR 3F" severity error;
        INSTRUCTION <= x"900"; wait for 10 ns;   -- SHR
        assert OPCODE = "1001" and OPERAND = x"00" report "FAIL: SHR" severity error;
        INSTRUCTION <= x"000"; wait for 10 ns;   -- NOP
        assert OPCODE = "0000" and OPERAND = x"00" report "FAIL: NOP" severity error;
        report "instruction_decoder testbench completed." severity note;
        wait;
    end process;
END behavior;