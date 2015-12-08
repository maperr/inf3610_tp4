#################################################################
# Makefile generated by Xilinx Platform Studio 
# Project:C:\Users\gabil\Documents\inf3610_tp4\implementation2\system.xmp
#
# WARNING : This file will be re-generated every time a command
# to run a make target is invoked. So, any changes made to this  
# file manually, will be lost when make is invoked next. 
#################################################################

SHELL = CMD

XILINX_EDK_DIR = C:/Logiciels/Xilinx/14.4/ISE_DS/EDK

SYSTEM = system

MHSFILE = system.mhs

PCWPRJFILE = data/ps7_system_prj.xml

FPGA_ARCH = zynq

DEVICE = xc7z020clg484-1

INTSTYLE = default

XPS_HDL_LANG = vhdl
GLOBAL_SEARCHPATHOPT = 
PROJECT_SEARCHPATHOPT = 

SEARCHPATHOPT = $(PROJECT_SEARCHPATHOPT) $(GLOBAL_SEARCHPATHOPT)

SUBMODULE_OPT = 

PLATGEN_OPTIONS = -p $(DEVICE) -lang $(XPS_HDL_LANG) -intstyle $(INTSTYLE) $(SEARCHPATHOPT) $(SUBMODULE_OPT) -msg __xps/ise/xmsgprops.lst

OBSERVE_PAR_OPTIONS = -error yes

MICROBLAZE_BOOTLOOP = $(XILINX_EDK_DIR)/sw/lib/microblaze/mb_bootloop.elf
MICROBLAZE_BOOTLOOP_LE = $(XILINX_EDK_DIR)/sw/lib/microblaze/mb_bootloop_le.elf
PPC405_BOOTLOOP = $(XILINX_EDK_DIR)/sw/lib/ppc405/ppc_bootloop.elf
PPC440_BOOTLOOP = $(XILINX_EDK_DIR)/sw/lib/ppc440/ppc440_bootloop.elf
BOOTLOOP_DIR = bootloops

BRAMINIT_ELF_IMP_FILES =
BRAMINIT_ELF_IMP_FILE_ARGS =

BRAMINIT_ELF_SIM_FILES =
BRAMINIT_ELF_SIM_FILE_ARGS =

SIM_CMD = isim_system

BEHAVIORAL_SIM_SCRIPT = simulation/behavioral/$(SYSTEM)_setup.tcl

STRUCTURAL_SIM_SCRIPT = simulation/structural/$(SYSTEM)_setup.tcl

TIMING_SIM_SCRIPT = simulation/timing/$(SYSTEM)_setup.tcl

DEFAULT_SIM_SCRIPT = $(BEHAVIORAL_SIM_SCRIPT)

SIMGEN_OPTIONS = -p $(DEVICE) -lang $(XPS_HDL_LANG) -intstyle $(INTSTYLE) $(SEARCHPATHOPT) $(BRAMINIT_ELF_SIM_FILE_ARGS) -msg __xps/ise/xmsgprops.lst -s isim -X C:/Users/gabil/Documents/inf3610_tp4/implementation2/


