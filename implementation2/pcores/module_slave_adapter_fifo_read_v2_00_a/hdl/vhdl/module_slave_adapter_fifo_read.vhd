--------------------------------------------------------------------------------
-- Filename : module_slave_adapter_fifo_read.vhd
-- *****************************************************************************
--  Copyright 2011 - Space Codesign Systems, Inc.
--  All rights reserved.
-- *****************************************************************************
--------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
entity module_slave_adapter_fifo_read is
 generic (
 AWIDTH : integer := 32; 
 DWIDTH : integer := 32; 
 GEN_ID : integer := 0 
 );
 port (
 SBI_S_Clk : in std_logic;
 SBI_S_Address : in std_logic_vector(0 to AWIDTH-1);
 SBI_S_ReadEnable : in std_logic;
 SBI_S_ReadData : out std_logic_vector(0 to DWIDTH-1);
 SBI_S_WriteEnable : in std_logic;
 SBI_S_WriteData : in std_logic_vector(0 to DWIDTH-1);
 SBI_S_ByteEnable : in std_logic_vector(0 to DWIDTH/8-1);
 SBI_S_Ack : out std_logic;
 SDL_M_Clk : in std_logic;
 SDL_M_Data : in std_logic_vector(0 to DWIDTH-1);
 SDL_M_Write : in std_logic;
 SDL_M_Full : out std_logic;
 Reset : in std_logic;
 IRQHasData : out std_logic
 );
