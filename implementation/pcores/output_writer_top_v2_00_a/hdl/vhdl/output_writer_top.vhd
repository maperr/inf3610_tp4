--------------------------------------------------------------------------------
-- Filename : output_writer_top.vhd
-- *****************************************************************************
--  Copyright 2011 - Space Codesign Systems, Inc.
--  All rights reserved.
-- *****************************************************************************
--------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

--------------------------------------------------------------------------------
--  Entity declaration
--------------------------------------------------------------------------------
entity output_writer_top is
  generic (
  	AWIDTH: integer := 32;
    DWIDTH: integer := 32
  );
  port (
		--
		-- SDL slave
		--
		
        -- Communication link for 1
        SDL0_S_Data         : in std_logic_vector(0 to DWIDTH-1);
        SDL0_S_Read         : out std_logic;
        SDL0_S_Empty        : in std_logic;
        
		--
		-- SBI master bus interface
		--
		SBI_M_Address		: out std_logic_vector(0 to AWIDTH-1);
		SBI_M_ReadEnable	: out std_logic;
		SBI_M_ReadData		: in  std_logic_vector(0 to DWIDTH-1);
		SBI_M_WriteEnable	: out std_logic;
		SBI_M_WriteData		: out std_logic_vector(0 to DWIDTH-1);
		SBI_M_ByteEnable	: out std_logic_vector(0 to DWIDTH/8-1);
		SBI_M_Ack			: in  std_logic;

        -- Clock, reset
        Clk                : in std_logic;
        Reset              : in std_logic

    );
end output_writer_top;


--------------------------------------------------------------------------------
--  Architecture declaration
--------------------------------------------------------------------------------
architecture behaviour of output_writer_top is
  
  --
  -- Insert user logic here
  --
  begin

end behaviour;