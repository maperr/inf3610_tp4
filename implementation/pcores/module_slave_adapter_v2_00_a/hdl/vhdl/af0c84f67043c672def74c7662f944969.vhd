--------------------------------------------------------------------------------
-- Filename : af0c84f67043c672def74c7662f944969.vhd
-- *****************************************************************************
--  Copyright 2011 - Space Codesign Systems, Inc.
--  All rights reserved.
-- *****************************************************************************
--------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
entity af0c84f67043c672def74c7662f944969 is
 generic (
 aa74fb9cd22cc42439f107a6ca2e5e2e7: integer := 32;
 a5071e2854bb1994020e9755c33d38a35: integer := 32;
 a122e4eae33693124884a5bd9c54533da: integer := 0
 );
 port ( 
 a4d19dbb2c328e9e81b3f5cb0338b2dff : in std_logic_vector(0 to aa74fb9cd22cc42439f107a6ca2e5e2e7-1);
 af28d3ef501c559275af36e71f10c31ec : in std_logic;
 a2ca671bd85848bb955f4899925401270 : out std_logic_vector(0 to a5071e2854bb1994020e9755c33d38a35-1);
 a45f2bd357ce90119a9a5fc27ff92b819 : in std_logic;
 aa844cc5add4cd16d87149c03d6c994b7 : in std_logic_vector(0 to a5071e2854bb1994020e9755c33d38a35-1);
 a6c8ad0b7cd1b6b75578e0fc933ae75e6 : in std_logic_vector(0 to a5071e2854bb1994020e9755c33d38a35/8-1);
 aa4036a221341c51c9e617a51b41997c4 : out std_logic;
 acc35d8784a29a807a11a2b74a4e72889 : out std_logic_vector(0 to aa74fb9cd22cc42439f107a6ca2e5e2e7-1);
 ae72cfc7df0a73a2d8b44853ebd403301 : out std_logic;
 ab58c5573697af1df7c969cda4f5f685c : in std_logic_vector(0 to a5071e2854bb1994020e9755c33d38a35-1);
 a6c87d105c2cb0b4b021f433614039700 : out std_logic;
 a21652cce845885775a2eded8cc9ae416 : out std_logic_vector(0 to a5071e2854bb1994020e9755c33d38a35-1);
 a97652a84fcacbf5b8c408144d10c1e92 : out std_logic_vector(0 to a5071e2854bb1994020e9755c33d38a35/8-1);
 ad596c5f840229d6843a21acfcada0c7d : in std_logic;
 a5beba813989bcc9d60c4d237cc021063 : in std_logic;
 a5ac85eba25c75ffbc870068f578e81fb : in std_logic; 
 add9c9a979d5706c4d749359e38aa86b7 : out std_logic_vector(0 to 7) 
 );
end af0c84f67043c672def74c7662f944969;
architecture aa76679b342f80bc7df0b09be809dcca9 of af0c84f67043c672def74c7662f944969 is
 signal af7c0a614040bf25e927ac5fad1fa6755 : std_logic_vector(0 to 12-4-1);
 begin
 acc35d8784a29a807a11a2b74a4e72889 <= a4d19dbb2c328e9e81b3f5cb0338b2dff when (a5ac85eba25c75ffbc870068f578e81fb = '1') else (others => '0');
 ae72cfc7df0a73a2d8b44853ebd403301 <= af28d3ef501c559275af36e71f10c31ec when (a5ac85eba25c75ffbc870068f578e81fb = '1') else '0';
 a2ca671bd85848bb955f4899925401270 <= ab58c5573697af1df7c969cda4f5f685c when (a5ac85eba25c75ffbc870068f578e81fb = '1') else (others => '0');
 a6c87d105c2cb0b4b021f433614039700 <= a45f2bd357ce90119a9a5fc27ff92b819 when (a5ac85eba25c75ffbc870068f578e81fb = '1') else '0';
 a21652cce845885775a2eded8cc9ae416 <= aa844cc5add4cd16d87149c03d6c994b7 when (a5ac85eba25c75ffbc870068f578e81fb = '1') else (others => '0');
 a97652a84fcacbf5b8c408144d10c1e92 <= a6c8ad0b7cd1b6b75578e0fc933ae75e6 when (a5ac85eba25c75ffbc870068f578e81fb = '1') else (others => '0');
 aa4036a221341c51c9e617a51b41997c4 <= ad596c5f840229d6843a21acfcada0c7d when (a5ac85eba25c75ffbc870068f578e81fb = '1') else '0';
 af7c0a614040bf25e927ac5fad1fa6755 <= a4d19dbb2c328e9e81b3f5cb0338b2dff(aa74fb9cd22cc42439f107a6ca2e5e2e7-12 to aa74fb9cd22cc42439f107a6ca2e5e2e7-4-1) when (a5ac85eba25c75ffbc870068f578e81fb = '1') else (others => '0');
 a7ca713b848d09c29a91a501e267ec16c: if (a122e4eae33693124884a5bd9c54533da = 0) generate
 add9c9a979d5706c4d749359e38aa86b7 <= X"00";
 end generate a7ca713b848d09c29a91a501e267ec16c;
 a59bbb0786ba5bafeb69c6985d3edbdb3: if (a122e4eae33693124884a5bd9c54533da = 1) generate
 add9c9a979d5706c4d749359e38aa86b7 <= X"00";
 end generate a59bbb0786ba5bafeb69c6985d3edbdb3;
 a77d88db46dee7a35f2e84e3654603919: if (a122e4eae33693124884a5bd9c54533da = 2) generate
 add9c9a979d5706c4d749359e38aa86b7 <= X"00";
 end generate a77d88db46dee7a35f2e84e3654603919;
 a342868a3bf5513910805418022bc8902: if (a122e4eae33693124884a5bd9c54533da = 3) generate
 add9c9a979d5706c4d749359e38aa86b7 <= X"00";
 end generate a342868a3bf5513910805418022bc8902;
 af874f45362445e63f2a7b39a26d4752a: if (a122e4eae33693124884a5bd9c54533da = 4) generate
 add9c9a979d5706c4d749359e38aa86b7 <= X"00";
 end generate af874f45362445e63f2a7b39a26d4752a;
 ad45a70e5711eb471498ae42d61a6b95c: if (a122e4eae33693124884a5bd9c54533da = 5) generate
 add9c9a979d5706c4d749359e38aa86b7 <= X"00";
 end generate ad45a70e5711eb471498ae42d61a6b95c;
 aac479681b9262009c753c47cbe75579c: if (a122e4eae33693124884a5bd9c54533da = 6) generate
 add9c9a979d5706c4d749359e38aa86b7 <= X"00";
 end generate aac479681b9262009c753c47cbe75579c;
 ab16162190f9e2ad0d413b313d806a007: if (a122e4eae33693124884a5bd9c54533da = 7) generate
 add9c9a979d5706c4d749359e38aa86b7 <= X"00";
 end generate ab16162190f9e2ad0d413b313d806a007;
 a99788bcf5df316306fdf9dcd79c77120: if (a122e4eae33693124884a5bd9c54533da = 8) generate
 add9c9a979d5706c4d749359e38aa86b7 <= X"00";
 end generate a99788bcf5df316306fdf9dcd79c77120;
 a84800952c5b2f47d721665da1acdcdca: if (a122e4eae33693124884a5bd9c54533da = 9) generate
 add9c9a979d5706c4d749359e38aa86b7 <= X"00";
 end generate a84800952c5b2f47d721665da1acdcdca;
end aa76679b342f80bc7df0b09be809dcca9;
