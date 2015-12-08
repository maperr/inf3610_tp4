--------------------------------------------------------------------------------
-- Filename : sdl_packet_counter.vhd 
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
entity sdl_packet_counter is
 generic (
 AWIDTH: integer := 32;
 DWIDTH: integer := 32
 );
 port (
 Clk : in std_logic;
 Reset : in std_logic; 
 SBI_S_Address : in std_logic_vector(0 to AWIDTH-1);
 SBI_S_ReadEnable : in std_logic;
 SBI_S_ReadData : out std_logic_vector(0 to DWIDTH-1);
 SBI_S_WriteEnable : in std_logic;
 SBI_S_WriteData : in std_logic_vector(0 to DWIDTH-1);
 SBI_S_ByteEnable : in std_logic_vector(0 to DWIDTH/8-1);
 SBI_S_Ack : out std_logic;
 Write_Packet : in std_logic;
 End_Transfer : out std_logic;
 Enable : out std_logic
 );
end sdl_packet_counter;
architecture behavioral of sdl_packet_counter is
 type State is (WAIT_LENGTH, COUNT);
 signal internal_state : State := WAIT_LENGTH;
 signal data_read : integer;
 signal configuration_done : std_logic;
 signal counter : integer;
 signal offset : std_logic_vector(0 to 3);
 signal packet_length : integer;
begin
 offset <= SBI_S_Address(28 to AWIDTH-1);
 STATE_MACHINE : process(clk, Reset) 
 begin
 if (Clk'event and Clk = '1') then
 if (Reset = '1') then 
 internal_state <= WAIT_LENGTH;
 else
 case internal_state is
 when WAIT_LENGTH =>
 packet_length <= 0;
 if(configuration_done = '1') then
 internal_state <= COUNT;
 packet_length <= data_read;
 end if; 
 when COUNT =>
 if(counter = packet_length) then
 internal_state <= WAIT_LENGTH;
 end if; 
 end case; 
 end if; 
 end if;
 end process STATE_MACHINE;
 RD_WR_REGISTERS : process (Clk, Reset) 
 begin
 if (Clk'event and Clk = '1') then
 if (Reset = '1') then
 SBI_S_Ack <= '0';
 configuration_done <= '0';
 data_read <= 0;
 else
 SBI_S_Ack <= '0';
 SBI_S_ReadData <= (others => '0');
 configuration_done <= '0';
 data_read <= 0;
 if (offset = "0000" and SBI_S_WriteEnable = '1') then
 data_read <= to_integer(unsigned(SBI_S_WriteData));
 configuration_done <= '1';
 SBI_S_Ack <= '1';
 end if;
 end if;
 end if;
 end process RD_WR_REGISTERS;
 COUNT_PACKETS : process(Reset, internal_state, Write_Packet) 
 begin
 if (Reset = '1') then 
 counter <= 0;
 Enable <= '0';
 else
 case internal_state is
 when WAIT_LENGTH =>
 counter <= 0;
 Enable <= '0';
 when COUNT =>
 Enable <= '1';
 if(Write_Packet'event and Write_Packet = '1') then
 counter <= counter + 1;
 end if;
 end case; 
 end if;
 end process COUNT_PACKETS; 
 COUNTER_REACHED : process(clk, Reset) 
 begin
 if (Clk'event and Clk = '1') then
 if (Reset = '1') then 
 End_Transfer <= '0';
 else 
 if(counter = packet_length - 1) then
 End_Transfer <= '1';
 else
 End_Transfer <= '0';
 end if;
 end if;
 end if; 
 end process COUNTER_REACHED;
end behavioral;
