set moduleName matrix_mul
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set isOneStateSeq 0
set C_modelName matrix_mul::matrix_mul
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
}

# RTL Port declarations: 
set portNum 8
set portList { 
	{ nResetPort sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ClockPort sc_in sc_logic 1 clock -1 } 
	{ ReadEnablePort_0 sc_out sc_lv 1 signal 2 } 
	{ ReadEmptyPort_0 sc_in sc_lv 1 signal 3 } 
	{ ReadDataPort_0 sc_in sc_lv 32 signal 4 } 
	{ WriteEnablePort_0 sc_out sc_lv 1 signal 5 } 
	{ WriteFullPort_0 sc_in sc_lv 1 signal 6 } 
	{ WriteDataPort_0 sc_out sc_lv 32 signal 7 } 
}

set Spec2ImplPortList { 
	ReadEnablePort_0 { ap_none {  { ReadEnablePort_0 out_data 1 1 } } }
	ReadEmptyPort_0 { ap_none {  { ReadEmptyPort_0 in_data 0 1 } } }
	ReadDataPort_0 { ap_none {  { ReadDataPort_0 in_data 0 32 } } }
	WriteEnablePort_0 { ap_none {  { WriteEnablePort_0 out_data 1 1 } } }
	WriteFullPort_0 { ap_none {  { WriteFullPort_0 in_data 0 1 } } }
	WriteDataPort_0 { ap_none {  { WriteDataPort_0 out_data 1 32 } } }
}
