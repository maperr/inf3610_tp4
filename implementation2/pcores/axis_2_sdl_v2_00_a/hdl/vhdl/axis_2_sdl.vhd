--------------------------------------------------------------------------------
-- Filename : axis_2_sdl.vhd 
-- Date     : 2013/02/26
-- Version  : 1.0
-- *****************************************************************************
--  Copyright 2011 - Space Codesign Systems, Inc.
--  All rights reserved.
-- *****************************************************************************
--
--------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
entity axis_2_sdl is
 generic (
 DWIDTH: integer := 32
 );
 port ( 
 SDL_S_Data : out std_logic_vector(0 to DWIDTH-1);
 SDL_S_Read : in std_logic;
 SDL_S_Empty : out std_logic;
 AXIS_M_TDATA : in std_logic_vector(DWIDTH-1 downto 0);
 AXIS_M_TVALID : in std_logic;
 AXIS_M_TREADY : out std_logic
 );
end axis_2_sdl;
architecture behavioral of axis_2_sdl is
 begin
 SDL_S_Empty <= not AXIS_M_TVALID;
 AXIS_M_TREADY <= SDL_S_Read;
 SDL_S_Data <= AXIS_M_TDATA;
end behavioral;
