--------------------------------------------------------------------------------
-- Filename : a5a494554a9b3c82a28fd9c2aef3bb0c0.vhd
-- *****************************************************************************
--  Copyright 2011 - Space Codesign Systems, Inc.
--  All rights reserved.
-- *****************************************************************************
--------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
entity a5a494554a9b3c82a28fd9c2aef3bb0c0 is
 generic (
 a56bddefda66c3cda94dc1b5009c4e40e : integer := 64; 
 af4963a56a9eecb57981ce9188ea2e322 : integer := 32;
 a7f9063bbdd3f2f67d8e08b062e7760a4 : integer := 32
 );
 port (
 a55f804a2775429099e7a8163f2955436 : in std_logic;
 af8b6ec115c9cd5f70a50f2d6cea080e2 : in std_logic;
 a4e648c8c1d999bb6afdd205393702fb6 : in std_logic_vector(0 to a7f9063bbdd3f2f67d8e08b062e7760a4-1);
 a0a854a10b34c24087585faddd5c878b5 : in std_logic;
 a4774fcc1453311ab07e7c59c10765c1d : out std_logic;
 a06afc62ae6a3f0b076e5d161d56aafd7 : out std_logic_vector(0 to af4963a56a9eecb57981ce9188ea2e322-1);
 aa411bab49f63a5a8fac8336b7a3e7a00 : in std_logic;
 a72a5589a69a81e6bd071b3280f2e41d0 : out std_logic_vector(0 to a7f9063bbdd3f2f67d8e08b062e7760a4-1);
 a1856cdb06fcdcfcc3af07c15d4acb9b9 : in std_logic;
 ad8323873c9a204a7db9564c987c8cd1f : out std_logic;
 ad9755729b2b38bf153ad4c4caac3d327 : out std_logic_vector(0 to af4963a56a9eecb57981ce9188ea2e322-1)
 );
end a5a494554a9b3c82a28fd9c2aef3bb0c0;
architecture a3ab28b09209cdf1d9a2246a16c63dec9 of a5a494554a9b3c82a28fd9c2aef3bb0c0 is
 component fifo_a6f46cee94d1815e429dbed82bed6cb1b
 port (
 din : in std_logic_VECTOR(31 downto 0);
 rd_en : in std_logic;
 rst : in std_logic;
 wr_en : in std_logic;
 dout : out std_logic_VECTOR(31 downto 0);
 empty : out std_logic;
 full : out std_logic;
 rd_data_count : out std_logic_VECTOR(7 downto 0);
 wr_data_count : out std_logic_VECTOR(7 downto 0); 
 wr_clk : in std_logic;
 rd_clk : in std_logic 
 );
 end component;
 constant a74303f5c5937487584b0d624f4e6398c : integer := 7;
 signal a44daba211a75a77e1e197609e1d90896 : std_logic_vector(7 downto 0);
 signal ad2df34cd207e259375c7452299a4517c : std_logic_vector(7 downto 0); 
 signal a22b923627be8797f55a94ef0e70cadf6 : std_logic := '0';
 signal adfe7aaff4e321110a5cff8714bc37624 : std_logic := '0';
 signal a0036f891c406439ef000f2facef40648 : std_logic := '0';
 signal a47c14f48d5703ba8de4c9b40c84f2b00: std_logic := '0'; 
 attribute box_type: string;
 attribute box_type of fifo_a6f46cee94d1815e429dbed82bed6cb1b: component is "black_box";
 begin
 a720a43f659d32c8082c63fe750930244 : fifo_a6f46cee94d1815e429dbed82bed6cb1b
 port map (
 din => a4e648c8c1d999bb6afdd205393702fb6,
 wr_en => a47c14f48d5703ba8de4c9b40c84f2b00,
 full => a22b923627be8797f55a94ef0e70cadf6, 
 dout => a72a5589a69a81e6bd071b3280f2e41d0,
 rd_en => a0036f891c406439ef000f2facef40648, 
 empty => adfe7aaff4e321110a5cff8714bc37624,
 rst => a55f804a2775429099e7a8163f2955436,
 wr_data_count => a44daba211a75a77e1e197609e1d90896,
 rd_data_count => ad2df34cd207e259375c7452299a4517c, 
 wr_clk => af8b6ec115c9cd5f70a50f2d6cea080e2,
 rd_clk => aa411bab49f63a5a8fac8336b7a3e7a00
 ); 
 a0036f891c406439ef000f2facef40648 <= a1856cdb06fcdcfcc3af07c15d4acb9b9 when (a55f804a2775429099e7a8163f2955436 = '0') else '0';
 a47c14f48d5703ba8de4c9b40c84f2b00 <= a0a854a10b34c24087585faddd5c878b5 when (a55f804a2775429099e7a8163f2955436 = '0') else '0';
 a4774fcc1453311ab07e7c59c10765c1d <= a22b923627be8797f55a94ef0e70cadf6 when (a55f804a2775429099e7a8163f2955436 = '0') else '1';
 ad8323873c9a204a7db9564c987c8cd1f <= adfe7aaff4e321110a5cff8714bc37624 when (a55f804a2775429099e7a8163f2955436 = '0') else '1';
 a06afc62ae6a3f0b076e5d161d56aafd7 <= std_logic_vector(to_unsigned(a56bddefda66c3cda94dc1b5009c4e40e+1, af4963a56a9eecb57981ce9188ea2e322) - unsigned(a44daba211a75a77e1e197609e1d90896)) when (a22b923627be8797f55a94ef0e70cadf6 = '0') else (others => '0');
 ad9755729b2b38bf153ad4c4caac3d327(af4963a56a9eecb57981ce9188ea2e322-a74303f5c5937487584b0d624f4e6398c-1 to af4963a56a9eecb57981ce9188ea2e322-1) <= ad2df34cd207e259375c7452299a4517c;
 ad9755729b2b38bf153ad4c4caac3d327(0 to af4963a56a9eecb57981ce9188ea2e322-a74303f5c5937487584b0d624f4e6398c-2) <= (others => '0');
end a3ab28b09209cdf1d9a2246a16c63dec9;
