--------------------------------------------------------------------------------
-- Filename : sdl_2_axis.vhd 
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
entity sdl_2_axis is
 generic (
 DWIDTH: integer := 32
 );
 port (
 Clk : in std_logic;
 Reset : in std_logic;
 SDL_M_Data : in std_logic_vector(0 to DWIDTH-1);
 SDL_M_Write : in std_logic;
 SDL_M_Full : out std_logic;
 SDL_M_End : in std_logic;
 SDL_M_Enable : in std_logic;
 AXIS_S_TDATA : out std_logic_vector(DWIDTH-1 downto 0);
 AXIS_S_TVALID : out std_logic;
 AXIS_S_TREADY : in std_logic;
 AXIS_S_TLAST : out std_logic
 );
end sdl_2_axis;
architecture behavioral of sdl_2_axis is
 type State is (READ_SDL, WRITE_AXIS);
 signal Internal_Data : std_logic_vector(0 to DWIDTH-1) := (others => '0');
 signal Internal_State : State := READ_SDL;
 signal Internal_State_Next : State := READ_SDL;
 signal TLast_Next : std_logic;
begin
 AXIS_S_TDATA <= Internal_Data;
 AXIS_S_TVALID <= '1' when Internal_State = WRITE_AXIS else '0';
 SDL_M_Full <= '0' when Internal_State = READ_SDL AND SDL_M_Enable = '1' else '1';
 TLast_Next <= '1' when SDL_M_End = '1' else '0';
 COMB_STATE_MACHINE : process(Reset, Internal_State, SDL_M_Write, AXIS_S_TREADY) 
 begin
 if (Reset = '1') then 
 Internal_State_Next <= READ_SDL;
 else
 case Internal_State is
 when READ_SDL =>
 if(SDL_M_Write = '1') then
 Internal_State_Next <= WRITE_AXIS;
 else
 Internal_State_Next <= READ_SDL;
 end if; 
 when WRITE_AXIS =>
 if(AXIS_S_TREADY = '1') then
 Internal_State_Next <= READ_SDL;
 else
 Internal_State_Next <= WRITE_AXIS;
 end if; 
 when others =>
 Internal_State_Next <= READ_SDL;
 end case; 
 end if;
 end process COMB_STATE_MACHINE;
 REG_STATE_MACHINE : process(Clk) 
 begin
 if (Clk'event and Clk = '1') then
 Internal_State <= Internal_State_Next;
 AXIS_S_TLAST <= TLast_Next;
 end if; 
 end process REG_STATE_MACHINE;
 READ_SDL_TRANSACTION : process(Clk) 
 begin
 if (Clk'event and Clk = '1') then
 if (Reset = '1') then 
 Internal_Data <= (others => '0');
 else
 if(Internal_State = WRITE_AXIS) then
 Internal_Data <= Internal_Data; 
 else 
 Internal_Data <= SDL_M_Data;
 end if; 
 end if;
 end if;
 end process READ_SDL_TRANSACTION;
end behavioral;