CORE_STATE_DEVELOPMENT_FILES = pcores/module_slave_adapter_fifo_read_v2_00_a/netlist/fifo_a6f46cee94d1815e429dbed82bed6cb1b.ngc \
pcores/module_slave_adapter_fifo_write_v2_00_a/netlist/fifo_a6f46cee94d1815e429dbed82bed6cb1b.ngc \
pcores/module_slave_adapter_fifo_read_v2_00_a/netlist/fifo_a6f46cee94d1815e429dbed82bed6cb1b.ngc \
pcores/module_slave_adapter_fifo_write_v2_00_a/netlist/fifo_a6f46cee94d1815e429dbed82bed6cb1b.ngc \
pcores/module_slave_adapter_fifo_read_v2_00_a/netlist/fifo_a6f46cee94d1815e429dbed82bed6cb1b.ngc \
pcores/module_slave_adapter_fifo_read_v2_00_a/netlist/fifo_a6f46cee94d1815e429dbed82bed6cb1b.ngc \
pcores/module_slave_adapter_fifo_write_v2_00_a/netlist/fifo_a6f46cee94d1815e429dbed82bed6cb1b.ngc \
pcores/module_slave_adapter_fifo_write_v2_00_a/netlist/fifo_a6f46cee94d1815e429dbed82bed6cb1b.ngc \
pcores/module_slave_adapter_fifo_read_v2_00_a/netlist/fifo_a6f46cee94d1815e429dbed82bed6cb1b.ngc \
pcores/module_slave_adapter_fifo_write_v2_00_a/netlist/fifo_a6f46cee94d1815e429dbed82bed6cb1b.ngc \
pcores/module_slave_adapter_v2_00_a/hdl/vhdl/a3ac470e6eb244b578e155741936a2091.vhd \
pcores/module_slave_adapter_v2_00_a/hdl/vhdl/af0c84f67043c672def74c7662f944969.vhd \
pcores/module_slave_adapter_v2_00_a/hdl/vhdl/module_slave_adapter.vhd \
pcores/adder_top_v2_00_a/hdl/vhdl/adder_top.vhd \
pcores/axi_master_adapter_v2_00_a/hdl/vhdl/axi_master_adapter.vhd \
pcores/axi_slave_adapter_v2_00_a/hdl/vhdl/axi_slave_adapter.vhd \
pcores/axis_2_sdl_v2_00_a/hdl/vhdl/axis_2_sdl.vhd \
pcores/divider_top_v2_00_a/hdl/vhdl/divider_top.vhd \
pcores/module_slave_adapter_fifo_read_v2_00_a/hdl/vhdl/fifo_a6f46cee94d1815e429dbed82bed6cb1b.vhd \
pcores/module_slave_adapter_fifo_read_v2_00_a/hdl/vhdl/ab20d458569142a95269ea23bd692ffc1.vhd \
pcores/module_slave_adapter_fifo_read_v2_00_a/hdl/vhdl/a38165049ec58824018e374418661b9dd.vhd \
pcores/module_slave_adapter_fifo_read_v2_00_a/hdl/vhdl/module_slave_adapter_fifo_read.vhd \
pcores/module_slave_adapter_fifo_write_v2_00_a/hdl/vhdl/fifo_a6f46cee94d1815e429dbed82bed6cb1b.vhd \
pcores/module_slave_adapter_fifo_write_v2_00_a/hdl/vhdl/a5a494554a9b3c82a28fd9c2aef3bb0c0.vhd \
pcores/module_slave_adapter_fifo_write_v2_00_a/hdl/vhdl/a2d425de0d615ef5f5e5a6d5498c04be8.vhd \
pcores/module_slave_adapter_fifo_write_v2_00_a/hdl/vhdl/module_slave_adapter_fifo_write.vhd \
pcores/input_reader_top_v2_00_a/hdl/vhdl/input_reader_top.vhd \
pcores/matrix_mul_top_v2_00_a/hdl/vhdl/matrix_mul_top.vhd \
pcores/matrix_mul_top_v2_00_a/hdl/vhdl/matrix_mul.vhd \
pcores/matrix_mul_top_v2_00_a/hdl/vhdl/matrix_mul_mul_32s_32s_32_6.vhd \
pcores/matrix_mul_top_v2_00_a/hdl/vhdl/matrix_mul_m_operand1.vhd \
pcores/matrix_mul_top_v2_00_a/hdl/vhdl/matrix_mul_m_result.vhd \
pcores/matrix_mul_top_v2_00_a/hdl/vhdl/matrix_mul_thread.vhd \
pcores/multiplier_top_v2_00_a/hdl/vhdl/multiplier_top.vhd \
pcores/output_writer_top_v2_00_a/hdl/vhdl/output_writer_top.vhd \
pcores/sdl_2_axis_v2_00_a/hdl/vhdl/sdl_2_axis.vhd \
pcores/sdl_packet_counter_v2_00_a/hdl/vhdl/sdl_packet_counter.vhd \
pcores/signal_inverter_v2_00_a/hdl/vhdl/signal_inverter.vhd \
pcores/subtractor_top_v2_00_a/hdl/vhdl/subtractor_top.vhd