end module_slave_adapter_fifo_read;
architecture behavioral of module_slave_adapter_fifo_read is
 signal aed264e994397c0037fe5675653c583c5 : std_logic_vector(0 to DWIDTH-1);
 signal ab22ba0ada3dbb20a1250a47e1d4cc26a : std_logic;
 signal ac451c9929208688df5d4bd2eae0c5309 : std_logic;
 signal a924f7005f05c6a3cab97aebd4153ebbb : std_logic_vector(0 to AWIDTH-1);
 component a38165049ec58824018e374418661b9dd
 generic (
 a2ebbb81bea9d5ba4739e666c7e064639 : std_logic := '1'; 
 a30c46ff5f812aaf79ccb5bb3b0fd73a1: integer := 32;
 a0a6498b2d5cfc5b656782b01e01ec57c: integer := 32
 );
 port (
 a773c36547a2d648fe15e3354cb9cc61c : in std_logic;
 a7b76b58b431e6f0987810fd429fa084c : out std_logic;
 aed264e994397c0037fe5675653c583c5 : in std_logic_vector(0 to a0a6498b2d5cfc5b656782b01e01ec57c-1);
 ab22ba0ada3dbb20a1250a47e1d4cc26a : out std_logic;
 ac451c9929208688df5d4bd2eae0c5309 : in std_logic;
 a924f7005f05c6a3cab97aebd4153ebbb : in std_logic_vector(0 to a30c46ff5f812aaf79ccb5bb3b0fd73a1-1);
 abbed119ea56b86c5071a0fdbedfcab42 : in std_logic;
 a7b135b41d8fed6d4965e17f9463b43b7 : in std_logic_vector(0 to a30c46ff5f812aaf79ccb5bb3b0fd73a1-1);
 a266757ef8583c30e849a1b42255371ca : in std_logic;
 aad4ab5f1468b44bf2f2553b5826db313 : out std_logic_vector(0 to a0a6498b2d5cfc5b656782b01e01ec57c-1);
 a9e030391be2ec65588a46a1089dc2eec : in std_logic;
 a0c86c33e9fffd5585208d01e686cde58 : in std_logic_vector(0 to a0a6498b2d5cfc5b656782b01e01ec57c-1);
 a22a81e224f900e89ce26d39c6680f619 : in std_logic_vector(0 to a0a6498b2d5cfc5b656782b01e01ec57c/8-1);
 a30d4d37a91d0fab5bbba5f3b39988532 : out std_logic
 );
 end component;
 component ab20d458569142a95269ea23bd692ffc1
 generic (
 a618467ee0f7a8f930cadc423a963f3ff : integer := 64;
 a30c46ff5f812aaf79ccb5bb3b0fd73a1 : integer := 32;
 a0a6498b2d5cfc5b656782b01e01ec57c : integer := 32
 );
 port (
 a773c36547a2d648fe15e3354cb9cc61c : in std_logic;
 a007b706d4d61371ccaebd7364b055bdb : in std_logic;
 a48885fe5111f7b8fb9dba9518a41afa4 : in std_logic_vector(0 to a0a6498b2d5cfc5b656782b01e01ec57c-1);
 a2d97ae145d6b0169960781569997e54b : in std_logic;
 ab4cad6030f74477087d88160f3870b69 : out std_logic;
 adda6b5d3987f82b6c1bb10c90dee1d06 : out std_logic_vector(0 to a30c46ff5f812aaf79ccb5bb3b0fd73a1-1);
 aabaa813227f8e5fe5c1ac3e1010c504b : in std_logic;
 aed264e994397c0037fe5675653c583c5 : out std_logic_vector(0 to a0a6498b2d5cfc5b656782b01e01ec57c-1);
 ab22ba0ada3dbb20a1250a47e1d4cc26a : in std_logic;
 ac451c9929208688df5d4bd2eae0c5309 : out std_logic;
 a924f7005f05c6a3cab97aebd4153ebbb : out std_logic_vector(0 to a30c46ff5f812aaf79ccb5bb3b0fd73a1-1)
 );
 end component;
 begin
 ac400e4943df7e4894bec2eea1012428a: if (GEN_ID = 0) generate
 a0d95c7cdd063daea01dd7885c2c57483 : a38165049ec58824018e374418661b9dd
 generic map (
 a2ebbb81bea9d5ba4739e666c7e064639 => '0',
 a30c46ff5f812aaf79ccb5bb3b0fd73a1 => AWIDTH,
 a0a6498b2d5cfc5b656782b01e01ec57c => DWIDTH
 )
 port map (
 a773c36547a2d648fe15e3354cb9cc61c => Reset,
 a7b76b58b431e6f0987810fd429fa084c => IRQHasData,
 aed264e994397c0037fe5675653c583c5 => aed264e994397c0037fe5675653c583c5,
 ab22ba0ada3dbb20a1250a47e1d4cc26a => ab22ba0ada3dbb20a1250a47e1d4cc26a,
 ac451c9929208688df5d4bd2eae0c5309 => ac451c9929208688df5d4bd2eae0c5309,
 a924f7005f05c6a3cab97aebd4153ebbb => a924f7005f05c6a3cab97aebd4153ebbb,
 abbed119ea56b86c5071a0fdbedfcab42 => SBI_S_Clk,
 a7b135b41d8fed6d4965e17f9463b43b7 => SBI_S_Address,
 a266757ef8583c30e849a1b42255371ca => SBI_S_ReadEnable,
 aad4ab5f1468b44bf2f2553b5826db313 => SBI_S_ReadData,
 a9e030391be2ec65588a46a1089dc2eec => SBI_S_WriteEnable,
 a0c86c33e9fffd5585208d01e686cde58 => SBI_S_WriteData,
 a22a81e224f900e89ce26d39c6680f619 => SBI_S_ByteEnable,
 a30d4d37a91d0fab5bbba5f3b39988532 => SBI_S_Ack
 );
 inst_a66fc0baf6e338a09539b2fdcead77c5a_0 : ab20d458569142a95269ea23bd692ffc1
 generic map (
 a618467ee0f7a8f930cadc423a963f3ff => 64,
 a30c46ff5f812aaf79ccb5bb3b0fd73a1 => AWIDTH,
 a0a6498b2d5cfc5b656782b01e01ec57c => DWIDTH
 )
 port map (
 a773c36547a2d648fe15e3354cb9cc61c => Reset,
 a007b706d4d61371ccaebd7364b055bdb => SDL_M_Clk,
 a48885fe5111f7b8fb9dba9518a41afa4 => SDL_M_Data,
 a2d97ae145d6b0169960781569997e54b => SDL_M_Write,
 ab4cad6030f74477087d88160f3870b69 => SDL_M_Full,
 aabaa813227f8e5fe5c1ac3e1010c504b => SBI_S_Clk,
 aed264e994397c0037fe5675653c583c5 => aed264e994397c0037fe5675653c583c5,
 ab22ba0ada3dbb20a1250a47e1d4cc26a => ab22ba0ada3dbb20a1250a47e1d4cc26a,
 ac451c9929208688df5d4bd2eae0c5309 => ac451c9929208688df5d4bd2eae0c5309,
 a924f7005f05c6a3cab97aebd4153ebbb => a924f7005f05c6a3cab97aebd4153ebbb
 );
 end generate ac400e4943df7e4894bec2eea1012428a;
 a91b296d1c45f7718c974fe642318dba1: if (GEN_ID = 1) generate
 a0d95c7cdd063daea01dd7885c2c57483 : a38165049ec58824018e374418661b9dd
 generic map (
 a2ebbb81bea9d5ba4739e666c7e064639 => '0',
 a30c46ff5f812aaf79ccb5bb3b0fd73a1 => AWIDTH,
 a0a6498b2d5cfc5b656782b01e01ec57c => DWIDTH
 )
 port map (
 a773c36547a2d648fe15e3354cb9cc61c => Reset,
 a7b76b58b431e6f0987810fd429fa084c => IRQHasData,
 aed264e994397c0037fe5675653c583c5 => aed264e994397c0037fe5675653c583c5,
 ab22ba0ada3dbb20a1250a47e1d4cc26a => ab22ba0ada3dbb20a1250a47e1d4cc26a,
 ac451c9929208688df5d4bd2eae0c5309 => ac451c9929208688df5d4bd2eae0c5309,
 a924f7005f05c6a3cab97aebd4153ebbb => a924f7005f05c6a3cab97aebd4153ebbb,
 abbed119ea56b86c5071a0fdbedfcab42 => SBI_S_Clk,
 a7b135b41d8fed6d4965e17f9463b43b7 => SBI_S_Address,
 a266757ef8583c30e849a1b42255371ca => SBI_S_ReadEnable,
 aad4ab5f1468b44bf2f2553b5826db313 => SBI_S_ReadData,
 a9e030391be2ec65588a46a1089dc2eec => SBI_S_WriteEnable,
 a0c86c33e9fffd5585208d01e686cde58 => SBI_S_WriteData,
 a22a81e224f900e89ce26d39c6680f619 => SBI_S_ByteEnable,
 a30d4d37a91d0fab5bbba5f3b39988532 => SBI_S_Ack
 );
 inst_a66fc0baf6e338a09539b2fdcead77c5a_0 : ab20d458569142a95269ea23bd692ffc1
 generic map (
 a618467ee0f7a8f930cadc423a963f3ff => 64,
 a30c46ff5f812aaf79ccb5bb3b0fd73a1 => AWIDTH,
 a0a6498b2d5cfc5b656782b01e01ec57c => DWIDTH
 )
 port map (
 a773c36547a2d648fe15e3354cb9cc61c => Reset,
 a007b706d4d61371ccaebd7364b055bdb => SDL_M_Clk,
 a48885fe5111f7b8fb9dba9518a41afa4 => SDL_M_Data,
 a2d97ae145d6b0169960781569997e54b => SDL_M_Write,
 ab4cad6030f74477087d88160f3870b69 => SDL_M_Full,
 aabaa813227f8e5fe5c1ac3e1010c504b => SBI_S_Clk,
 aed264e994397c0037fe5675653c583c5 => aed264e994397c0037fe5675653c583c5,
 ab22ba0ada3dbb20a1250a47e1d4cc26a => ab22ba0ada3dbb20a1250a47e1d4cc26a,
 ac451c9929208688df5d4bd2eae0c5309 => ac451c9929208688df5d4bd2eae0c5309,
 a924f7005f05c6a3cab97aebd4153ebbb => a924f7005f05c6a3cab97aebd4153ebbb
 );
 end generate a91b296d1c45f7718c974fe642318dba1;
 af74192d659163552636a9436bd231f39: if (GEN_ID = 2) generate
 a0d95c7cdd063daea01dd7885c2c57483 : a38165049ec58824018e374418661b9dd
 generic map (
 a2ebbb81bea9d5ba4739e666c7e064639 => '0',
 a30c46ff5f812aaf79ccb5bb3b0fd73a1 => AWIDTH,
 a0a6498b2d5cfc5b656782b01e01ec57c => DWIDTH
 )
 port map (
 a773c36547a2d648fe15e3354cb9cc61c => Reset,
 a7b76b58b431e6f0987810fd429fa084c => IRQHasData,
 aed264e994397c0037fe5675653c583c5 => aed264e994397c0037fe5675653c583c5,
 ab22ba0ada3dbb20a1250a47e1d4cc26a => ab22ba0ada3dbb20a1250a47e1d4cc26a,
 ac451c9929208688df5d4bd2eae0c5309 => ac451c9929208688df5d4bd2eae0c5309,
 a924f7005f05c6a3cab97aebd4153ebbb => a924f7005f05c6a3cab97aebd4153ebbb,
 abbed119ea56b86c5071a0fdbedfcab42 => SBI_S_Clk,
 a7b135b41d8fed6d4965e17f9463b43b7 => SBI_S_Address,
 a266757ef8583c30e849a1b42255371ca => SBI_S_ReadEnable,
 aad4ab5f1468b44bf2f2553b5826db313 => SBI_S_ReadData,
 a9e030391be2ec65588a46a1089dc2eec => SBI_S_WriteEnable,
 a0c86c33e9fffd5585208d01e686cde58 => SBI_S_WriteData,
 a22a81e224f900e89ce26d39c6680f619 => SBI_S_ByteEnable,
 a30d4d37a91d0fab5bbba5f3b39988532 => SBI_S_Ack
 );
 inst_a66fc0baf6e338a09539b2fdcead77c5a_0 : ab20d458569142a95269ea23bd692ffc1
 generic map (
 a618467ee0f7a8f930cadc423a963f3ff => 64,
 a30c46ff5f812aaf79ccb5bb3b0fd73a1 => AWIDTH,
 a0a6498b2d5cfc5b656782b01e01ec57c => DWIDTH
 )
 port map (
 a773c36547a2d648fe15e3354cb9cc61c => Reset,
 a007b706d4d61371ccaebd7364b055bdb => SDL_M_Clk,
 a48885fe5111f7b8fb9dba9518a41afa4 => SDL_M_Data,
 a2d97ae145d6b0169960781569997e54b => SDL_M_Write,
 ab4cad6030f74477087d88160f3870b69 => SDL_M_Full,
 aabaa813227f8e5fe5c1ac3e1010c504b => SBI_S_Clk,
 aed264e994397c0037fe5675653c583c5 => aed264e994397c0037fe5675653c583c5,
 ab22ba0ada3dbb20a1250a47e1d4cc26a => ab22ba0ada3dbb20a1250a47e1d4cc26a,
 ac451c9929208688df5d4bd2eae0c5309 => ac451c9929208688df5d4bd2eae0c5309,
 a924f7005f05c6a3cab97aebd4153ebbb => a924f7005f05c6a3cab97aebd4153ebbb
 );
 end generate af74192d659163552636a9436bd231f39;
 a6177f6754458096f3a9e1402668075bd: if (GEN_ID = 3) generate
 a0d95c7cdd063daea01dd7885c2c57483 : a38165049ec58824018e374418661b9dd
 generic map (
 a2ebbb81bea9d5ba4739e666c7e064639 => '0',
 a30c46ff5f812aaf79ccb5bb3b0fd73a1 => AWIDTH,
 a0a6498b2d5cfc5b656782b01e01ec57c => DWIDTH
 )
 port map (
 a773c36547a2d648fe15e3354cb9cc61c => Reset,
 a7b76b58b431e6f0987810fd429fa084c => IRQHasData,
 aed264e994397c0037fe5675653c583c5 => aed264e994397c0037fe5675653c583c5,
 ab22ba0ada3dbb20a1250a47e1d4cc26a => ab22ba0ada3dbb20a1250a47e1d4cc26a,
 ac451c9929208688df5d4bd2eae0c5309 => ac451c9929208688df5d4bd2eae0c5309,
 a924f7005f05c6a3cab97aebd4153ebbb => a924f7005f05c6a3cab97aebd4153ebbb,
 abbed119ea56b86c5071a0fdbedfcab42 => SBI_S_Clk,
 a7b135b41d8fed6d4965e17f9463b43b7 => SBI_S_Address,
 a266757ef8583c30e849a1b42255371ca => SBI_S_ReadEnable,
 aad4ab5f1468b44bf2f2553b5826db313 => SBI_S_ReadData,
 a9e030391be2ec65588a46a1089dc2eec => SBI_S_WriteEnable,
 a0c86c33e9fffd5585208d01e686cde58 => SBI_S_WriteData,
 a22a81e224f900e89ce26d39c6680f619 => SBI_S_ByteEnable,
 a30d4d37a91d0fab5bbba5f3b39988532 => SBI_S_Ack
 );
 inst_a66fc0baf6e338a09539b2fdcead77c5a_0 : ab20d458569142a95269ea23bd692ffc1
 generic map (
 a618467ee0f7a8f930cadc423a963f3ff => 64,
 a30c46ff5f812aaf79ccb5bb3b0fd73a1 => AWIDTH,
 a0a6498b2d5cfc5b656782b01e01ec57c => DWIDTH
 )
 port map (
 a773c36547a2d648fe15e3354cb9cc61c => Reset,
 a007b706d4d61371ccaebd7364b055bdb => SDL_M_Clk,
 a48885fe5111f7b8fb9dba9518a41afa4 => SDL_M_Data,
 a2d97ae145d6b0169960781569997e54b => SDL_M_Write,
 ab4cad6030f74477087d88160f3870b69 => SDL_M_Full,
 aabaa813227f8e5fe5c1ac3e1010c504b => SBI_S_Clk,
 aed264e994397c0037fe5675653c583c5 => aed264e994397c0037fe5675653c583c5,
 ab22ba0ada3dbb20a1250a47e1d4cc26a => ab22ba0ada3dbb20a1250a47e1d4cc26a,
 ac451c9929208688df5d4bd2eae0c5309 => ac451c9929208688df5d4bd2eae0c5309,
 a924f7005f05c6a3cab97aebd4153ebbb => a924f7005f05c6a3cab97aebd4153ebbb
 );
 end generate a6177f6754458096f3a9e1402668075bd;
 ae12f2b2304df332dac1114588f2689d1: if (GEN_ID = 4) generate
 a0d95c7cdd063daea01dd7885c2c57483 : a38165049ec58824018e374418661b9dd
 generic map (
 a2ebbb81bea9d5ba4739e666c7e064639 => '0',
 a30c46ff5f812aaf79ccb5bb3b0fd73a1 => AWIDTH,
 a0a6498b2d5cfc5b656782b01e01ec57c => DWIDTH
 )
 port map (
 a773c36547a2d648fe15e3354cb9cc61c => Reset,
 a7b76b58b431e6f0987810fd429fa084c => IRQHasData,
 aed264e994397c0037fe5675653c583c5 => aed264e994397c0037fe5675653c583c5,
 ab22ba0ada3dbb20a1250a47e1d4cc26a => ab22ba0ada3dbb20a1250a47e1d4cc26a,
 ac451c9929208688df5d4bd2eae0c5309 => ac451c9929208688df5d4bd2eae0c5309,
 a924f7005f05c6a3cab97aebd4153ebbb => a924f7005f05c6a3cab97aebd4153ebbb,
 abbed119ea56b86c5071a0fdbedfcab42 => SBI_S_Clk,
 a7b135b41d8fed6d4965e17f9463b43b7 => SBI_S_Address,
 a266757ef8583c30e849a1b42255371ca => SBI_S_ReadEnable,
 aad4ab5f1468b44bf2f2553b5826db313 => SBI_S_ReadData,
 a9e030391be2ec65588a46a1089dc2eec => SBI_S_WriteEnable,
 a0c86c33e9fffd5585208d01e686cde58 => SBI_S_WriteData,
 a22a81e224f900e89ce26d39c6680f619 => SBI_S_ByteEnable,
 a30d4d37a91d0fab5bbba5f3b39988532 => SBI_S_Ack
 );
 inst_a66fc0baf6e338a09539b2fdcead77c5a_0 : ab20d458569142a95269ea23bd692ffc1
 generic map (
 a618467ee0f7a8f930cadc423a963f3ff => 64,
 a30c46ff5f812aaf79ccb5bb3b0fd73a1 => AWIDTH,
 a0a6498b2d5cfc5b656782b01e01ec57c => DWIDTH
 )
 port map (
 a773c36547a2d648fe15e3354cb9cc61c => Reset,
 a007b706d4d61371ccaebd7364b055bdb => SDL_M_Clk,
 a48885fe5111f7b8fb9dba9518a41afa4 => SDL_M_Data,
 a2d97ae145d6b0169960781569997e54b => SDL_M_Write,
 ab4cad6030f74477087d88160f3870b69 => SDL_M_Full,
 aabaa813227f8e5fe5c1ac3e1010c504b => SBI_S_Clk,
 aed264e994397c0037fe5675653c583c5 => aed264e994397c0037fe5675653c583c5,
 ab22ba0ada3dbb20a1250a47e1d4cc26a => ab22ba0ada3dbb20a1250a47e1d4cc26a,
 ac451c9929208688df5d4bd2eae0c5309 => ac451c9929208688df5d4bd2eae0c5309,
 a924f7005f05c6a3cab97aebd4153ebbb => a924f7005f05c6a3cab97aebd4153ebbb
 );
 end generate ae12f2b2304df332dac1114588f2689d1;
end behavioral;
