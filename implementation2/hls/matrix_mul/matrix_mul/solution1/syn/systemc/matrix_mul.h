// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2012.4
// Copyright (C) 2012 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#ifndef _matrix_mul_HH_
#define _matrix_mul_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "matrix_mul_thread.h"
#include "matrix_mul_m_result.h"
#include "matrix_mul_m_operand1.h"

namespace ap_rtl {

struct matrix_mul : public sc_module {
    // Port declarations 8
    sc_in< sc_logic > nResetPort;
    sc_in_clk ClockPort;
    sc_out< sc_lv<1> > ReadEnablePort_0;
    sc_in< sc_lv<1> > ReadEmptyPort_0;
    sc_in< sc_lv<32> > ReadDataPort_0;
    sc_out< sc_lv<1> > WriteEnablePort_0;
    sc_in< sc_lv<1> > WriteFullPort_0;
    sc_out< sc_lv<32> > WriteDataPort_0;


    // Module declarations
    matrix_mul(sc_module_name name);
    SC_HAS_PROCESS(matrix_mul);

    ~matrix_mul();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    matrix_mul_m_result* m_result_U;
    matrix_mul_m_operand1* m_operand1_U;
    matrix_mul_m_operand1* m_operand2_U;
    matrix_mul_thread* grp_matrix_mul_thread_fu_74;
    sc_signal< sc_lv<17> > m_result_address0;
    sc_signal< sc_logic > m_result_ce0;
    sc_signal< sc_logic > m_result_we0;
    sc_signal< sc_lv<32> > m_result_d0;
    sc_signal< sc_lv<32> > m_result_q0;
    sc_signal< sc_lv<17> > m_operand1_address0;
    sc_signal< sc_logic > m_operand1_ce0;
    sc_signal< sc_logic > m_operand1_we0;
    sc_signal< sc_lv<32> > m_operand1_d0;
    sc_signal< sc_lv<32> > m_operand1_q0;
    sc_signal< sc_lv<17> > m_operand1_address1;
    sc_signal< sc_logic > m_operand1_ce1;
    sc_signal< sc_lv<32> > m_operand1_q1;
    sc_signal< sc_lv<17> > m_operand2_address0;
    sc_signal< sc_logic > m_operand2_ce0;
    sc_signal< sc_logic > m_operand2_we0;
    sc_signal< sc_lv<32> > m_operand2_d0;
    sc_signal< sc_lv<32> > m_operand2_q0;
    sc_signal< sc_lv<17> > m_operand2_address1;
    sc_signal< sc_logic > m_operand2_ce1;
    sc_signal< sc_lv<32> > m_operand2_q1;
    sc_signal< sc_lv<1> > grp_matrix_mul_thread_fu_74_ReadEnablePort_0;
    sc_signal< sc_logic > grp_matrix_mul_thread_fu_74_ReadEnablePort_0_ap_vld;
    sc_signal< sc_lv<1> > grp_matrix_mul_thread_fu_74_ReadEmptyPort_0;
    sc_signal< sc_lv<32> > grp_matrix_mul_thread_fu_74_ReadDataPort_0;
    sc_signal< sc_lv<1> > grp_matrix_mul_thread_fu_74_WriteEnablePort_0;
    sc_signal< sc_logic > grp_matrix_mul_thread_fu_74_WriteEnablePort_0_ap_vld;
    sc_signal< sc_lv<1> > grp_matrix_mul_thread_fu_74_WriteFullPort_0;
    sc_signal< sc_lv<32> > grp_matrix_mul_thread_fu_74_WriteDataPort_0;
    sc_signal< sc_logic > grp_matrix_mul_thread_fu_74_WriteDataPort_0_ap_vld;
    sc_signal< sc_lv<17> > grp_matrix_mul_thread_fu_74_m_result_address0;
    sc_signal< sc_logic > grp_matrix_mul_thread_fu_74_m_result_ce0;
    sc_signal< sc_logic > grp_matrix_mul_thread_fu_74_m_result_we0;
    sc_signal< sc_lv<32> > grp_matrix_mul_thread_fu_74_m_result_d0;
    sc_signal< sc_lv<32> > grp_matrix_mul_thread_fu_74_m_result_q0;
    sc_signal< sc_lv<17> > grp_matrix_mul_thread_fu_74_m_operand1_address0;
    sc_signal< sc_logic > grp_matrix_mul_thread_fu_74_m_operand1_ce0;
    sc_signal< sc_logic > grp_matrix_mul_thread_fu_74_m_operand1_we0;
    sc_signal< sc_lv<32> > grp_matrix_mul_thread_fu_74_m_operand1_d0;
    sc_signal< sc_lv<32> > grp_matrix_mul_thread_fu_74_m_operand1_q0;
    sc_signal< sc_lv<17> > grp_matrix_mul_thread_fu_74_m_operand1_address1;
    sc_signal< sc_logic > grp_matrix_mul_thread_fu_74_m_operand1_ce1;
    sc_signal< sc_lv<32> > grp_matrix_mul_thread_fu_74_m_operand1_q1;
    sc_signal< sc_lv<17> > grp_matrix_mul_thread_fu_74_m_operand2_address0;
    sc_signal< sc_logic > grp_matrix_mul_thread_fu_74_m_operand2_ce0;
    sc_signal< sc_logic > grp_matrix_mul_thread_fu_74_m_operand2_we0;
    sc_signal< sc_lv<32> > grp_matrix_mul_thread_fu_74_m_operand2_d0;
    sc_signal< sc_lv<32> > grp_matrix_mul_thread_fu_74_m_operand2_q0;
    sc_signal< sc_lv<17> > grp_matrix_mul_thread_fu_74_m_operand2_address1;
    sc_signal< sc_logic > grp_matrix_mul_thread_fu_74_m_operand2_ce1;
    sc_signal< sc_lv<32> > grp_matrix_mul_thread_fu_74_m_operand2_q1;
    static const sc_logic ap_const_logic_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_grp_matrix_mul_thread_fu_74_ReadDataPort_0();
    void thread_grp_matrix_mul_thread_fu_74_ReadEmptyPort_0();
    void thread_grp_matrix_mul_thread_fu_74_WriteFullPort_0();
    void thread_grp_matrix_mul_thread_fu_74_m_operand1_q0();
    void thread_grp_matrix_mul_thread_fu_74_m_operand1_q1();
    void thread_grp_matrix_mul_thread_fu_74_m_operand2_q0();
    void thread_grp_matrix_mul_thread_fu_74_m_operand2_q1();
    void thread_grp_matrix_mul_thread_fu_74_m_result_q0();
    void thread_m_operand1_address0();
    void thread_m_operand1_address1();
    void thread_m_operand1_ce0();
    void thread_m_operand1_ce1();
    void thread_m_operand1_d0();
    void thread_m_operand1_we0();
    void thread_m_operand2_address0();
    void thread_m_operand2_address1();
    void thread_m_operand2_ce0();
    void thread_m_operand2_ce1();
    void thread_m_operand2_d0();
    void thread_m_operand2_we0();
    void thread_m_result_address0();
    void thread_m_result_ce0();
    void thread_m_result_d0();
    void thread_m_result_we0();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
