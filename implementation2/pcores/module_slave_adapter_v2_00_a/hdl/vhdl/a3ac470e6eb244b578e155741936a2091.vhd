--------------------------------------------------------------------------------
-- Filename : a3ac470e6eb244b578e155741936a2091.vhd
-- *****************************************************************************
--  Copyright 2011 - Space Codesign Systems, Inc.
--  All rights reserved.
-- *****************************************************************************
--------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
entity a3ac470e6eb244b578e155741936a2091 is
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
end a3ac470e6eb244b578e155741936a2091;
architecture aa76679b342f80bc7df0b09be809dcca9 of a3ac470e6eb244b578e155741936a2091 is
 signal aad3fe6fcafc6102da9fddd5258c4d784 : integer range 0 to ac9213b9063f1ccdcb676721c8ba7311b-1 := 0;
 begin
 aad3fe6fcafc6102da9fddd5258c4d784 <= to_integer(unsigned(add9c9a979d5706c4d749359e38aa86b7));
 ac3702d264208761a44859e7e99629e23 : process (a5beba813989bcc9d60c4d237cc021063)
 begin
 if (a5beba813989bcc9d60c4d237cc021063'event and a5beba813989bcc9d60c4d237cc021063 = '1') then
 a9ca4192bcb6bd7d99fe65f6e3e7be5d1 <= (others => '0');
 aa82cec88f6bdd8f01905aff332684c6f <= (others => '0');
 a2ca671bd85848bb955f4899925401270 <= (others => '0');
 a75507020fb9ea9bf04ba6fb4721c1353 <= (others => '0');
 ac212feca6ad4c6131c0827059b2915b4 <= (others => '0');
 abb46c40c995b257a7fb008c3d79f0b32 <= (others => '0');
 aa4036a221341c51c9e617a51b41997c4 <= '0';
 if (a5ac85eba25c75ffbc870068f578e81fb = '1') then
 a9ca4192bcb6bd7d99fe65f6e3e7be5d1(aad3fe6fcafc6102da9fddd5258c4d784*aa74fb9cd22cc42439f107a6ca2e5e2e7 to (aad3fe6fcafc6102da9fddd5258c4d784*aa74fb9cd22cc42439f107a6ca2e5e2e7)+aa74fb9cd22cc42439f107a6ca2e5e2e7-1) <= a4d19dbb2c328e9e81b3f5cb0338b2dff;
 aa82cec88f6bdd8f01905aff332684c6f(aad3fe6fcafc6102da9fddd5258c4d784) <= af28d3ef501c559275af36e71f10c31ec;
 a2ca671bd85848bb955f4899925401270 <= a28752638d9db7bae65edc07b0cad20c9(aad3fe6fcafc6102da9fddd5258c4d784*a5071e2854bb1994020e9755c33d38a35 to (aad3fe6fcafc6102da9fddd5258c4d784*a5071e2854bb1994020e9755c33d38a35)+a5071e2854bb1994020e9755c33d38a35-1);
 a75507020fb9ea9bf04ba6fb4721c1353(aad3fe6fcafc6102da9fddd5258c4d784) <= a45f2bd357ce90119a9a5fc27ff92b819;
 ac212feca6ad4c6131c0827059b2915b4(aad3fe6fcafc6102da9fddd5258c4d784*a5071e2854bb1994020e9755c33d38a35 to (aad3fe6fcafc6102da9fddd5258c4d784*a5071e2854bb1994020e9755c33d38a35)+a5071e2854bb1994020e9755c33d38a35-1) <= aa844cc5add4cd16d87149c03d6c994b7;
 abb46c40c995b257a7fb008c3d79f0b32(aad3fe6fcafc6102da9fddd5258c4d784*a5071e2854bb1994020e9755c33d38a35/8 to (aad3fe6fcafc6102da9fddd5258c4d784*a5071e2854bb1994020e9755c33d38a35/8)+a5071e2854bb1994020e9755c33d38a35/8-1) <= a6c8ad0b7cd1b6b75578e0fc933ae75e6;
 aa4036a221341c51c9e617a51b41997c4 <= a094bb3d5d2b00f2d862909e374bea179(aad3fe6fcafc6102da9fddd5258c4d784);
 end if;
 end if;
 end process ac3702d264208761a44859e7e99629e23;
end aa76679b342f80bc7df0b09be809dcca9;
