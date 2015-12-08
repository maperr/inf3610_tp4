library ieee;
use ieee.std_logic_1164.all;

entity matrix_mul_top is

    generic (
	    	AWIDTH : integer := 32 ;     	
	    	DWIDTH : integer := 32     	
		   );

    port (
			SDL0_M_Data : out std_logic_vector(0 to (DWIDTH-1)) ; 		
			SDL0_M_Write : out std_logic ; 		
			SDL0_M_Full : in std_logic ; 		
			SDL0_S_Data : in std_logic_vector(0 to (DWIDTH-1)) ; 		
			SDL0_S_Read : out std_logic ; 		
			SDL0_S_Empty : in std_logic ; 		
			Clk : in std_logic ; 		
			Reset : in std_logic 		
		);

end matrix_mul_top;

architecture STRUCTURE of matrix_mul_top is
component matrix_mul is


    port (
			nResetPort : in std_logic ; 		
			ClockPort : in std_logic ; 		
			ReadEnablePort_0 : out STD_LOGIC_VECTOR(0 to 0) ; 		
			ReadEmptyPort_0 : in STD_LOGIC_VECTOR(0 to 0) ; 		
			ReadDataPort_0 : in STD_LOGIC_VECTOR(31 downto 0) ; 		
			WriteEnablePort_0 : out STD_LOGIC_VECTOR(0 to 0) ; 		
			WriteFullPort_0 : in STD_LOGIC_VECTOR(0 to 0) ; 		
			WriteDataPort_0 : out STD_LOGIC_VECTOR(31 downto 0) 		
		);

end component;

begin
matrix_mul_instance : matrix_mul


    port map (
			ClockPort => Clk , 		
			ReadDataPort_0 => SDL0_S_Data , 		
			ReadEmptyPort_0(0) => SDL0_S_Empty , 		
			ReadEnablePort_0(0) => SDL0_S_Read , 		
			WriteDataPort_0 => SDL0_M_Data , 		
			WriteEnablePort_0(0) => SDL0_M_Write , 		
			WriteFullPort_0(0) => SDL0_M_Full , 		
			nResetPort => Reset 		
		);

end architecture STRUCTURE;