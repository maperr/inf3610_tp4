--------------------------------------------------------------------------------
-- Filename : axi_master_adapter.vhd 
-- Date     : 2011/02/11
-- Version  : 1.0
-- *****************************************************************************
--  Copyright 2011 - Space Codesign Systems, Inc.
--  All rights reserved.
-- *****************************************************************************
--                                                                                                                                               
--  Description : This is the implementation of the axi master adapter
--
--  Note: Timeout and error occuring on the bus is not handled
--
--------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
entity axi_master_adapter is
 generic (
 AWIDTH: integer := 32;
 DWIDTH: integer := 32
 );
 port (
 Clk : in std_logic;
 Reset : in std_logic;
 SBI_M_Address : in std_logic_vector(0 to AWIDTH-1);
 SBI_M_ReadEnable : in std_logic;
 SBI_M_ReadData : out std_logic_vector(0 to DWIDTH-1);
 SBI_M_WriteEnable : in std_logic;
 SBI_M_WriteData : in std_logic_vector(0 to DWIDTH-1);
 SBI_M_ByteEnable : in std_logic_vector(0 to DWIDTH/8-1);
 SBI_M_Ack : out std_logic;
 ACLK : in std_logic;
 ARESETN : in std_logic;
 AWADDR : out std_logic_vector (AWIDTH-1 downto 0);
 AWVALID : out std_logic;
 AWREADY : in std_logic;
 WDATA : out std_logic_vector (DWIDTH-1 downto 0);
 WSTRB : out std_logic_vector ((DWIDTH/8)-1 downto 0);
 WVALID : out std_logic;
 WREADY : in std_logic;
 BRESP : in std_logic_vector(1 downto 0);
 BVALID : in std_logic;
 BREADY : out std_logic;
 ARADDR : out std_logic_vector (AWIDTH-1 downto 0);
 ARVALID : out std_logic;
 ARREADY : in std_logic;
 RDATA : in std_logic_vector (DWIDTH-1 downto 0);
 RRESP : in std_logic_vector(1 downto 0);
 RVALID : in std_logic;
 RREADY : out std_logic
 );
end axi_master_adapter;
architecture behavioral of axi_master_adapter is
 type AXI_States is (IDLE, READ_REQUEST, WRITE_REQUEST, WRITE_REQUEST_ADDRESS, WRITE_REQUEST_DATA, READ_RESPONSE, WRITE_RESPONSE);
 signal Internal_State : AXI_States := IDLE;
 signal Internal_State_Next : AXI_States := IDLE;
 signal Internal_WriteEnable : std_logic := '0';
 signal Internal_ReadEnable : std_logic := '0';
 signal Internal_WriteAddressAck : std_logic := '0';
 signal Internal_WriteDataAck : std_logic := '0'; 
 signal Internal_ReadAck : std_logic := '0';
 signal Internal_WriteAckDone : std_logic := '0';
 signal Internal_ReadAckDone : std_logic := '0';
 signal Internal_WriteChannelAck : std_logic := '0'; 
 signal Internal_AddressWriteChannelAck : std_logic := '0'; 
 signal AWREADY_reg : std_logic := '0';
 signal WREADY_reg : std_logic := '0'; 
 attribute fsm_encoding: string; 
 attribute fsm_encoding of Internal_State: signal is "one-hot"; 
 begin
 BREADY <= '1';
 RREADY <= '1';
 ARADDR <= SBI_M_Address;
 AWADDR <= SBI_M_Address;
 ARVALID <= '1' when (Internal_State_Next = READ_REQUEST or Internal_State = READ_REQUEST) else '0';
 AWVALID <= '1' when (Internal_State_Next = WRITE_REQUEST or Internal_State = WRITE_REQUEST or Internal_State = WRITE_REQUEST_ADDRESS or Internal_State = WRITE_REQUEST_DATA) else '0';
 WVALID <= '1' when (Internal_State_Next = WRITE_REQUEST or Internal_State = WRITE_REQUEST or Internal_State = WRITE_REQUEST_ADDRESS or Internal_State = WRITE_REQUEST_DATA) else '0';
 WDATA <= SBI_M_WriteData;
 WSTRB <= SBI_M_ByteEnable;
 Internal_WriteEnable <= SBI_M_WriteEnable;
 Internal_WriteAddressAck <= AWREADY;
 Internal_WriteDataAck <= WREADY;
 Internal_ReadEnable <= SBI_M_ReadEnable;
 Internal_ReadAck <= ARREADY;
 Internal_WriteAckDone <= BVALID;
 Internal_ReadAckDone <= RVALID;
 SBI_M_ReadData <= RDATA;
 SBI_M_Ack <= Internal_WriteAckDone when (Internal_State = WRITE_RESPONSE) else
 Internal_ReadAckDone when (Internal_State = READ_RESPONSE) else '0';
 COMB_STATE_MACHINE : process(Reset, Internal_State, Internal_ReadEnable, Internal_WriteEnable, Internal_ReadAck, Internal_WriteAddressAck, Internal_WriteDataAck, Internal_ReadAckDone, Internal_WriteAckDone) 
 begin
 if (Reset = '1') then 
 Internal_State_Next <= IDLE;
 else
 case Internal_State is
 when IDLE =>
 if(Internal_ReadEnable = '1') then
 Internal_State_Next <= READ_REQUEST;
 elsif(Internal_WriteEnable = '1') then
 Internal_State_Next <= WRITE_REQUEST;
 else
 Internal_State_Next <= IDLE;
 end if; 
 when READ_REQUEST =>
 if(Internal_ReadAck = '1') then
 Internal_State_Next <= READ_RESPONSE;
 else
 Internal_State_Next <= READ_REQUEST;
 end if; 
 when WRITE_REQUEST =>
 if(Internal_WriteAddressAck = '1' and Internal_WriteDataAck = '1') then
 Internal_State_Next <= WRITE_RESPONSE;
 elsif(Internal_WriteAddressAck = '1') then
 Internal_State_Next <= WRITE_REQUEST_DATA;
 elsif(Internal_WriteDataAck = '1') then
 Internal_State_Next <= WRITE_REQUEST_ADDRESS; 
 else
 Internal_State_Next <= WRITE_REQUEST;
 end if; 
 when WRITE_REQUEST_ADDRESS =>
 if(Internal_WriteAddressAck = '1') then
 Internal_State_Next <= WRITE_RESPONSE; 
 else
 Internal_State_Next <= WRITE_REQUEST_ADDRESS;
 end if; 
 when WRITE_REQUEST_DATA =>
 if(Internal_WriteDataAck = '1') then
 Internal_State_Next <= WRITE_RESPONSE; 
 else
 Internal_State_Next <= WRITE_REQUEST_DATA;
 end if; 
 when READ_RESPONSE =>
 if(Internal_ReadAckDone = '1') then
 Internal_State_Next <= IDLE;
 else
 Internal_State_Next <= READ_RESPONSE;
 end if; 
 when WRITE_RESPONSE =>
 if(Internal_WriteAckDone = '1') then
 Internal_State_Next <= IDLE;
 else
 Internal_State_Next <= WRITE_RESPONSE;
 end if; 
 when others =>
 Internal_State_Next <= IDLE;
 end case; 
 end if;
 end process COMB_STATE_MACHINE;
 REG_STATE_MACHINE : process(Clk) 
 begin
 if (Clk'event and Clk = '1') then
 Internal_State <= Internal_State_Next;
 end if; 
 end process REG_STATE_MACHINE;
end behavioral;
