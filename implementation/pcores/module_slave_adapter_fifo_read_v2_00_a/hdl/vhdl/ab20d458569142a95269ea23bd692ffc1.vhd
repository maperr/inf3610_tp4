--------------------------------------------------------------------------------
-- Filename : ab20d458569142a95269ea23bd692ffc1.vhd
-- *****************************************************************************
--  Copyright 2011 - Space Codesign Systems, Inc.
--  All rights reserved.
-- *****************************************************************************
--------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
entity ab20d458569142a95269ea23bd692ffc1 is
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
end ab20d458569142a95269ea23bd692ffc1;
architecture a6e26f36399a8f2ad2f49f50eec271133 of ab20d458569142a95269ea23bd692ffc1 is
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
 constant a2a841d834fa6a3646201af31b0a43f48 : integer := 7;
 signal a8bd6ac6652fed94d241fabd2af514244 : std_logic_vector(7 downto 0);
 signal a1567d46c490909b20c513bca7a0ea9a2 : std_logic_vector(7 downto 0); 
 signal acffc17e9d873249256f86964c3876a67 : std_logic := '0';
 signal ad71932327df87037cd665c19afff2922 : std_logic := '0';
 signal a74fd6790f0c0401c8ab23acb60c974b0 : std_logic := '0';
 signal ae1d47099fb49147718b6a1b9826330a5: std_logic := '0'; 
 attribute box_type: string;
 attribute box_type of fifo_a6f46cee94d1815e429dbed82bed6cb1b: component is "black_box";
 begin
 adefbfe9ef7af9d5846e10126595a5339 : fifo_a6f46cee94d1815e429dbed82bed6cb1b
 port map (
 din => a48885fe5111f7b8fb9dba9518a41afa4,
 wr_en => ae1d47099fb49147718b6a1b9826330a5,
 full => acffc17e9d873249256f86964c3876a67, 
 dout => aed264e994397c0037fe5675653c583c5,
 rd_en => a74fd6790f0c0401c8ab23acb60c974b0, 
 empty => ad71932327df87037cd665c19afff2922,
 rst => a773c36547a2d648fe15e3354cb9cc61c,
 wr_data_count => a8bd6ac6652fed94d241fabd2af514244,
 rd_data_count => a1567d46c490909b20c513bca7a0ea9a2, 
 wr_clk => a007b706d4d61371ccaebd7364b055bdb,
 rd_clk => aabaa813227f8e5fe5c1ac3e1010c504b
 ); 
 a74fd6790f0c0401c8ab23acb60c974b0 <= ab22ba0ada3dbb20a1250a47e1d4cc26a when (a773c36547a2d648fe15e3354cb9cc61c = '0') else '0';
 ae1d47099fb49147718b6a1b9826330a5 <= a2d97ae145d6b0169960781569997e54b when (a773c36547a2d648fe15e3354cb9cc61c = '0') else '0';
 ab4cad6030f74477087d88160f3870b69 <= acffc17e9d873249256f86964c3876a67 when (a773c36547a2d648fe15e3354cb9cc61c = '0') else '1';
 ac451c9929208688df5d4bd2eae0c5309 <= ad71932327df87037cd665c19afff2922 when (a773c36547a2d648fe15e3354cb9cc61c = '0') else '1';
 adda6b5d3987f82b6c1bb10c90dee1d06 <= std_logic_vector(to_unsigned(a618467ee0f7a8f930cadc423a963f3ff+1, a30c46ff5f812aaf79ccb5bb3b0fd73a1) - unsigned(a8bd6ac6652fed94d241fabd2af514244)) when (acffc17e9d873249256f86964c3876a67 = '0') else (others => '0');
 a924f7005f05c6a3cab97aebd4153ebbb(a30c46ff5f812aaf79ccb5bb3b0fd73a1-a2a841d834fa6a3646201af31b0a43f48-1 to a30c46ff5f812aaf79ccb5bb3b0fd73a1-1) <= a1567d46c490909b20c513bca7a0ea9a2;
 a924f7005f05c6a3cab97aebd4153ebbb(0 to a30c46ff5f812aaf79ccb5bb3b0fd73a1-a2a841d834fa6a3646201af31b0a43f48-2) <= (others => '0');
end a6e26f36399a8f2ad2f49f50eec271133;
