--------------------------------------------------------------------------------
-- Filename : signal_inverter.vhd 
-- Date     : 2013/02/26
-- Version  : 1.0
-- *****************************************************************************
--  Copyright 2011 - Space Codesign Systems, Inc.
--  All rights reserved.
-- *****************************************************************************
--                                                                                                                                               
--  Description : Not gate
--
--------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
entity signal_inverter is
 port ( 
 input_port : in std_logic;
 output_port : out std_logic
 );
end signal_inverter;
architecture behavioral of signal_inverter is
 begin
 output_port <= not input_port;
end behavioral;
