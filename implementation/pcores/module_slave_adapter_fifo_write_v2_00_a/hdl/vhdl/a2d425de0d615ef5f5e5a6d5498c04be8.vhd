--------------------------------------------------------------------------------
-- Filename : a2d425de0d615ef5f5e5a6d5498c04be8.vhd
-- *****************************************************************************
--  Copyright 2011 - Space Codesign Systems, Inc.
--  All rights reserved.
-- *****************************************************************************
--------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use IEEE.numeric_std.all;
entity a2d425de0d615ef5f5e5a6d5498c04be8 is
 generic (
 a916e7c8b982d147d353f78cf8e859121 : std_logic := '1'; 
 af4963a56a9eecb57981ce9188ea2e322 : integer := 32; 
 a7f9063bbdd3f2f67d8e08b062e7760a4 : integer := 32 
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
end a2d425de0d615ef5f5e5a6d5498c04be8;
architecture a646f6e31569730531cd26978234e7b8d of a2d425de0d615ef5f5e5a6d5498c04be8 is
 constant ac8c541e4bbc1b180a126e67e9a72de5f : std_logic_vector := "0000";
 constant afcb45f8dcdd55d955cc01ab151b516c3 : std_logic_vector := "0100";
 constant ade775036a3972cc83c73e45c32e5d569 : std_logic_vector := "1000";
 constant a33129d3aeb7e175f2c50c7dd010f4635 : std_logic_vector := "1100";
 signal a8d847fecf25013802228f91f1dec1566 : std_logic_vector(0 to 3);
 signal ac869e0c22a926dcab0f5287e0e220c32 : std_logic_vector(0 to a7f9063bbdd3f2f67d8e08b062e7760a4-1) := std_logic_vector(to_unsigned(1,a7f9063bbdd3f2f67d8e08b062e7760a4)); 
 signal a925d9c228cab30218f0d77dd7bac9bf3 : std_logic := '0';
 signal a85b1e5129db272558aa2d9af56c34901 : std_logic := '0';
 signal acd1e5890a488708f2ca2186ab0b34787 : std_logic := '0';
 signal abdf618c0b612488de12ec1d8516fc83a : std_logic := '0';
 signal ab78ceacfb68fa19b6744b741e6fc16dc : std_logic_vector(0 to af4963a56a9eecb57981ce9188ea2e322-1);
 begin
 a8d847fecf25013802228f91f1dec1566 <= afd8b782de802f7dc2adc0843020352a7(af4963a56a9eecb57981ce9188ea2e322-4 to af4963a56a9eecb57981ce9188ea2e322-1);
 a605c5b16361303652f2963e931e63f64 : process (ad127af9b2ba371c2b70105c8ec2ebfe3) 
 begin
 if (ad127af9b2ba371c2b70105c8ec2ebfe3'event and ad127af9b2ba371c2b70105c8ec2ebfe3 = '1') then
 afff1a82cf817b8500df89071fbdace5d <= '0';
 a0a854a10b34c24087585faddd5c878b5 <= '0';
 ad7abbe6f612a9fbfe59d58e83802a1aa <= (others => '0');
 a4e648c8c1d999bb6afdd205393702fb6 <= (others => '0');
 a85b1e5129db272558aa2d9af56c34901 <= a925d9c228cab30218f0d77dd7bac9bf3;
 if (a55f804a2775429099e7a8163f2955436 = '1') then 
 ac869e0c22a926dcab0f5287e0e220c32 <= std_logic_vector(to_unsigned(1,ac869e0c22a926dcab0f5287e0e220c32'length));
 a925d9c228cab30218f0d77dd7bac9bf3 <= '0';
 a85b1e5129db272558aa2d9af56c34901 <= '0';
 else
 case a8d847fecf25013802228f91f1dec1566 is
 when ac8c541e4bbc1b180a126e67e9a72de5f => 
 if (abdf618c0b612488de12ec1d8516fc83a = '0') and (adc9844622d8128e64f71e28a97dc8579 = '1') then
 a4e648c8c1d999bb6afdd205393702fb6 <= a208cc02b0fe837d6414a46868f0478e9;
 a0a854a10b34c24087585faddd5c878b5 <= '1';
 afff1a82cf817b8500df89071fbdace5d <= '1';
 end if;
 when afcb45f8dcdd55d955cc01ab151b516c3 => 
 if (acd1e5890a488708f2ca2186ab0b34787 = '0') and (adf894d54c19cdb0dddd245f2df700615 = '1') then
 ad7abbe6f612a9fbfe59d58e83802a1aa <= a06afc62ae6a3f0b076e5d161d56aafd7;
 afff1a82cf817b8500df89071fbdace5d <= '1';
 end if;
 when ade775036a3972cc83c73e45c32e5d569 => 
 if (abdf618c0b612488de12ec1d8516fc83a = '0') and (adc9844622d8128e64f71e28a97dc8579 = '1') then
 ac869e0c22a926dcab0f5287e0e220c32 <= a208cc02b0fe837d6414a46868f0478e9;
 afff1a82cf817b8500df89071fbdace5d <= '1';
 end if;
 if (acd1e5890a488708f2ca2186ab0b34787 = '0') and (adf894d54c19cdb0dddd245f2df700615 = '1') then
 ad7abbe6f612a9fbfe59d58e83802a1aa <= ac869e0c22a926dcab0f5287e0e220c32;
 afff1a82cf817b8500df89071fbdace5d <= '1';
 end if;
 when a33129d3aeb7e175f2c50c7dd010f4635 => 
 if (abdf618c0b612488de12ec1d8516fc83a = '0') and (adc9844622d8128e64f71e28a97dc8579 = '1') then
 a925d9c228cab30218f0d77dd7bac9bf3 <= a208cc02b0fe837d6414a46868f0478e9(a7f9063bbdd3f2f67d8e08b062e7760a4-1);
 afff1a82cf817b8500df89071fbdace5d <= '1';
 end if;
 if (acd1e5890a488708f2ca2186ab0b34787 = '0') and (adf894d54c19cdb0dddd245f2df700615 = '1') then
 ad7abbe6f612a9fbfe59d58e83802a1aa(a7f9063bbdd3f2f67d8e08b062e7760a4-1) <= a925d9c228cab30218f0d77dd7bac9bf3;
 afff1a82cf817b8500df89071fbdace5d <= '1';
 end if;
 when others =>
 if (adf894d54c19cdb0dddd245f2df700615 = '1' or adc9844622d8128e64f71e28a97dc8579 = '1') then
 afff1a82cf817b8500df89071fbdace5d <= '1';
 end if;
 end case;
 end if;
 end if;
 end process a605c5b16361303652f2963e931e63f64;
 a09de7f9818ce65e69d0a710233eeedb8 : process (ad127af9b2ba371c2b70105c8ec2ebfe3) 
 begin
 if (ad127af9b2ba371c2b70105c8ec2ebfe3'event and ad127af9b2ba371c2b70105c8ec2ebfe3 = '1') then
 if (a55f804a2775429099e7a8163f2955436 = '1') then
 acd1e5890a488708f2ca2186ab0b34787 <= '0';
 abdf618c0b612488de12ec1d8516fc83a <= '0';
 else
 acd1e5890a488708f2ca2186ab0b34787 <= adf894d54c19cdb0dddd245f2df700615;
 abdf618c0b612488de12ec1d8516fc83a <= adc9844622d8128e64f71e28a97dc8579;
 end if;
 end if;
 end process a09de7f9818ce65e69d0a710233eeedb8;
 ae8608c08f6e0c0e4074a90b2384017e5: if a916e7c8b982d147d353f78cf8e859121 = '1' generate
 aec1c626549295a6065a8d537d083f4bc <= '1' when (a06afc62ae6a3f0b076e5d161d56aafd7 >= ac869e0c22a926dcab0f5287e0e220c32 and a925d9c228cab30218f0d77dd7bac9bf3 = '1') else '0';
 end generate ae8608c08f6e0c0e4074a90b2384017e5;
 a076f9b631236c8baf5cfd20a0cd63ca6: if a916e7c8b982d147d353f78cf8e859121 = '0' generate
 ace9b012c76acf37db13fb65a614bf256 : process (ad127af9b2ba371c2b70105c8ec2ebfe3) 
 begin
 if (ad127af9b2ba371c2b70105c8ec2ebfe3'event and ad127af9b2ba371c2b70105c8ec2ebfe3 = '1') then
 aec1c626549295a6065a8d537d083f4bc <= '0';
 ab78ceacfb68fa19b6744b741e6fc16dc <= a06afc62ae6a3f0b076e5d161d56aafd7;
 if (a55f804a2775429099e7a8163f2955436 = '1') then
 aec1c626549295a6065a8d537d083f4bc <= '0';
 ab78ceacfb68fa19b6744b741e6fc16dc <= (others => '0');
 else 
 if (a925d9c228cab30218f0d77dd7bac9bf3 = '1') and (((ab78ceacfb68fa19b6744b741e6fc16dc < ac869e0c22a926dcab0f5287e0e220c32) and (a06afc62ae6a3f0b076e5d161d56aafd7 >= ac869e0c22a926dcab0f5287e0e220c32))
 or ((a85b1e5129db272558aa2d9af56c34901 = '0') and (a06afc62ae6a3f0b076e5d161d56aafd7 >= ac869e0c22a926dcab0f5287e0e220c32))) then
 aec1c626549295a6065a8d537d083f4bc <= '1';
 end if;
 end if;
 end if;
 end process ace9b012c76acf37db13fb65a614bf256;
 end generate a076f9b631236c8baf5cfd20a0cd63ca6;
end a646f6e31569730531cd26978234e7b8d;
