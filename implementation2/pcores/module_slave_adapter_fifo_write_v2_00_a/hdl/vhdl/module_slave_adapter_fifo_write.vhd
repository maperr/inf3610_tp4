--------------------------------------------------------------------------------
-- Filename : module_slave_adapter_fifo_write.vhd
-- *****************************************************************************
--  Copyright 2011 - Space Codesign Systems, Inc.
--  All rights reserved.
-- *****************************************************************************
--------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
entity module_slave_adapter_fifo_write is
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
 SDL_S_Clk : in std_logic;
 SDL_S_Data : out std_logic_vector(0 to DWIDTH-1);
 SDL_S_Read : in std_logic;
 SDL_S_Empty : out std_logic;
 Reset : in std_logic;
 IRQHasRoom : out std_logic
 );
end module_slave_adapter_fifo_write;
architecture behavioral of module_slave_adapter_fifo_write is
 signal a4e648c8c1d999bb6afdd205393702fb6 : std_logic_vector(0 to DWIDTH-1);
 signal a0a854a10b34c24087585faddd5c878b5 : std_logic;
 signal a4774fcc1453311ab07e7c59c10765c1d : std_logic;
 signal a06afc62ae6a3f0b076e5d161d56aafd7 : std_logic_vector(0 to AWIDTH-1);
 component a2d425de0d615ef5f5e5a6d5498c04be8
 generic (
 a916e7c8b982d147d353f78cf8e859121: std_logic := '1';
 af4963a56a9eecb57981ce9188ea2e322: integer := 32;
 a7f9063bbdd3f2f67d8e08b062e7760a4: integer := 32
 );
 port (
 a55f804a2775429099e7a8163f2955436 : in std_logic;
 aec1c626549295a6065a8d537d083f4bc : out std_logic;
 a4e648c8c1d999bb6afdd205393702fb6 : out std_logic_vector(0 to a7f9063bbdd3f2f67d8e08b062e7760a4-1);
 a0a854a10b34c24087585faddd5c878b5 : out std_logic;
 a4774fcc1453311ab07e7c59c10765c1d : in std_logic;
 a06afc62ae6a3f0b076e5d161d56aafd7 : in std_logic_vector(0 to af4963a56a9eecb57981ce9188ea2e322-1);
 ad127af9b2ba371c2b70105c8ec2ebfe3 : in std_logic;
 afd8b782de802f7dc2adc0843020352a7 : in std_logic_vector(0 to af4963a56a9eecb57981ce9188ea2e322-1);
 adf894d54c19cdb0dddd245f2df700615 : in std_logic;
 ad7abbe6f612a9fbfe59d58e83802a1aa : out std_logic_vector(0 to a7f9063bbdd3f2f67d8e08b062e7760a4-1);
 adc9844622d8128e64f71e28a97dc8579 : in std_logic;
 a208cc02b0fe837d6414a46868f0478e9 : in std_logic_vector(0 to a7f9063bbdd3f2f67d8e08b062e7760a4-1);
 aa7f5e023a30da5dc917ae78e00380937 : in std_logic_vector(0 to a7f9063bbdd3f2f67d8e08b062e7760a4/8-1);
 afff1a82cf817b8500df89071fbdace5d : out std_logic
 );
 end component;
 component a5a494554a9b3c82a28fd9c2aef3bb0c0
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
 end component;
 begin
 af9e65fdbe50c8197dfbc98ae06e45324: if (GEN_ID = 0) generate
 a6d4c9cad851431299846a615f1028a2a : a2d425de0d615ef5f5e5a6d5498c04be8
 generic map (
 a916e7c8b982d147d353f78cf8e859121 => '0',
 af4963a56a9eecb57981ce9188ea2e322 => AWIDTH,
 a7f9063bbdd3f2f67d8e08b062e7760a4 => DWIDTH
 )
 port map (
 a55f804a2775429099e7a8163f2955436 => Reset,
 aec1c626549295a6065a8d537d083f4bc => IRQHasRoom,
 a4e648c8c1d999bb6afdd205393702fb6 => a4e648c8c1d999bb6afdd205393702fb6,
 a0a854a10b34c24087585faddd5c878b5 => a0a854a10b34c24087585faddd5c878b5,
 a4774fcc1453311ab07e7c59c10765c1d => a4774fcc1453311ab07e7c59c10765c1d,
 a06afc62ae6a3f0b076e5d161d56aafd7 => a06afc62ae6a3f0b076e5d161d56aafd7,
 ad127af9b2ba371c2b70105c8ec2ebfe3 => SBI_S_Clk,
 afd8b782de802f7dc2adc0843020352a7 => SBI_S_Address,
 adf894d54c19cdb0dddd245f2df700615 => SBI_S_ReadEnable,
 ad7abbe6f612a9fbfe59d58e83802a1aa => SBI_S_ReadData,
 adc9844622d8128e64f71e28a97dc8579 => SBI_S_WriteEnable,
 a208cc02b0fe837d6414a46868f0478e9 => SBI_S_WriteData,
 aa7f5e023a30da5dc917ae78e00380937 => SBI_S_ByteEnable,
 afff1a82cf817b8500df89071fbdace5d => SBI_S_Ack
 );
 inst_aa4d6d3e42eb69411cc5e3c9b1c4bcd8e_0 : a5a494554a9b3c82a28fd9c2aef3bb0c0
 generic map (
 a56bddefda66c3cda94dc1b5009c4e40e => 64,
 af4963a56a9eecb57981ce9188ea2e322 => AWIDTH,
 a7f9063bbdd3f2f67d8e08b062e7760a4 => DWIDTH
 )
 port map (
 a55f804a2775429099e7a8163f2955436 => Reset,
 af8b6ec115c9cd5f70a50f2d6cea080e2 => SBI_S_Clk,
 a4e648c8c1d999bb6afdd205393702fb6 => a4e648c8c1d999bb6afdd205393702fb6,
 a0a854a10b34c24087585faddd5c878b5 => a0a854a10b34c24087585faddd5c878b5,
 a4774fcc1453311ab07e7c59c10765c1d => a4774fcc1453311ab07e7c59c10765c1d,
 a06afc62ae6a3f0b076e5d161d56aafd7 => a06afc62ae6a3f0b076e5d161d56aafd7,
 aa411bab49f63a5a8fac8336b7a3e7a00 => SDL_S_Clk,
 a72a5589a69a81e6bd071b3280f2e41d0 => SDL_S_Data,
 a1856cdb06fcdcfcc3af07c15d4acb9b9 => SDL_S_Read,
 ad8323873c9a204a7db9564c987c8cd1f => SDL_S_Empty
 );
 end generate af9e65fdbe50c8197dfbc98ae06e45324;
 a874bd62b50943191e8e5a3ceafd0da0a: if (GEN_ID = 1) generate
 a6d4c9cad851431299846a615f1028a2a : a2d425de0d615ef5f5e5a6d5498c04be8
 generic map (
 a916e7c8b982d147d353f78cf8e859121 => '0',
 af4963a56a9eecb57981ce9188ea2e322 => AWIDTH,
 a7f9063bbdd3f2f67d8e08b062e7760a4 => DWIDTH
 )
 port map (
 a55f804a2775429099e7a8163f2955436 => Reset,
 aec1c626549295a6065a8d537d083f4bc => IRQHasRoom,
 a4e648c8c1d999bb6afdd205393702fb6 => a4e648c8c1d999bb6afdd205393702fb6,
 a0a854a10b34c24087585faddd5c878b5 => a0a854a10b34c24087585faddd5c878b5,
 a4774fcc1453311ab07e7c59c10765c1d => a4774fcc1453311ab07e7c59c10765c1d,
 a06afc62ae6a3f0b076e5d161d56aafd7 => a06afc62ae6a3f0b076e5d161d56aafd7,
 ad127af9b2ba371c2b70105c8ec2ebfe3 => SBI_S_Clk,
 afd8b782de802f7dc2adc0843020352a7 => SBI_S_Address,
 adf894d54c19cdb0dddd245f2df700615 => SBI_S_ReadEnable,
 ad7abbe6f612a9fbfe59d58e83802a1aa => SBI_S_ReadData,
 adc9844622d8128e64f71e28a97dc8579 => SBI_S_WriteEnable,
 a208cc02b0fe837d6414a46868f0478e9 => SBI_S_WriteData,
 aa7f5e023a30da5dc917ae78e00380937 => SBI_S_ByteEnable,
 afff1a82cf817b8500df89071fbdace5d => SBI_S_Ack
 );
 inst_aa4d6d3e42eb69411cc5e3c9b1c4bcd8e_0 : a5a494554a9b3c82a28fd9c2aef3bb0c0
 generic map (
 a56bddefda66c3cda94dc1b5009c4e40e => 64,
 af4963a56a9eecb57981ce9188ea2e322 => AWIDTH,
 a7f9063bbdd3f2f67d8e08b062e7760a4 => DWIDTH
 )
 port map (
 a55f804a2775429099e7a8163f2955436 => Reset,
 af8b6ec115c9cd5f70a50f2d6cea080e2 => SBI_S_Clk,
 a4e648c8c1d999bb6afdd205393702fb6 => a4e648c8c1d999bb6afdd205393702fb6,
 a0a854a10b34c24087585faddd5c878b5 => a0a854a10b34c24087585faddd5c878b5,
 a4774fcc1453311ab07e7c59c10765c1d => a4774fcc1453311ab07e7c59c10765c1d,
 a06afc62ae6a3f0b076e5d161d56aafd7 => a06afc62ae6a3f0b076e5d161d56aafd7,
 aa411bab49f63a5a8fac8336b7a3e7a00 => SDL_S_Clk,
 a72a5589a69a81e6bd071b3280f2e41d0 => SDL_S_Data,
 a1856cdb06fcdcfcc3af07c15d4acb9b9 => SDL_S_Read,
 ad8323873c9a204a7db9564c987c8cd1f => SDL_S_Empty
 );
 end generate a874bd62b50943191e8e5a3ceafd0da0a;
 a878f7fa35e25cb51b45dfd6661863ab2: if (GEN_ID = 2) generate
 a6d4c9cad851431299846a615f1028a2a : a2d425de0d615ef5f5e5a6d5498c04be8
 generic map (
 a916e7c8b982d147d353f78cf8e859121 => '0',
 af4963a56a9eecb57981ce9188ea2e322 => AWIDTH,
 a7f9063bbdd3f2f67d8e08b062e7760a4 => DWIDTH
 )
 port map (
 a55f804a2775429099e7a8163f2955436 => Reset,
 aec1c626549295a6065a8d537d083f4bc => IRQHasRoom,
 a4e648c8c1d999bb6afdd205393702fb6 => a4e648c8c1d999bb6afdd205393702fb6,
 a0a854a10b34c24087585faddd5c878b5 => a0a854a10b34c24087585faddd5c878b5,
 a4774fcc1453311ab07e7c59c10765c1d => a4774fcc1453311ab07e7c59c10765c1d,
 a06afc62ae6a3f0b076e5d161d56aafd7 => a06afc62ae6a3f0b076e5d161d56aafd7,
 ad127af9b2ba371c2b70105c8ec2ebfe3 => SBI_S_Clk,
 afd8b782de802f7dc2adc0843020352a7 => SBI_S_Address,
 adf894d54c19cdb0dddd245f2df700615 => SBI_S_ReadEnable,
 ad7abbe6f612a9fbfe59d58e83802a1aa => SBI_S_ReadData,
 adc9844622d8128e64f71e28a97dc8579 => SBI_S_WriteEnable,
 a208cc02b0fe837d6414a46868f0478e9 => SBI_S_WriteData,
 aa7f5e023a30da5dc917ae78e00380937 => SBI_S_ByteEnable,
 afff1a82cf817b8500df89071fbdace5d => SBI_S_Ack
 );
 inst_aa4d6d3e42eb69411cc5e3c9b1c4bcd8e_0 : a5a494554a9b3c82a28fd9c2aef3bb0c0
 generic map (
 a56bddefda66c3cda94dc1b5009c4e40e => 64,
 af4963a56a9eecb57981ce9188ea2e322 => AWIDTH,
 a7f9063bbdd3f2f67d8e08b062e7760a4 => DWIDTH
 )
 port map (
 a55f804a2775429099e7a8163f2955436 => Reset,
 af8b6ec115c9cd5f70a50f2d6cea080e2 => SBI_S_Clk,
 a4e648c8c1d999bb6afdd205393702fb6 => a4e648c8c1d999bb6afdd205393702fb6,
 a0a854a10b34c24087585faddd5c878b5 => a0a854a10b34c24087585faddd5c878b5,
 a4774fcc1453311ab07e7c59c10765c1d => a4774fcc1453311ab07e7c59c10765c1d,
 a06afc62ae6a3f0b076e5d161d56aafd7 => a06afc62ae6a3f0b076e5d161d56aafd7,
 aa411bab49f63a5a8fac8336b7a3e7a00 => SDL_S_Clk,
 a72a5589a69a81e6bd071b3280f2e41d0 => SDL_S_Data,
 a1856cdb06fcdcfcc3af07c15d4acb9b9 => SDL_S_Read,
 ad8323873c9a204a7db9564c987c8cd1f => SDL_S_Empty
 );
 end generate a878f7fa35e25cb51b45dfd6661863ab2;
 ac90f9948b8a5ad04a630e605c21b9167: if (GEN_ID = 3) generate
 a6d4c9cad851431299846a615f1028a2a : a2d425de0d615ef5f5e5a6d5498c04be8
 generic map (
 a916e7c8b982d147d353f78cf8e859121 => '0',
 af4963a56a9eecb57981ce9188ea2e322 => AWIDTH,
 a7f9063bbdd3f2f67d8e08b062e7760a4 => DWIDTH
 )
 port map (
 a55f804a2775429099e7a8163f2955436 => Reset,
 aec1c626549295a6065a8d537d083f4bc => IRQHasRoom,
 a4e648c8c1d999bb6afdd205393702fb6 => a4e648c8c1d999bb6afdd205393702fb6,
 a0a854a10b34c24087585faddd5c878b5 => a0a854a10b34c24087585faddd5c878b5,
 a4774fcc1453311ab07e7c59c10765c1d => a4774fcc1453311ab07e7c59c10765c1d,
 a06afc62ae6a3f0b076e5d161d56aafd7 => a06afc62ae6a3f0b076e5d161d56aafd7,
 ad127af9b2ba371c2b70105c8ec2ebfe3 => SBI_S_Clk,
 afd8b782de802f7dc2adc0843020352a7 => SBI_S_Address,
 adf894d54c19cdb0dddd245f2df700615 => SBI_S_ReadEnable,
 ad7abbe6f612a9fbfe59d58e83802a1aa => SBI_S_ReadData,
 adc9844622d8128e64f71e28a97dc8579 => SBI_S_WriteEnable,
 a208cc02b0fe837d6414a46868f0478e9 => SBI_S_WriteData,
 aa7f5e023a30da5dc917ae78e00380937 => SBI_S_ByteEnable,
 afff1a82cf817b8500df89071fbdace5d => SBI_S_Ack
 );
 inst_aa4d6d3e42eb69411cc5e3c9b1c4bcd8e_0 : a5a494554a9b3c82a28fd9c2aef3bb0c0
 generic map (
 a56bddefda66c3cda94dc1b5009c4e40e => 64,
 af4963a56a9eecb57981ce9188ea2e322 => AWIDTH,
 a7f9063bbdd3f2f67d8e08b062e7760a4 => DWIDTH
 )
 port map (
 a55f804a2775429099e7a8163f2955436 => Reset,
 af8b6ec115c9cd5f70a50f2d6cea080e2 => SBI_S_Clk,
 a4e648c8c1d999bb6afdd205393702fb6 => a4e648c8c1d999bb6afdd205393702fb6,
 a0a854a10b34c24087585faddd5c878b5 => a0a854a10b34c24087585faddd5c878b5,
 a4774fcc1453311ab07e7c59c10765c1d => a4774fcc1453311ab07e7c59c10765c1d,
 a06afc62ae6a3f0b076e5d161d56aafd7 => a06afc62ae6a3f0b076e5d161d56aafd7,
 aa411bab49f63a5a8fac8336b7a3e7a00 => SDL_S_Clk,
 a72a5589a69a81e6bd071b3280f2e41d0 => SDL_S_Data,
 a1856cdb06fcdcfcc3af07c15d4acb9b9 => SDL_S_Read,
 ad8323873c9a204a7db9564c987c8cd1f => SDL_S_Empty
 );
 end generate ac90f9948b8a5ad04a630e605c21b9167;
 ae433a391cc51e9709af829097a78a72d: if (GEN_ID = 4) generate
 a6d4c9cad851431299846a615f1028a2a : a2d425de0d615ef5f5e5a6d5498c04be8
 generic map (
 a916e7c8b982d147d353f78cf8e859121 => '0',
 af4963a56a9eecb57981ce9188ea2e322 => AWIDTH,
 a7f9063bbdd3f2f67d8e08b062e7760a4 => DWIDTH
 )
 port map (
 a55f804a2775429099e7a8163f2955436 => Reset,
 aec1c626549295a6065a8d537d083f4bc => IRQHasRoom,
 a4e648c8c1d999bb6afdd205393702fb6 => a4e648c8c1d999bb6afdd205393702fb6,
 a0a854a10b34c24087585faddd5c878b5 => a0a854a10b34c24087585faddd5c878b5,
 a4774fcc1453311ab07e7c59c10765c1d => a4774fcc1453311ab07e7c59c10765c1d,
 a06afc62ae6a3f0b076e5d161d56aafd7 => a06afc62ae6a3f0b076e5d161d56aafd7,
 ad127af9b2ba371c2b70105c8ec2ebfe3 => SBI_S_Clk,
 afd8b782de802f7dc2adc0843020352a7 => SBI_S_Address,
 adf894d54c19cdb0dddd245f2df700615 => SBI_S_ReadEnable,
 ad7abbe6f612a9fbfe59d58e83802a1aa => SBI_S_ReadData,
 adc9844622d8128e64f71e28a97dc8579 => SBI_S_WriteEnable,
 a208cc02b0fe837d6414a46868f0478e9 => SBI_S_WriteData,
 aa7f5e023a30da5dc917ae78e00380937 => SBI_S_ByteEnable,
 afff1a82cf817b8500df89071fbdace5d => SBI_S_Ack
 );
 inst_aa4d6d3e42eb69411cc5e3c9b1c4bcd8e_0 : a5a494554a9b3c82a28fd9c2aef3bb0c0
 generic map (
 a56bddefda66c3cda94dc1b5009c4e40e => 64,
 af4963a56a9eecb57981ce9188ea2e322 => AWIDTH,
 a7f9063bbdd3f2f67d8e08b062e7760a4 => DWIDTH
 )
 port map (
 a55f804a2775429099e7a8163f2955436 => Reset,
 af8b6ec115c9cd5f70a50f2d6cea080e2 => SBI_S_Clk,
 a4e648c8c1d999bb6afdd205393702fb6 => a4e648c8c1d999bb6afdd205393702fb6,
 a0a854a10b34c24087585faddd5c878b5 => a0a854a10b34c24087585faddd5c878b5,
 a4774fcc1453311ab07e7c59c10765c1d => a4774fcc1453311ab07e7c59c10765c1d,
 a06afc62ae6a3f0b076e5d161d56aafd7 => a06afc62ae6a3f0b076e5d161d56aafd7,
 aa411bab49f63a5a8fac8336b7a3e7a00 => SDL_S_Clk,
 a72a5589a69a81e6bd071b3280f2e41d0 => SDL_S_Data,
 a1856cdb06fcdcfcc3af07c15d4acb9b9 => SDL_S_Read,
 ad8323873c9a204a7db9564c987c8cd1f => SDL_S_Empty
 );
 end generate ae433a391cc51e9709af829097a78a72d;
end behavioral;