WRAPPER_NGC_FILES = implementation/system_amba_axibus_lt1_wrapper.ngc \
implementation/system_debugmodule1_wrapper.ngc \
implementation/system_xilinxpic1_wrapper.ngc \
implementation/system_adap_adder1_amba_axibus_lt1_rdif_wrapper.ngc \
implementation/system_adap_adder1_amba_axibus_lt1_wrif_wrapper.ngc \
implementation/system_adap_divider1_amba_axibus_lt1_rdif_wrapper.ngc \
implementation/system_adap_divider1_amba_axibus_lt1_wrif_wrapper.ngc \
implementation/system_adap_input_reader1_amba_axibus_lt1_rdif_wrapper.ngc \
implementation/system_adap_multiplier1_amba_axibus_lt1_rdif_wrapper.ngc \
implementation/system_adap_multiplier1_amba_axibus_lt1_wrif_wrapper.ngc \
implementation/system_adap_output_writer1_amba_axibus_lt1_wrif_wrapper.ngc \
implementation/system_adap_subtractor1_amba_axibus_lt1_rdif_wrapper.ngc \
implementation/system_adap_subtractor1_amba_axibus_lt1_wrif_wrapper.ngc \
implementation/system_adder1_wrapper.ngc \
implementation/system_armcortexa91_wrapper.ngc \
implementation/system_armcortexa91_hp0_amba_axibus_lt1_wrapper.ngc \
implementation/system_axi_master_adapter10_wrapper.ngc \
implementation/system_axi_master_adapter11_wrapper.ngc \
implementation/system_axi_slave_adapter0_wrapper.ngc \
implementation/system_axi_slave_adapter1_wrapper.ngc \
implementation/system_axi_slave_adapter15_wrapper.ngc \
implementation/system_axi_slave_adapter2_wrapper.ngc \
implementation/system_axi_slave_adapter3_wrapper.ngc \
implementation/system_axi_slave_adapter4_wrapper.ngc \
implementation/system_axi_slave_adapter5_wrapper.ngc \
implementation/system_axi_slave_adapter6_wrapper.ngc \
implementation/system_axi_slave_adapter7_wrapper.ngc \
implementation/system_axi_slave_adapter8_wrapper.ngc \
implementation/system_axi_slave_adapter9_wrapper.ngc \
implementation/system_axis_2_sdl12_wrapper.ngc \
implementation/system_divider1_wrapper.ngc \
implementation/system_dma_controller1_matrix_mul1_wrapper.ngc \
implementation/system_fifo_adap_adder1_amba_axibus_lt1_rdif0_wrapper.ngc \
implementation/system_fifo_adap_adder1_amba_axibus_lt1_wrif0_wrapper.ngc \
implementation/system_fifo_adap_divider1_amba_axibus_lt1_rdif0_wrapper.ngc \
implementation/system_fifo_adap_divider1_amba_axibus_lt1_wrif0_wrapper.ngc \
implementation/system_fifo_adap_input_reader1_amba_axibus_lt1_rdif0_wrapper.ngc \
implementation/system_fifo_adap_multiplier1_amba_axibus_lt1_rdif0_wrapper.ngc \
implementation/system_fifo_adap_multiplier1_amba_axibus_lt1_wrif0_wrapper.ngc \
implementation/system_fifo_adap_output_writer1_amba_axibus_lt1_wrif0_wrapper.ngc \
implementation/system_fifo_adap_subtractor1_amba_axibus_lt1_rdif0_wrapper.ngc \
implementation/system_fifo_adap_subtractor1_amba_axibus_lt1_wrif0_wrapper.ngc \
implementation/system_input_reader1_wrapper.ngc \
implementation/system_matrix_mul1_wrapper.ngc \
implementation/system_multiplier1_wrapper.ngc \
implementation/system_output_writer1_wrapper.ngc \
implementation/system_sdl_2_axis13_wrapper.ngc \
implementation/system_sdl_packet_counter14_wrapper.ngc \
implementation/system_signal_inverter18_wrapper.ngc \
implementation/system_subtractor1_wrapper.ngc

POSTSYN_NETLIST = implementation/$(SYSTEM).ngc

SYSTEM_BIT = implementation/$(SYSTEM).bit

DOWNLOAD_BIT = implementation/download.bit

SYSTEM_ACE = implementation/$(SYSTEM).ace

UCF_FILE = data\system.ucf

BMM_FILE = implementation/$(SYSTEM).bmm

BITGEN_UT_FILE = etc/bitgen.ut

XFLOW_OPT_FILE = etc/fast_runtime.opt
XFLOW_DEPENDENCY = __xps/xpsxflow.opt $(XFLOW_OPT_FILE)

XPLORER_DEPENDENCY = __xps/xplorer.opt
XPLORER_OPTIONS = -p $(DEVICE) -uc $(SYSTEM).ucf -bm $(SYSTEM).bmm -max_runs 7

FPGA_IMP_DEPENDENCY = $(BMM_FILE) $(POSTSYN_NETLIST) $(UCF_FILE) $(XFLOW_DEPENDENCY)

SDK_EXPORT_DIR = SDK\SDK_Export\hw
SYSTEM_HW_HANDOFF = $(SDK_EXPORT_DIR)/$(SYSTEM).xml
SYSTEM_HW_HANDOFF_BIT = $(SDK_EXPORT_DIR)/$(SYSTEM).bit
SYSTEM_HW_HANDOFF_DEP = $(SYSTEM_HW_HANDOFF) $(SYSTEM_HW_HANDOFF_BIT)
