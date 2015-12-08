--------------------------------------------------------------------------------
-- Filename : axi_slave_adapter.vhd 
-- Date     : 2011/01/10
-- Version  : 1.0
-- *****************************************************************************
--  Copyright 2011 - Space Codesign Systems, Inc.
--  All rights reserved.
-- *****************************************************************************
--                                                                                                                                               
--  Description : This is the implementation of the axi slave adapter
--
--------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
entity axi_slave_adapter is
 generic (
 C_BASEADDR : std_logic_vector := X"FFFFFFFF";
 C_HIGHADDR : std_logic_vector := X"00000000";
 AWIDTH: integer := 32;
 DWIDTH: integer := 32
 );
 port (
 Clk : in std_logic;
 Reset : in std_logic;
 SBI_S_Address : out std_logic_vector(0 to AWIDTH-1);
 SBI_S_ReadEnable : out std_logic;
 SBI_S_ReadData : in std_logic_vector(0 to DWIDTH-1);
 SBI_S_WriteEnable : out std_logic;
 SBI_S_WriteData : out std_logic_vector(0 to DWIDTH-1);
 SBI_S_ByteEnable : out std_logic_vector(0 to DWIDTH/8-1);
 SBI_S_Ack : in std_logic;
 ACLK : in std_logic;
 ARESETN : in std_logic;
 AWADDR : in std_logic_vector (AWIDTH-1 downto 0);
 AWVALID : in std_logic;
 AWREADY : out std_logic;
 WDATA : in std_logic_vector (DWIDTH-1 downto 0);
 WSTRB : in std_logic_vector ((DWIDTH/8)-1 downto 0);
 WVALID : in std_logic;
 WREADY : out std_logic;
 BRESP : out std_logic_vector(1 downto 0);
 BVALID : out std_logic;
 BREADY : in std_logic;
 ARADDR : in std_logic_vector (AWIDTH-1 downto 0);
 ARVALID : in std_logic;
 ARREADY : out std_logic;
 RDATA : out std_logic_vector (DWIDTH-1 downto 0);
 RRESP : out std_logic_vector(1 downto 0);
 RVALID : out std_logic;
 RREADY : in std_logic
 );
end axi_slave_adapter;
architecture behavioral of axi_slave_adapter is
 constant AXI_OK : std_logic_vector(1 downto 0) := "00";
 type AXI_States is (IDLE, READ_REQUEST, WRITE_REQUEST, READ_RESPONSE, WRITE_RESPONSE);
 signal Internal_State : AXI_States := IDLE;
 signal Internal_State_Next : AXI_States := IDLE;
 signal Internal_WriteEnable : std_logic := '0';
 signal Internal_ReadEnable : std_logic := '0';
 signal Internal_WriteAck : std_logic := '0';
 signal Internal_ReadAck : std_logic := '0';
 signal Internal_WriteAckDone : std_logic := '0';
 signal Internal_ReadAckDone : std_logic := '0';
 signal Internal_ReadData : std_logic_vector(0 to DWIDTH-1) := (others => '0');
 signal Internal_ReadValid : std_logic := '0';
 attribute fsm_encoding: string; 
 attribute fsm_encoding of Internal_State: signal is "one-hot"; 
 begin
 SBI_S_Address <= ARADDR when (Internal_State = READ_REQUEST) else AWADDR;
 SBI_S_ReadEnable <= '1' when (Internal_State = READ_REQUEST) else '0';
 SBI_S_WriteEnable <= '1' when (Internal_State = WRITE_REQUEST) else '0';
 SBI_S_WriteData <= WDATA;
 SBI_S_ByteEnable <= WSTRB when (Internal_State = WRITE_REQUEST) else (others => '1');
 Internal_WriteEnable <= AWVALID and WVALID;
 Internal_WriteAck <= SBI_S_Ack when (Internal_State = WRITE_REQUEST) else '0';
 AWREADY <= Internal_WriteAck;
 WREADY <= Internal_WriteAck;
 Internal_ReadEnable <= ARVALID;
 Internal_ReadAck <= SBI_S_Ack when (Internal_State = READ_REQUEST) else '0';
 ARREADY <= Internal_ReadAck;
 Internal_WriteAckDone <= BREADY;
 Internal_ReadAckDone <= RREADY;
 BRESP <= AXI_OK;
 RRESP <= AXI_OK;
 BVALID <= '1' when (Internal_State = WRITE_RESPONSE) else '0';
 RVALID <= '1' when (Internal_State = READ_RESPONSE) else '0';
 COMB_STATE_MACHINE : process(Reset, Internal_State, Internal_ReadEnable, Internal_WriteEnable, Internal_ReadAck, Internal_WriteAck, Internal_ReadAckDone, Internal_WriteAckDone) 
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
 if(Internal_WriteAck = '1') then
 Internal_State_Next <= WRITE_RESPONSE;
 else
 Internal_State_Next <= WRITE_REQUEST;
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
 READ_TRANSACTION : process(Clk) 
 begin
 if (Clk'event and Clk = '1') then
 if (Reset = '1') then 
 Internal_ReadData <= (others => '0');
 else
 if(Internal_State = READ_RESPONSE) then
 Internal_ReadData <= Internal_ReadData; 
 else
 Internal_ReadData <= SBI_S_ReadData;
 end if;
 end if;
 end if;
 end process READ_TRANSACTION;
 RDATA <= Internal_ReadData; 
end behavioral;
