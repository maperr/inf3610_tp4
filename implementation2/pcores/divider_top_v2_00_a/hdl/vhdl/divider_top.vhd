--------------------------------------------------------------------------------
-- Filename : divider_top.vhd
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
entity divider_top is
  generic (
  	AWIDTH: integer := 32;
    DWIDTH: integer := 32
  );
  port (
		--
		-- SDL master
		--
		
        -- Communication link for 1
        SDL0_M_Data         : out std_logic_vector(0 to DWIDTH-1);
        SDL0_M_Write        : out std_logic;
        SDL0_M_Full         : in std_logic;
        
		--
		-- SDL slave
		--
		
        -- Communication link for 1
        SDL0_S_Data         : in std_logic_vector(0 to DWIDTH-1);
        SDL0_S_Read         : out std_logic;
        SDL0_S_Empty        : in std_logic;
        
        -- Clock, reset
        Clk                : in std_logic;
        Reset              : in std_logic

    );
end divider_top;


--------------------------------------------------------------------------------
--  Architecture declaration
--------------------------------------------------------------------------------
architecture behaviour of divider_top is
  
  --
  -- Insert user logic here
  --
  begin

end behaviour;