--------------------------------------------------------------------------------
-- Filename : a38165049ec58824018e374418661b9dd.vhd
-- *****************************************************************************
--  Copyright 2011 - Space Codesign Systems, Inc.
--  All rights reserved.
-- *****************************************************************************
--------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use IEEE.numeric_std.all;
entity a38165049ec58824018e374418661b9dd is
 generic (
 a2ebbb81bea9d5ba4739e666c7e064639 : std_logic := '1'; 
 a30c46ff5f812aaf79ccb5bb3b0fd73a1 : integer := 32; 
 a0a6498b2d5cfc5b656782b01e01ec57c : integer := 32 
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
end a38165049ec58824018e374418661b9dd;
architecture a838bebbd5bd8b8d18609107ea96437c4 of a38165049ec58824018e374418661b9dd is
 constant a90d2d2ec9d1ce67cee450e4b5b463479 : std_logic_vector := "0000";
 constant a8f922689214e5bb303b2a090c516bf39 : std_logic_vector := "0100";
 constant abdc47749423c14d9457393274cf3617f : std_logic_vector := "1000";
 constant a901254e008949883aff05e99a10673c2 : std_logic_vector := "1100";
 signal a9f52878b9d2c15ec0ded9419789c89c0 : std_logic_vector(0 to 3);
 signal aa10b68f85b5a05da35d7e6ab1683074a : std_logic_vector(0 to a0a6498b2d5cfc5b656782b01e01ec57c-1) := std_logic_vector(to_unsigned(1,a0a6498b2d5cfc5b656782b01e01ec57c)); 
 signal a49daf926e310cd7aefe130871fde4886 : std_logic := '0';
 signal a225b3cf02e967ba8cbca5da9ed4a18b0 : std_logic := '0';
 signal a9e7bdb8277a6f4ba8f6d5623790fa3dd : std_logic := '0';
 signal a298d4a137546961a2146069a3fffc086 : std_logic := '0';
 signal a27c5ce272ce4bf5d947992d1e387512c : std_logic_vector(0 to a30c46ff5f812aaf79ccb5bb3b0fd73a1-1);
 begin
 a9f52878b9d2c15ec0ded9419789c89c0 <= a7b135b41d8fed6d4965e17f9463b43b7(a30c46ff5f812aaf79ccb5bb3b0fd73a1-4 to a30c46ff5f812aaf79ccb5bb3b0fd73a1-1);
 a8ff70f5626d3d3ab3ba3cee4fcfb8df8 : process (abbed119ea56b86c5071a0fdbedfcab42) 
 begin
 if (abbed119ea56b86c5071a0fdbedfcab42'event and abbed119ea56b86c5071a0fdbedfcab42 = '1') then
 a30d4d37a91d0fab5bbba5f3b39988532 <= '0';
 aad4ab5f1468b44bf2f2553b5826db313 <= (others => '0');
 ab22ba0ada3dbb20a1250a47e1d4cc26a <= '0';
 a225b3cf02e967ba8cbca5da9ed4a18b0 <= a49daf926e310cd7aefe130871fde4886;
 if (a773c36547a2d648fe15e3354cb9cc61c = '1') then 
 aa10b68f85b5a05da35d7e6ab1683074a <= std_logic_vector(to_unsigned(1,aa10b68f85b5a05da35d7e6ab1683074a'length));
 a49daf926e310cd7aefe130871fde4886 <= '0';
 a225b3cf02e967ba8cbca5da9ed4a18b0 <= '0';
 else
 case a9f52878b9d2c15ec0ded9419789c89c0 is
 when a90d2d2ec9d1ce67cee450e4b5b463479 => 
 if (a9e7bdb8277a6f4ba8f6d5623790fa3dd = '0') and (a266757ef8583c30e849a1b42255371ca = '1') then
 aad4ab5f1468b44bf2f2553b5826db313 <= aed264e994397c0037fe5675653c583c5;
 a30d4d37a91d0fab5bbba5f3b39988532 <= '1';
 ab22ba0ada3dbb20a1250a47e1d4cc26a <= '1';
 end if;
 when a8f922689214e5bb303b2a090c516bf39 => 
 if (a9e7bdb8277a6f4ba8f6d5623790fa3dd = '0') and (a266757ef8583c30e849a1b42255371ca = '1') then
 aad4ab5f1468b44bf2f2553b5826db313 <= a924f7005f05c6a3cab97aebd4153ebbb;
 a30d4d37a91d0fab5bbba5f3b39988532 <= '1';
 end if;
 when abdc47749423c14d9457393274cf3617f => 
 if (a298d4a137546961a2146069a3fffc086 = '0') and (a9e030391be2ec65588a46a1089dc2eec = '1') then
 aa10b68f85b5a05da35d7e6ab1683074a <= a0c86c33e9fffd5585208d01e686cde58;
 a30d4d37a91d0fab5bbba5f3b39988532 <= '1';
 end if;
 if (a9e7bdb8277a6f4ba8f6d5623790fa3dd = '0') and (a266757ef8583c30e849a1b42255371ca = '1') then
 aad4ab5f1468b44bf2f2553b5826db313 <= aa10b68f85b5a05da35d7e6ab1683074a;
 a30d4d37a91d0fab5bbba5f3b39988532 <= '1';
 end if;
 when a901254e008949883aff05e99a10673c2 => 
 if (a298d4a137546961a2146069a3fffc086 = '0') and (a9e030391be2ec65588a46a1089dc2eec = '1') then
 a49daf926e310cd7aefe130871fde4886 <= a0c86c33e9fffd5585208d01e686cde58(a0a6498b2d5cfc5b656782b01e01ec57c-1);
 a30d4d37a91d0fab5bbba5f3b39988532 <= '1';
 end if;
 if (a9e7bdb8277a6f4ba8f6d5623790fa3dd = '0') and (a266757ef8583c30e849a1b42255371ca = '1') then
 aad4ab5f1468b44bf2f2553b5826db313(a0a6498b2d5cfc5b656782b01e01ec57c-1) <= a49daf926e310cd7aefe130871fde4886;
 a30d4d37a91d0fab5bbba5f3b39988532 <= '1';
 end if;
 when others =>
 if (a266757ef8583c30e849a1b42255371ca = '1' or a9e030391be2ec65588a46a1089dc2eec = '1') then
 a30d4d37a91d0fab5bbba5f3b39988532 <= '1';
 end if;
 end case;
 end if;
 end if;
 end process a8ff70f5626d3d3ab3ba3cee4fcfb8df8;
 a1dba36d1d91dc351749133966e143979 : process (abbed119ea56b86c5071a0fdbedfcab42) 
 begin
 if (abbed119ea56b86c5071a0fdbedfcab42'event and abbed119ea56b86c5071a0fdbedfcab42 = '1') then
 if (a773c36547a2d648fe15e3354cb9cc61c = '1') then
 a9e7bdb8277a6f4ba8f6d5623790fa3dd <= '0';
 a298d4a137546961a2146069a3fffc086 <= '0';
 else
 a9e7bdb8277a6f4ba8f6d5623790fa3dd <= a266757ef8583c30e849a1b42255371ca;
 a298d4a137546961a2146069a3fffc086 <= a9e030391be2ec65588a46a1089dc2eec;
 end if;
 end if;
end process a1dba36d1d91dc351749133966e143979;
 a783901f0d93e15ea6d46bfad8f023998: if a2ebbb81bea9d5ba4739e666c7e064639 = '1' generate
 a7b76b58b431e6f0987810fd429fa084c <= '1' when (a924f7005f05c6a3cab97aebd4153ebbb >= aa10b68f85b5a05da35d7e6ab1683074a and a49daf926e310cd7aefe130871fde4886 = '1') else '0';
 end generate a783901f0d93e15ea6d46bfad8f023998;
 a9333002c0a521488558e41f2304d2c67: if a2ebbb81bea9d5ba4739e666c7e064639 = '0' generate
 a710ab6be0810fe0af97d115f3b3491a3 : process (abbed119ea56b86c5071a0fdbedfcab42) 
 begin
 if (abbed119ea56b86c5071a0fdbedfcab42'event and abbed119ea56b86c5071a0fdbedfcab42 = '1') then
 a7b76b58b431e6f0987810fd429fa084c <= '0';
 a27c5ce272ce4bf5d947992d1e387512c <= a924f7005f05c6a3cab97aebd4153ebbb;
 if (a773c36547a2d648fe15e3354cb9cc61c = '1') then
 a7b76b58b431e6f0987810fd429fa084c <= '0';
 a27c5ce272ce4bf5d947992d1e387512c <= (others => '0');
 else 
 if (a49daf926e310cd7aefe130871fde4886 = '1') and (((a27c5ce272ce4bf5d947992d1e387512c < aa10b68f85b5a05da35d7e6ab1683074a) and (a924f7005f05c6a3cab97aebd4153ebbb >= aa10b68f85b5a05da35d7e6ab1683074a))
 or ((a225b3cf02e967ba8cbca5da9ed4a18b0 = '0') and (a924f7005f05c6a3cab97aebd4153ebbb >= aa10b68f85b5a05da35d7e6ab1683074a))) then
 a7b76b58b431e6f0987810fd429fa084c <= '1'; 
 end if;
 end if;
 end if;
 end process a710ab6be0810fe0af97d115f3b3491a3;
 end generate a9333002c0a521488558e41f2304d2c67;
end a838bebbd5bd8b8d18609107ea96437c4;
