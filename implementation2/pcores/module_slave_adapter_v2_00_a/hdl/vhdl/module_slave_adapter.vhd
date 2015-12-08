--------------------------------------------------------------------------------
-- Filename : module_slave_adapter.vhd
-- *****************************************************************************
--  Copyright 2011 - Space Codesign Systems, Inc.
--  All rights reserved.
-- *****************************************************************************
--------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
entity module_slave_adapter is
 generic (
 AWIDTH : integer := 32; 
 DWIDTH : integer := 32; 
 GEN_ID : integer := 0; 
 N : integer := 5 
 );
 port (
 SBI_S_Address : in std_logic_vector(0 to AWIDTH-1);
 SBI_S_ReadEnable : in std_logic;
 SBI_S_ReadData : out std_logic_vector(0 to DWIDTH-1);
 SBI_S_WriteEnable : in std_logic;
 SBI_S_WriteData : in std_logic_vector(0 to DWIDTH-1);
 SBI_S_ByteEnable : in std_logic_vector(0 to DWIDTH/8-1);
 SBI_S_Ack : out std_logic;
 SBI_MS_MUX_Address : out std_logic_vector(0 to (N*AWIDTH)-1);
 SBI_MS_MUX_ReadEnable : out std_logic_vector(0 to N-1);
 SBI_MS_MUX_ReadData : in std_logic_vector(0 to (N*DWIDTH)-1);
 SBI_MS_MUX_WriteEnable : out std_logic_vector(0 to N-1);
 SBI_MS_MUX_WriteData : out std_logic_vector(0 to (N*DWIDTH)-1);
 SBI_MS_MUX_ByteEnable : out std_logic_vector(0 to ((DWIDTH/8)*N)-1);
 SBI_MS_MUX_Ack : in std_logic_vector(0 to N-1);
 Clk : in std_logic;
 Reset : in std_logic
 );
