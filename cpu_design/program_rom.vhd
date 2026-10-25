library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity program_rom is
    Port (
        ADDRESS     : in  STD_LOGIC_VECTOR(3 downto 0);
        INSTRUCTION : out STD_LOGIC_VECTOR(11 downto 0)
    );
end program_rom;
architecture Behavioral of program_rom is
begin
    process(ADDRESS)
    begin
        case ADDRESS is
            when "0000" => INSTRUCTION <= x"180"; -- LDI 0x80
            when "0001" => INSTRUCTION <= x"900"; -- SHR
            when "0010" => INSTRUCTION <= x"310"; -- SUB 0x10
            when "0011" => INSTRUCTION <= x"20F"; -- ADD 0x0F
				when "0100" => INSTRUCTION <= x"63F"; -- XOR 0x3F
            when "0101" => INSTRUCTION <= x"207"; -- ADD 0x07
            when "0110" => INSTRUCTION <= x"900"; -- SHR
            when others => INSTRUCTION <= x"000"; -- NOP
        end case;
    end process;
end Behavioral;