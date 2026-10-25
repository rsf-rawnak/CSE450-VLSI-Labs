LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY alu_8bit_tb IS
END alu_8bit_tb;
ARCHITECTURE behavior OF alu_8bit_tb IS
    COMPONENT alu_8bit
        PORT (
            A      : IN  std_logic_vector(7 downto 0);
            B      : IN  std_logic_vector(7 downto 0);
            OP     : IN  std_logic_vector(1 downto 0);
            RESULT : OUT std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    signal A      : std_logic_vector(7 downto 0) := (others => '0');
    signal B      : std_logic_vector(7 downto 0) := (others => '0');
    signal OP     : std_logic_vector(1 downto 0) := "00";
    signal RESULT : std_logic_vector(7 downto 0);
BEGIN
    uut : alu_8bit PORT MAP (A => A, B => B, OP => OP, RESULT => RESULT);
    stim_proc : process
    begin
        -- ADD (OP = 00)
        OP <= "00";
        A <= x"30"; B <= x"0F"; wait for 10 ns;
        assert RESULT = x"3F" report "FAIL: ADD 30 + 0F" severity error;
        A <= x"00"; B <= x"07"; wait for 10 ns;
        assert RESULT = x"07" report "FAIL: ADD 00 + 07" severity error;
        A <= x"FF"; B <= x"01"; wait for 10 ns;
        assert RESULT = x"00" report "FAIL: ADD FF + 01 (carry discarded)" severity error;
        -- XOR (OP = 01)
        OP <= "01";
        A <= x"3F"; B <= x"3F"; wait for 10 ns;
        assert RESULT = x"00" report "FAIL: XOR 3F ^ 3F" severity error;
        A <= x"00"; B <= x"81"; wait for 10 ns;
        assert RESULT = x"81" report "FAIL: XOR 00 ^ 81" severity error;
        A <= x"55"; B <= x"FF"; wait for 10 ns;
        assert RESULT = x"AA" report "FAIL: XOR 55 ^ FF" severity error;
        -- SUB (OP = 10)
        OP <= "10";
        A <= x"40"; B <= x"10"; wait for 10 ns;
        assert RESULT = x"30" report "FAIL: SUB 40 - 10" severity error;
        A <= x"55"; B <= x"55"; wait for 10 ns;
        assert RESULT = x"00" report "FAIL: SUB 55 - 55" severity error;
        A <= x"00"; B <= x"01"; wait for 10 ns;
        assert RESULT = x"FF" report "FAIL: SUB 00 - 01 (modulo 256)" severity error;
        A <= x"10"; B <= x"20"; wait for 10 ns;
        assert RESULT = x"F0" report "FAIL: SUB 10 - 20 (modulo 256)" severity error;
        -- SHR (OP = 11), operand ignored, 0 enters MSB
        OP <= "11";
        A <= x"80"; B <= x"FF"; wait for 10 ns;
        assert RESULT = x"40" report "FAIL: SHR 80" severity error;
        A <= x"07"; B <= x"00"; wait for 10 ns;
        assert RESULT = x"03" report "FAIL: SHR 07" severity error;
        A <= x"01"; B <= x"00"; wait for 10 ns;
        assert RESULT = x"00" report "FAIL: SHR 01" severity error;
        A <= x"FF"; B <= x"12"; wait for 10 ns;
        assert RESULT = x"7F" report "FAIL: SHR FF (MSB must become 0)" severity error;

        report "alu_8bit testbench completed." severity note;
        wait;
    end process;
END behavior;