end module_slave_adapter;
architecture behavioral of module_slave_adapter is
 signal acc35d8784a29a807a11a2b74a4e72889 : std_logic_vector(0 to AWIDTH-1);
 signal ae72cfc7df0a73a2d8b44853ebd403301 : std_logic;
 signal ab58c5573697af1df7c969cda4f5f685c : std_logic_vector(0 to DWIDTH-1);
 signal a6c87d105c2cb0b4b021f433614039700 : std_logic;
 signal a21652cce845885775a2eded8cc9ae416 : std_logic_vector(0 to DWIDTH-1);
 signal a97652a84fcacbf5b8c408144d10c1e92 : std_logic_vector(0 to DWIDTH/8-1);
 signal ad596c5f840229d6843a21acfcada0c7d : std_logic;
 signal add9c9a979d5706c4d749359e38aa86b7 : std_logic_vector(0 to 7);
 component af0c84f67043c672def74c7662f944969
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
 end component;
 component a3ac470e6eb244b578e155741936a2091
 generic (
 ac9213b9063f1ccdcb676721c8ba7311b : integer := 5;
 aa74fb9cd22cc42439f107a6ca2e5e2e7 : integer := 32;
 a5071e2854bb1994020e9755c33d38a35 : integer := 32
 );
 port ( 
 a4d19dbb2c328e9e81b3f5cb0338b2dff : in std_logic_vector(0 to aa74fb9cd22cc42439f107a6ca2e5e2e7-1);
 af28d3ef501c559275af36e71f10c31ec : in std_logic;
 a2ca671bd85848bb955f4899925401270 : out std_logic_vector(0 to a5071e2854bb1994020e9755c33d38a35-1);
 a45f2bd357ce90119a9a5fc27ff92b819 : in std_logic;
 aa844cc5add4cd16d87149c03d6c994b7 : in std_logic_vector(0 to a5071e2854bb1994020e9755c33d38a35-1);
 a6c8ad0b7cd1b6b75578e0fc933ae75e6 : in std_logic_vector(0 to a5071e2854bb1994020e9755c33d38a35/8-1);
 aa4036a221341c51c9e617a51b41997c4 : out std_logic;
 a9ca4192bcb6bd7d99fe65f6e3e7be5d1 : out std_logic_vector(0 to ac9213b9063f1ccdcb676721c8ba7311b*aa74fb9cd22cc42439f107a6ca2e5e2e7-1);
 aa82cec88f6bdd8f01905aff332684c6f : out std_logic_vector(0 to ac9213b9063f1ccdcb676721c8ba7311b-1);
 a28752638d9db7bae65edc07b0cad20c9 : in std_logic_vector(0 to ac9213b9063f1ccdcb676721c8ba7311b*a5071e2854bb1994020e9755c33d38a35-1);
 a75507020fb9ea9bf04ba6fb4721c1353 : out std_logic_vector(0 to ac9213b9063f1ccdcb676721c8ba7311b-1);
 ac212feca6ad4c6131c0827059b2915b4 : out std_logic_vector(0 to ac9213b9063f1ccdcb676721c8ba7311b*a5071e2854bb1994020e9755c33d38a35-1);
 abb46c40c995b257a7fb008c3d79f0b32 : out std_logic_vector(0 to ac9213b9063f1ccdcb676721c8ba7311b*a5071e2854bb1994020e9755c33d38a35/8-1);
 a094bb3d5d2b00f2d862909e374bea179 : in std_logic_vector(0 to ac9213b9063f1ccdcb676721c8ba7311b-1);
 a5beba813989bcc9d60c4d237cc021063 : in std_logic;
 a5ac85eba25c75ffbc870068f578e81fb : in std_logic;
 add9c9a979d5706c4d749359e38aa86b7 : in std_logic_vector(0 to 7)
 );
 end component;
 begin
 a6167b0ae786a0f4c14f016cbcc2dcb88 : af0c84f67043c672def74c7662f944969 
 generic map (
 aa74fb9cd22cc42439f107a6ca2e5e2e7 => AWIDTH,
 a5071e2854bb1994020e9755c33d38a35 => DWIDTH,
 a122e4eae33693124884a5bd9c54533da => GEN_ID
 )
 port map ( 
 a4d19dbb2c328e9e81b3f5cb0338b2dff => SBI_S_Address,
 af28d3ef501c559275af36e71f10c31ec => SBI_S_ReadEnable,
 a2ca671bd85848bb955f4899925401270 => SBI_S_ReadData,
 a45f2bd357ce90119a9a5fc27ff92b819 => SBI_S_WriteEnable,
 aa844cc5add4cd16d87149c03d6c994b7 => SBI_S_WriteData,
 a6c8ad0b7cd1b6b75578e0fc933ae75e6 => SBI_S_ByteEnable,
 aa4036a221341c51c9e617a51b41997c4 => SBI_S_Ack,
 acc35d8784a29a807a11a2b74a4e72889 => acc35d8784a29a807a11a2b74a4e72889,
 ae72cfc7df0a73a2d8b44853ebd403301 => ae72cfc7df0a73a2d8b44853ebd403301,
 ab58c5573697af1df7c969cda4f5f685c => ab58c5573697af1df7c969cda4f5f685c,
 a6c87d105c2cb0b4b021f433614039700 => a6c87d105c2cb0b4b021f433614039700,
 a21652cce845885775a2eded8cc9ae416 => a21652cce845885775a2eded8cc9ae416,
 a97652a84fcacbf5b8c408144d10c1e92 => a97652a84fcacbf5b8c408144d10c1e92,
 ad596c5f840229d6843a21acfcada0c7d => ad596c5f840229d6843a21acfcada0c7d,
 a5beba813989bcc9d60c4d237cc021063 => Clk,
 a5ac85eba25c75ffbc870068f578e81fb => '1',
 add9c9a979d5706c4d749359e38aa86b7 => add9c9a979d5706c4d749359e38aa86b7
 );
 a5a5d10fdc48bdf580ec957dcfd7eb18a : a3ac470e6eb244b578e155741936a2091 
 generic map (
 ac9213b9063f1ccdcb676721c8ba7311b => N,
 aa74fb9cd22cc42439f107a6ca2e5e2e7 => AWIDTH,
 a5071e2854bb1994020e9755c33d38a35 => DWIDTH
 )
 port map ( 
 a4d19dbb2c328e9e81b3f5cb0338b2dff => acc35d8784a29a807a11a2b74a4e72889,
 af28d3ef501c559275af36e71f10c31ec => ae72cfc7df0a73a2d8b44853ebd403301,
 a2ca671bd85848bb955f4899925401270 => ab58c5573697af1df7c969cda4f5f685c,
 a45f2bd357ce90119a9a5fc27ff92b819 => a6c87d105c2cb0b4b021f433614039700,
 aa844cc5add4cd16d87149c03d6c994b7 => a21652cce845885775a2eded8cc9ae416,
 a6c8ad0b7cd1b6b75578e0fc933ae75e6 => a97652a84fcacbf5b8c408144d10c1e92,
 aa4036a221341c51c9e617a51b41997c4 => ad596c5f840229d6843a21acfcada0c7d,
 a9ca4192bcb6bd7d99fe65f6e3e7be5d1 => SBI_MS_MUX_Address,
 aa82cec88f6bdd8f01905aff332684c6f => SBI_MS_MUX_ReadEnable,
 a28752638d9db7bae65edc07b0cad20c9 => SBI_MS_MUX_ReadData,
 a75507020fb9ea9bf04ba6fb4721c1353 => SBI_MS_MUX_WriteEnable,
 ac212feca6ad4c6131c0827059b2915b4 => SBI_MS_MUX_WriteData,
 abb46c40c995b257a7fb008c3d79f0b32 => SBI_MS_MUX_ByteEnable,
 a094bb3d5d2b00f2d862909e374bea179 => SBI_MS_MUX_Ack,
 a5beba813989bcc9d60c4d237cc021063 => Clk,
 a5ac85eba25c75ffbc870068f578e81fb => '1',
 add9c9a979d5706c4d749359e38aa86b7 => add9c9a979d5706c4d749359e38aa86b7
 );
end behavioral;
