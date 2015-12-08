set moduleName matrix_mul_thread
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set isOneStateSeq 0
set C_modelName matrix_mul::thread
set C_modelType { void 0 }
set C_modelArgList { 
	{ nResetPort int 1 {pointer 0}  }
	{ ClockPort int 1 {pointer 0}  }
	{ ReadEnablePort_0 int 1 {pointer 1}  }
	{ ReadEmptyPort_0 int 1 {pointer 0}  }
	{ ReadDataPort_0 int 32 {pointer 0}  }
	{ WriteEnablePort_0 int 1 {pointer 1}  }
	{ WriteFullPort_0 int 1 {pointer 0}  }
	{ WriteDataPort_0 int 32 {pointer 1}  }
	{ m_result int 32 {array 90000 { 2 3 } 1 1 }  }
	{ m_operand1 int 32 {array 90000 { 2 3 } 1 1 }  }
	{ m_operand2 int 32 {array 90000 { 2 3 } 1 1 }  }
}

# RTL Port declarations: 
set portNum 26
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ReadEnablePort_0 sc_out sc_lv 1 signal 2 } 
	{ ReadEnablePort_0_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ ReadEmptyPort_0 sc_in sc_lv 1 signal 3 } 
	{ ReadDataPort_0 sc_in sc_lv 32 signal 4 } 
	{ WriteEnablePort_0 sc_out sc_lv 1 signal 5 } 
	{ WriteEnablePort_0_ap_vld sc_out sc_logic 1 outvld 5 } 
	{ WriteFullPort_0 sc_in sc_lv 1 signal 6 } 
	{ WriteDataPort_0 sc_out sc_lv 32 signal 7 } 
	{ WriteDataPort_0_ap_vld sc_out sc_logic 1 outvld 7 } 
	{ m_result_address0 sc_out sc_lv 17 signal 8 } 
	{ m_result_ce0 sc_out sc_logic 1 signal 8 } 
	{ m_result_we0 sc_out sc_logic 1 signal 8 } 
	{ m_result_d0 sc_out sc_lv 32 signal 8 } 
	{ m_result_q0 sc_in sc_lv 32 signal 8 } 
	{ m_operand1_address0 sc_out sc_lv 17 signal 9 } 
	{ m_operand1_ce0 sc_out sc_logic 1 signal 9 } 
	{ m_operand1_we0 sc_out sc_logic 1 signal 9 } 
	{ m_operand1_d0 sc_out sc_lv 32 signal 9 } 
	{ m_operand1_q0 sc_in sc_lv 32 signal 9 } 
	{ m_operand2_address0 sc_out sc_lv 17 signal 10 } 
	{ m_operand2_ce0 sc_out sc_logic 1 signal 10 } 
	{ m_operand2_we0 sc_out sc_logic 1 signal 10 } 
	{ m_operand2_d0 sc_out sc_lv 32 signal 10 } 
	{ m_operand2_q0 sc_in sc_lv 32 signal 10 } 
}

set Spec2ImplPortList { 
	ReadEnablePort_0 { ap_vld {  { ReadEnablePort_0 out_data 1 1 }  { ReadEnablePort_0_ap_vld out_vld 1 1 } } }
	ReadEmptyPort_0 { ap_none {  { ReadEmptyPort_0 in_data 0 1 } } }
	ReadDataPort_0 { ap_none {  { ReadDataPort_0 in_data 0 32 } } }
	WriteEnablePort_0 { ap_vld {  { WriteEnablePort_0 out_data 1 1 }  { WriteEnablePort_0_ap_vld out_vld 1 1 } } }
	WriteFullPort_0 { ap_none {  { WriteFullPort_0 in_data 0 1 } } }
	WriteDataPort_0 { ap_vld {  { WriteDataPort_0 out_data 1 32 }  { WriteDataPort_0_ap_vld out_vld 1 1 } } }
	m_result { ap_memory {  { m_result_address0 mem_address 1 17 }  { m_result_ce0 mem_ce 1 1 }  { m_result_we0 mem_we 1 1 }  { m_result_d0 mem_din 1 32 }  { m_result_q0 mem_dout 0 32 } } }
	m_operand1 { ap_memory {  { m_operand1_address0 mem_address 1 17 }  { m_operand1_ce0 mem_ce 1 1 }  { m_operand1_we0 mem_we 1 1 }  { m_operand1_d0 mem_din 1 32 }  { m_operand1_q0 mem_dout 0 32 } } }
	m_operand2 { ap_memory {  { m_operand2_address0 mem_address 1 17 }  { m_operand2_ce0 mem_ce 1 1 }  { m_operand2_we0 mem_we 1 1 }  { m_operand2_d0 mem_din 1 32 }  { m_operand2_q0 mem_dout 0 32 } } }
}
