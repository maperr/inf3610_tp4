#include "matrix_mul_thread.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void matrix_mul_thread::thread_tmp_5_176_cast_fu_12280_p1() {
    tmp_5_176_cast_fu_12280_p1 = esl_zext<32,16>(tmp_5_176_cast_fu_12280_p0.read());
}

void matrix_mul_thread::thread_tmp_5_176_fu_12271_p2() {
    tmp_5_176_fu_12271_p2 = (!j_cast2_cast_reg_15580.read().is_01() || !ap_const_lv15_4F6C.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast2_cast_reg_15580.read()) + sc_biguint<15>(ap_const_lv15_4F6C));
}

void matrix_mul_thread::thread_tmp_5_177_cast_fu_12294_p0() {
    tmp_5_177_cast_fu_12294_p0 = esl_sext<16,15>(tmp_5_177_fu_12285_p2.read());
}

void matrix_mul_thread::thread_tmp_5_177_cast_fu_12294_p1() {
    tmp_5_177_cast_fu_12294_p1 = esl_zext<32,16>(tmp_5_177_cast_fu_12294_p0.read());
}

void matrix_mul_thread::thread_tmp_5_177_fu_12285_p2() {
    tmp_5_177_fu_12285_p2 = (!j_cast2_cast_reg_15580.read().is_01() || !ap_const_lv15_5098.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast2_cast_reg_15580.read()) + sc_biguint<15>(ap_const_lv15_5098));
}

void matrix_mul_thread::thread_tmp_5_178_cast_fu_12308_p0() {
    tmp_5_178_cast_fu_12308_p0 = esl_sext<16,15>(tmp_5_178_fu_12299_p2.read());
}

void matrix_mul_thread::thread_tmp_5_178_cast_fu_12308_p1() {
    tmp_5_178_cast_fu_12308_p1 = esl_zext<32,16>(tmp_5_178_cast_fu_12308_p0.read());
}

void matrix_mul_thread::thread_tmp_5_178_fu_12299_p2() {
    tmp_5_178_fu_12299_p2 = (!j_cast2_cast_reg_15580.read().is_01() || !ap_const_lv15_51C4.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast2_cast_reg_15580.read()) + sc_biguint<15>(ap_const_lv15_51C4));
}

void matrix_mul_thread::thread_tmp_5_179_cast_fu_12322_p0() {
    tmp_5_179_cast_fu_12322_p0 = esl_sext<16,15>(tmp_5_179_fu_12313_p2.read());
}

void matrix_mul_thread::thread_tmp_5_179_cast_fu_12322_p1() {
    tmp_5_179_cast_fu_12322_p1 = esl_zext<32,16>(tmp_5_179_cast_fu_12322_p0.read());
}

void matrix_mul_thread::thread_tmp_5_179_fu_12313_p2() {
    tmp_5_179_fu_12313_p2 = (!j_cast2_cast_reg_15580.read().is_01() || !ap_const_lv15_52F0.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast2_cast_reg_15580.read()) + sc_biguint<15>(ap_const_lv15_52F0));
}

void matrix_mul_thread::thread_tmp_5_17_cast_fu_10296_p1() {
    tmp_5_17_cast_fu_10296_p1 = esl_zext<32,13>(tmp_5_17_fu_10291_p2.read());
}

void matrix_mul_thread::thread_tmp_5_17_fu_10291_p2() {
    tmp_5_17_fu_10291_p2 = (!j_cast314_cast1_reg_15612.read().is_01() || !ap_const_lv13_1518.is_01())? sc_lv<13>(): (sc_bigint<13>(j_cast314_cast1_reg_15612.read()) + sc_biguint<13>(ap_const_lv13_1518));
}

void matrix_mul_thread::thread_tmp_5_180_cast_fu_12336_p0() {
    tmp_5_180_cast_fu_12336_p0 = esl_sext<16,15>(tmp_5_180_fu_12327_p2.read());
}

void matrix_mul_thread::thread_tmp_5_180_cast_fu_12336_p1() {
    tmp_5_180_cast_fu_12336_p1 = esl_zext<32,16>(tmp_5_180_cast_fu_12336_p0.read());
}

void matrix_mul_thread::thread_tmp_5_180_fu_12327_p2() {
    tmp_5_180_fu_12327_p2 = (!j_cast2_cast_reg_15580.read().is_01() || !ap_const_lv15_541C.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast2_cast_reg_15580.read()) + sc_biguint<15>(ap_const_lv15_541C));
}

void matrix_mul_thread::thread_tmp_5_181_cast_fu_12350_p0() {
    tmp_5_181_cast_fu_12350_p0 = esl_sext<16,15>(tmp_5_181_fu_12341_p2.read());
}

void matrix_mul_thread::thread_tmp_5_181_cast_fu_12350_p1() {
    tmp_5_181_cast_fu_12350_p1 = esl_zext<32,16>(tmp_5_181_cast_fu_12350_p0.read());
}

void matrix_mul_thread::thread_tmp_5_181_fu_12341_p2() {
    tmp_5_181_fu_12341_p2 = (!j_cast2_cast_reg_15580.read().is_01() || !ap_const_lv15_5548.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast2_cast_reg_15580.read()) + sc_biguint<15>(ap_const_lv15_5548));
}

void matrix_mul_thread::thread_tmp_5_182_cast_fu_12364_p0() {
    tmp_5_182_cast_fu_12364_p0 = esl_sext<16,15>(tmp_5_182_fu_12355_p2.read());
}

void matrix_mul_thread::thread_tmp_5_182_cast_fu_12364_p1() {
    tmp_5_182_cast_fu_12364_p1 = esl_zext<32,16>(tmp_5_182_cast_fu_12364_p0.read());
}

void matrix_mul_thread::thread_tmp_5_182_fu_12355_p2() {
    tmp_5_182_fu_12355_p2 = (!j_cast2_cast_reg_15580.read().is_01() || !ap_const_lv15_5674.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast2_cast_reg_15580.read()) + sc_biguint<15>(ap_const_lv15_5674));
}

void matrix_mul_thread::thread_tmp_5_183_cast_fu_12378_p0() {
    tmp_5_183_cast_fu_12378_p0 = esl_sext<16,15>(tmp_5_183_fu_12369_p2.read());
}

void matrix_mul_thread::thread_tmp_5_183_cast_fu_12378_p1() {
    tmp_5_183_cast_fu_12378_p1 = esl_zext<32,16>(tmp_5_183_cast_fu_12378_p0.read());
}

void matrix_mul_thread::thread_tmp_5_183_fu_12369_p2() {
    tmp_5_183_fu_12369_p2 = (!j_cast2_cast_reg_15580.read().is_01() || !ap_const_lv15_57A0.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast2_cast_reg_15580.read()) + sc_biguint<15>(ap_const_lv15_57A0));
}

void matrix_mul_thread::thread_tmp_5_184_cast_fu_12392_p0() {
    tmp_5_184_cast_fu_12392_p0 = esl_sext<16,15>(tmp_5_184_fu_12383_p2.read());
}

void matrix_mul_thread::thread_tmp_5_184_cast_fu_12392_p1() {
    tmp_5_184_cast_fu_12392_p1 = esl_zext<32,16>(tmp_5_184_cast_fu_12392_p0.read());
}

void matrix_mul_thread::thread_tmp_5_184_fu_12383_p2() {
    tmp_5_184_fu_12383_p2 = (!j_cast2_cast_reg_15580.read().is_01() || !ap_const_lv15_58CC.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast2_cast_reg_15580.read()) + sc_biguint<15>(ap_const_lv15_58CC));
}

void matrix_mul_thread::thread_tmp_5_185_cast_fu_12406_p0() {
    tmp_5_185_cast_fu_12406_p0 = esl_sext<16,15>(tmp_5_185_fu_12397_p2.read());
}

void matrix_mul_thread::thread_tmp_5_185_cast_fu_12406_p1() {
    tmp_5_185_cast_fu_12406_p1 = esl_zext<32,16>(tmp_5_185_cast_fu_12406_p0.read());
}

void matrix_mul_thread::thread_tmp_5_185_fu_12397_p2() {
    tmp_5_185_fu_12397_p2 = (!j_cast2_cast_reg_15580.read().is_01() || !ap_const_lv15_59F8.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast2_cast_reg_15580.read()) + sc_biguint<15>(ap_const_lv15_59F8));
}

void matrix_mul_thread::thread_tmp_5_186_cast_fu_12420_p0() {
    tmp_5_186_cast_fu_12420_p0 = esl_sext<16,15>(tmp_5_186_fu_12411_p2.read());
}

void matrix_mul_thread::thread_tmp_5_186_cast_fu_12420_p1() {
    tmp_5_186_cast_fu_12420_p1 = esl_zext<32,16>(tmp_5_186_cast_fu_12420_p0.read());
}

void matrix_mul_thread::thread_tmp_5_186_fu_12411_p2() {
    tmp_5_186_fu_12411_p2 = (!j_cast2_cast_reg_15580.read().is_01() || !ap_const_lv15_5B24.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast2_cast_reg_15580.read()) + sc_biguint<15>(ap_const_lv15_5B24));
}

void matrix_mul_thread::thread_tmp_5_187_cast_fu_12440_p0() {
    tmp_5_187_cast_fu_12440_p0 = esl_sext<16,15>(tmp_5_187_fu_12431_p2.read());
}

void matrix_mul_thread::thread_tmp_5_187_cast_fu_12440_p1() {
    tmp_5_187_cast_fu_12440_p1 = esl_zext<32,16>(tmp_5_187_cast_fu_12440_p0.read());
}

void matrix_mul_thread::thread_tmp_5_187_fu_12431_p2() {
    tmp_5_187_fu_12431_p2 = (!j_cast2_cast_reg_15580.read().is_01() || !ap_const_lv15_5C50.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast2_cast_reg_15580.read()) + sc_biguint<15>(ap_const_lv15_5C50));
}

void matrix_mul_thread::thread_tmp_5_188_cast_fu_12454_p0() {
    tmp_5_188_cast_fu_12454_p0 = esl_sext<16,15>(tmp_5_188_fu_12445_p2.read());
}

void matrix_mul_thread::thread_tmp_5_188_cast_fu_12454_p1() {
    tmp_5_188_cast_fu_12454_p1 = esl_zext<32,16>(tmp_5_188_cast_fu_12454_p0.read());
}

void matrix_mul_thread::thread_tmp_5_188_fu_12445_p2() {
    tmp_5_188_fu_12445_p2 = (!j_cast2_cast_reg_15580.read().is_01() || !ap_const_lv15_5D7C.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast2_cast_reg_15580.read()) + sc_biguint<15>(ap_const_lv15_5D7C));
}

void matrix_mul_thread::thread_tmp_5_189_cast_fu_12468_p0() {
    tmp_5_189_cast_fu_12468_p0 = esl_sext<16,15>(tmp_5_189_fu_12459_p2.read());
}

void matrix_mul_thread::thread_tmp_5_189_cast_fu_12468_p1() {
    tmp_5_189_cast_fu_12468_p1 = esl_zext<32,16>(tmp_5_189_cast_fu_12468_p0.read());
}

void matrix_mul_thread::thread_tmp_5_189_fu_12459_p2() {
    tmp_5_189_fu_12459_p2 = (!j_cast2_cast_reg_15580.read().is_01() || !ap_const_lv15_5EA8.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast2_cast_reg_15580.read()) + sc_biguint<15>(ap_const_lv15_5EA8));
}

void matrix_mul_thread::thread_tmp_5_18_cast_fu_10306_p1() {
    tmp_5_18_cast_fu_10306_p1 = esl_zext<32,13>(tmp_5_18_fu_10301_p2.read());
}

void matrix_mul_thread::thread_tmp_5_18_fu_10301_p2() {
    tmp_5_18_fu_10301_p2 = (!j_cast314_cast1_reg_15612.read().is_01() || !ap_const_lv13_1644.is_01())? sc_lv<13>(): (sc_bigint<13>(j_cast314_cast1_reg_15612.read()) + sc_biguint<13>(ap_const_lv13_1644));
}

void matrix_mul_thread::thread_tmp_5_190_cast_fu_12482_p0() {
    tmp_5_190_cast_fu_12482_p0 = esl_sext<16,15>(tmp_5_190_fu_12473_p2.read());
}

void matrix_mul_thread::thread_tmp_5_190_cast_fu_12482_p1() {
    tmp_5_190_cast_fu_12482_p1 = esl_zext<32,16>(tmp_5_190_cast_fu_12482_p0.read());
}

void matrix_mul_thread::thread_tmp_5_190_fu_12473_p2() {
    tmp_5_190_fu_12473_p2 = (!j_cast2_cast_reg_15580.read().is_01() || !ap_const_lv15_5FD4.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast2_cast_reg_15580.read()) + sc_biguint<15>(ap_const_lv15_5FD4));
}

void matrix_mul_thread::thread_tmp_5_191_cast_fu_12496_p0() {
    tmp_5_191_cast_fu_12496_p0 = esl_sext<16,14>(tmp_5_191_fu_12487_p2.read());
}

void matrix_mul_thread::thread_tmp_5_191_cast_fu_12496_p1() {
    tmp_5_191_cast_fu_12496_p1 = esl_zext<32,16>(tmp_5_191_cast_fu_12496_p0.read());
}

void matrix_mul_thread::thread_tmp_5_191_fu_12487_p2() {
    tmp_5_191_fu_12487_p2 = (!j_cast2_cast2_reg_15563.read().is_01() || !ap_const_lv14_2100.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast2_cast2_reg_15563.read()) + sc_biguint<14>(ap_const_lv14_2100));
}

void matrix_mul_thread::thread_tmp_5_192_cast_fu_12510_p0() {
    tmp_5_192_cast_fu_12510_p0 = esl_sext<16,14>(tmp_5_192_fu_12501_p2.read());
}

void matrix_mul_thread::thread_tmp_5_192_cast_fu_12510_p1() {
    tmp_5_192_cast_fu_12510_p1 = esl_zext<32,16>(tmp_5_192_cast_fu_12510_p0.read());
}

void matrix_mul_thread::thread_tmp_5_192_fu_12501_p2() {
    tmp_5_192_fu_12501_p2 = (!j_cast2_cast2_reg_15563.read().is_01() || !ap_const_lv14_222C.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast2_cast2_reg_15563.read()) + sc_biguint<14>(ap_const_lv14_222C));
}

void matrix_mul_thread::thread_tmp_5_193_cast_fu_12524_p0() {
    tmp_5_193_cast_fu_12524_p0 = esl_sext<16,14>(tmp_5_193_fu_12515_p2.read());
}

void matrix_mul_thread::thread_tmp_5_193_cast_fu_12524_p1() {
    tmp_5_193_cast_fu_12524_p1 = esl_zext<32,16>(tmp_5_193_cast_fu_12524_p0.read());
}

void matrix_mul_thread::thread_tmp_5_193_fu_12515_p2() {
    tmp_5_193_fu_12515_p2 = (!j_cast2_cast2_reg_15563.read().is_01() || !ap_const_lv14_2358.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast2_cast2_reg_15563.read()) + sc_biguint<14>(ap_const_lv14_2358));
}

void matrix_mul_thread::thread_tmp_5_194_cast_fu_12538_p0() {
    tmp_5_194_cast_fu_12538_p0 = esl_sext<16,14>(tmp_5_194_fu_12529_p2.read());
}

void matrix_mul_thread::thread_tmp_5_194_cast_fu_12538_p1() {
    tmp_5_194_cast_fu_12538_p1 = esl_zext<32,16>(tmp_5_194_cast_fu_12538_p0.read());
}

void matrix_mul_thread::thread_tmp_5_194_fu_12529_p2() {
    tmp_5_194_fu_12529_p2 = (!j_cast2_cast2_reg_15563.read().is_01() || !ap_const_lv14_2484.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast2_cast2_reg_15563.read()) + sc_biguint<14>(ap_const_lv14_2484));
}

void matrix_mul_thread::thread_tmp_5_195_cast_fu_12552_p0() {
    tmp_5_195_cast_fu_12552_p0 = esl_sext<16,14>(tmp_5_195_fu_12543_p2.read());
}

void matrix_mul_thread::thread_tmp_5_195_cast_fu_12552_p1() {
    tmp_5_195_cast_fu_12552_p1 = esl_zext<32,16>(tmp_5_195_cast_fu_12552_p0.read());
}

void matrix_mul_thread::thread_tmp_5_195_fu_12543_p2() {
    tmp_5_195_fu_12543_p2 = (!j_cast2_cast2_reg_15563.read().is_01() || !ap_const_lv14_25B0.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast2_cast2_reg_15563.read()) + sc_biguint<14>(ap_const_lv14_25B0));
}

void matrix_mul_thread::thread_tmp_5_196_cast_fu_12566_p0() {
    tmp_5_196_cast_fu_12566_p0 = esl_sext<16,14>(tmp_5_196_fu_12557_p2.read());
}

void matrix_mul_thread::thread_tmp_5_196_cast_fu_12566_p1() {
    tmp_5_196_cast_fu_12566_p1 = esl_zext<32,16>(tmp_5_196_cast_fu_12566_p0.read());
}

void matrix_mul_thread::thread_tmp_5_196_fu_12557_p2() {
    tmp_5_196_fu_12557_p2 = (!j_cast2_cast2_reg_15563.read().is_01() || !ap_const_lv14_26DC.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast2_cast2_reg_15563.read()) + sc_biguint<14>(ap_const_lv14_26DC));
}

void matrix_mul_thread::thread_tmp_5_197_cast_fu_12580_p0() {
    tmp_5_197_cast_fu_12580_p0 = esl_sext<16,14>(tmp_5_197_fu_12571_p2.read());
}

void matrix_mul_thread::thread_tmp_5_197_cast_fu_12580_p1() {
    tmp_5_197_cast_fu_12580_p1 = esl_zext<32,16>(tmp_5_197_cast_fu_12580_p0.read());
}

void matrix_mul_thread::thread_tmp_5_197_fu_12571_p2() {
    tmp_5_197_fu_12571_p2 = (!j_cast2_cast2_reg_15563.read().is_01() || !ap_const_lv14_2808.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast2_cast2_reg_15563.read()) + sc_biguint<14>(ap_const_lv14_2808));
}

void matrix_mul_thread::thread_tmp_5_198_cast_fu_12594_p0() {
    tmp_5_198_cast_fu_12594_p0 = esl_sext<16,14>(tmp_5_198_fu_12585_p2.read());
}

void matrix_mul_thread::thread_tmp_5_198_cast_fu_12594_p1() {
    tmp_5_198_cast_fu_12594_p1 = esl_zext<32,16>(tmp_5_198_cast_fu_12594_p0.read());
}

void matrix_mul_thread::thread_tmp_5_198_fu_12585_p2() {
    tmp_5_198_fu_12585_p2 = (!j_cast2_cast2_reg_15563.read().is_01() || !ap_const_lv14_2934.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast2_cast2_reg_15563.read()) + sc_biguint<14>(ap_const_lv14_2934));
}

void matrix_mul_thread::thread_tmp_5_199_cast_fu_12608_p0() {
    tmp_5_199_cast_fu_12608_p0 = esl_sext<16,14>(tmp_5_199_fu_12599_p2.read());
}

void matrix_mul_thread::thread_tmp_5_199_cast_fu_12608_p1() {
    tmp_5_199_cast_fu_12608_p1 = esl_zext<32,16>(tmp_5_199_cast_fu_12608_p0.read());
}

void matrix_mul_thread::thread_tmp_5_199_fu_12599_p2() {
    tmp_5_199_fu_12599_p2 = (!j_cast2_cast2_reg_15563.read().is_01() || !ap_const_lv14_2A60.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast2_cast2_reg_15563.read()) + sc_biguint<14>(ap_const_lv14_2A60));
}

void matrix_mul_thread::thread_tmp_5_19_cast_fu_10321_p1() {
    tmp_5_19_cast_fu_10321_p1 = esl_zext<32,13>(tmp_5_19_fu_10316_p2.read());
}

void matrix_mul_thread::thread_tmp_5_19_fu_10316_p2() {
    tmp_5_19_fu_10316_p2 = (!j_cast314_cast1_reg_15612.read().is_01() || !ap_const_lv13_1770.is_01())? sc_lv<13>(): (sc_bigint<13>(j_cast314_cast1_reg_15612.read()) + sc_biguint<13>(ap_const_lv13_1770));
}

void matrix_mul_thread::thread_tmp_5_1_cast_fu_10106_p1() {
    tmp_5_1_cast_fu_10106_p1 = esl_zext<32,10>(tmp_5_1_fu_10100_p2.read());
}

void matrix_mul_thread::thread_tmp_5_1_fu_10100_p2() {
    tmp_5_1_fu_10100_p2 = (!j_cast8_fu_10079_p1.read().is_01() || !ap_const_lv10_12C.is_01())? sc_lv<10>(): (sc_bigint<10>(j_cast8_fu_10079_p1.read()) + sc_biguint<10>(ap_const_lv10_12C));
}

void matrix_mul_thread::thread_tmp_5_200_cast_fu_12622_p0() {
    tmp_5_200_cast_fu_12622_p0 = esl_sext<16,14>(tmp_5_200_fu_12613_p2.read());
}

void matrix_mul_thread::thread_tmp_5_200_cast_fu_12622_p1() {
    tmp_5_200_cast_fu_12622_p1 = esl_zext<32,16>(tmp_5_200_cast_fu_12622_p0.read());
}

void matrix_mul_thread::thread_tmp_5_200_fu_12613_p2() {
    tmp_5_200_fu_12613_p2 = (!j_cast2_cast2_reg_15563.read().is_01() || !ap_const_lv14_2B8C.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast2_cast2_reg_15563.read()) + sc_biguint<14>(ap_const_lv14_2B8C));
}

void matrix_mul_thread::thread_tmp_5_201_cast_fu_12636_p0() {
    tmp_5_201_cast_fu_12636_p0 = esl_sext<16,14>(tmp_5_201_fu_12627_p2.read());
}

void matrix_mul_thread::thread_tmp_5_201_cast_fu_12636_p1() {
    tmp_5_201_cast_fu_12636_p1 = esl_zext<32,16>(tmp_5_201_cast_fu_12636_p0.read());
}

void matrix_mul_thread::thread_tmp_5_201_fu_12627_p2() {
    tmp_5_201_fu_12627_p2 = (!j_cast2_cast2_reg_15563.read().is_01() || !ap_const_lv14_2CB8.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast2_cast2_reg_15563.read()) + sc_biguint<14>(ap_const_lv14_2CB8));
}

void matrix_mul_thread::thread_tmp_5_202_cast_fu_12650_p0() {
    tmp_5_202_cast_fu_12650_p0 = esl_sext<16,14>(tmp_5_202_fu_12641_p2.read());
}

void matrix_mul_thread::thread_tmp_5_202_cast_fu_12650_p1() {
    tmp_5_202_cast_fu_12650_p1 = esl_zext<32,16>(tmp_5_202_cast_fu_12650_p0.read());
}

void matrix_mul_thread::thread_tmp_5_202_fu_12641_p2() {
    tmp_5_202_fu_12641_p2 = (!j_cast2_cast2_reg_15563.read().is_01() || !ap_const_lv14_2DE4.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast2_cast2_reg_15563.read()) + sc_biguint<14>(ap_const_lv14_2DE4));
}

void matrix_mul_thread::thread_tmp_5_203_cast_fu_12664_p0() {
    tmp_5_203_cast_fu_12664_p0 = esl_sext<16,14>(tmp_5_203_fu_12655_p2.read());
}

void matrix_mul_thread::thread_tmp_5_203_cast_fu_12664_p1() {
    tmp_5_203_cast_fu_12664_p1 = esl_zext<32,16>(tmp_5_203_cast_fu_12664_p0.read());
}

void matrix_mul_thread::thread_tmp_5_203_fu_12655_p2() {
    tmp_5_203_fu_12655_p2 = (!j_cast2_cast2_reg_15563.read().is_01() || !ap_const_lv14_2F10.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast2_cast2_reg_15563.read()) + sc_biguint<14>(ap_const_lv14_2F10));
}

void matrix_mul_thread::thread_tmp_5_204_cast_fu_12678_p0() {
    tmp_5_204_cast_fu_12678_p0 = esl_sext<16,13>(tmp_5_204_fu_12669_p2.read());
}

void matrix_mul_thread::thread_tmp_5_204_cast_fu_12678_p1() {
    tmp_5_204_cast_fu_12678_p1 = esl_zext<32,16>(tmp_5_204_cast_fu_12678_p0.read());
}

void matrix_mul_thread::thread_tmp_5_204_fu_12669_p2() {
    tmp_5_204_fu_12669_p2 = (!j_cast2_cast1_reg_15552.read().is_01() || !ap_const_lv13_103C.is_01())? sc_lv<13>(): (sc_bigint<13>(j_cast2_cast1_reg_15552.read()) + sc_biguint<13>(ap_const_lv13_103C));
}

void matrix_mul_thread::thread_tmp_5_205_cast_fu_12697_p0() {
    tmp_5_205_cast_fu_12697_p0 = esl_sext<16,13>(tmp_5_205_fu_12688_p2.read());
}

void matrix_mul_thread::thread_tmp_5_205_cast_fu_12697_p1() {
    tmp_5_205_cast_fu_12697_p1 = esl_zext<32,16>(tmp_5_205_cast_fu_12697_p0.read());
}

void matrix_mul_thread::thread_tmp_5_205_fu_12688_p2() {
    tmp_5_205_fu_12688_p2 = (!j_cast2_cast1_reg_15552.read().is_01() || !ap_const_lv13_1168.is_01())? sc_lv<13>(): (sc_bigint<13>(j_cast2_cast1_reg_15552.read()) + sc_biguint<13>(ap_const_lv13_1168));
}

void matrix_mul_thread::thread_tmp_5_206_cast_fu_12711_p0() {
    tmp_5_206_cast_fu_12711_p0 = esl_sext<16,13>(tmp_5_206_fu_12702_p2.read());
}

void matrix_mul_thread::thread_tmp_5_206_cast_fu_12711_p1() {
    tmp_5_206_cast_fu_12711_p1 = esl_zext<32,16>(tmp_5_206_cast_fu_12711_p0.read());
}

void matrix_mul_thread::thread_tmp_5_206_fu_12702_p2() {
    tmp_5_206_fu_12702_p2 = (!j_cast2_cast1_reg_15552.read().is_01() || !ap_const_lv13_1294.is_01())? sc_lv<13>(): (sc_bigint<13>(j_cast2_cast1_reg_15552.read()) + sc_biguint<13>(ap_const_lv13_1294));
}

void matrix_mul_thread::thread_tmp_5_207_cast_fu_12741_p0() {
    tmp_5_207_cast_fu_12741_p0 = esl_sext<16,13>(tmp_5_207_fu_12732_p2.read());
}

void matrix_mul_thread::thread_tmp_5_207_cast_fu_12741_p1() {
    tmp_5_207_cast_fu_12741_p1 = esl_zext<32,16>(tmp_5_207_cast_fu_12741_p0.read());
}

void matrix_mul_thread::thread_tmp_5_207_fu_12732_p2() {
    tmp_5_207_fu_12732_p2 = (!j_cast2_cast1_reg_15552.read().is_01() || !ap_const_lv13_13C0.is_01())? sc_lv<13>(): (sc_bigint<13>(j_cast2_cast1_reg_15552.read()) + sc_biguint<13>(ap_const_lv13_13C0));
}

void matrix_mul_thread::thread_tmp_5_208_cast_fu_12755_p0() {
    tmp_5_208_cast_fu_12755_p0 = esl_sext<16,13>(tmp_5_208_fu_12746_p2.read());
}

void matrix_mul_thread::thread_tmp_5_208_cast_fu_12755_p1() {
    tmp_5_208_cast_fu_12755_p1 = esl_zext<32,16>(tmp_5_208_cast_fu_12755_p0.read());
}

void matrix_mul_thread::thread_tmp_5_208_fu_12746_p2() {
    tmp_5_208_fu_12746_p2 = (!j_cast2_cast1_reg_15552.read().is_01() || !ap_const_lv13_14EC.is_01())? sc_lv<13>(): (sc_bigint<13>(j_cast2_cast1_reg_15552.read()) + sc_biguint<13>(ap_const_lv13_14EC));
}

void matrix_mul_thread::thread_tmp_5_209_cast_fu_12769_p0() {
    tmp_5_209_cast_fu_12769_p0 = esl_sext<16,13>(tmp_5_209_fu_12760_p2.read());
}

void matrix_mul_thread::thread_tmp_5_209_cast_fu_12769_p1() {
    tmp_5_209_cast_fu_12769_p1 = esl_zext<32,16>(tmp_5_209_cast_fu_12769_p0.read());
}

void matrix_mul_thread::thread_tmp_5_209_fu_12760_p2() {
    tmp_5_209_fu_12760_p2 = (!j_cast2_cast1_reg_15552.read().is_01() || !ap_const_lv13_1618.is_01())? sc_lv<13>(): (sc_bigint<13>(j_cast2_cast1_reg_15552.read()) + sc_biguint<13>(ap_const_lv13_1618));
}

void matrix_mul_thread::thread_tmp_5_20_cast_fu_10335_p0() {
    tmp_5_20_cast_fu_10335_p0 = esl_sext<13,12>(tmp_5_20_fu_10326_p2.read());
}

void matrix_mul_thread::thread_tmp_5_20_cast_fu_10335_p1() {
    tmp_5_20_cast_fu_10335_p1 = esl_zext<32,13>(tmp_5_20_cast_fu_10335_p0.read());
}

void matrix_mul_thread::thread_tmp_5_20_fu_10326_p2() {
    tmp_5_20_fu_10326_p2 = (!j_cast314_cast1_cast_reg_15638.read().is_01() || !ap_const_lv12_89C.is_01())? sc_lv<12>(): (sc_bigint<12>(j_cast314_cast1_cast_reg_15638.read()) + sc_biguint<12>(ap_const_lv12_89C));
}

void matrix_mul_thread::thread_tmp_5_210_cast_fu_12783_p0() {
    tmp_5_210_cast_fu_12783_p0 = esl_sext<16,13>(tmp_5_210_fu_12774_p2.read());
}

void matrix_mul_thread::thread_tmp_5_210_cast_fu_12783_p1() {
    tmp_5_210_cast_fu_12783_p1 = esl_zext<32,16>(tmp_5_210_cast_fu_12783_p0.read());
}

void matrix_mul_thread::thread_tmp_5_210_fu_12774_p2() {
    tmp_5_210_fu_12774_p2 = (!j_cast2_cast1_reg_15552.read().is_01() || !ap_const_lv13_1744.is_01())? sc_lv<13>(): (sc_bigint<13>(j_cast2_cast1_reg_15552.read()) + sc_biguint<13>(ap_const_lv13_1744));
}

void matrix_mul_thread::thread_tmp_5_211_cast_fu_12797_p0() {
    tmp_5_211_cast_fu_12797_p0 = esl_sext<16,12>(tmp_5_211_fu_12788_p2.read());
}

void matrix_mul_thread::thread_tmp_5_211_cast_fu_12797_p1() {
    tmp_5_211_cast_fu_12797_p1 = esl_zext<32,16>(tmp_5_211_cast_fu_12797_p0.read());
}

void matrix_mul_thread::thread_tmp_5_211_fu_12788_p2() {
    tmp_5_211_fu_12788_p2 = (!j_cast314_cast_cast1_reg_15722.read().is_01() || !ap_const_lv12_870.is_01())? sc_lv<12>(): (sc_bigint<12>(j_cast314_cast_cast1_reg_15722.read()) + sc_biguint<12>(ap_const_lv12_870));
}

void matrix_mul_thread::thread_tmp_5_212_cast_fu_12811_p0() {
    tmp_5_212_cast_fu_12811_p0 = esl_sext<16,12>(tmp_5_212_fu_12802_p2.read());
}

void matrix_mul_thread::thread_tmp_5_212_cast_fu_12811_p1() {
    tmp_5_212_cast_fu_12811_p1 = esl_zext<32,16>(tmp_5_212_cast_fu_12811_p0.read());
}

void matrix_mul_thread::thread_tmp_5_212_fu_12802_p2() {
    tmp_5_212_fu_12802_p2 = (!j_cast314_cast_cast1_reg_15722.read().is_01() || !ap_const_lv12_99C.is_01())? sc_lv<12>(): (sc_bigint<12>(j_cast314_cast_cast1_reg_15722.read()) + sc_biguint<12>(ap_const_lv12_99C));
}

void matrix_mul_thread::thread_tmp_5_213_cast_fu_12830_p0() {
    tmp_5_213_cast_fu_12830_p0 = esl_sext<16,12>(tmp_5_213_fu_12821_p2.read());
}

void matrix_mul_thread::thread_tmp_5_213_cast_fu_12830_p1() {
    tmp_5_213_cast_fu_12830_p1 = esl_zext<32,16>(tmp_5_213_cast_fu_12830_p0.read());
}

void matrix_mul_thread::thread_tmp_5_213_fu_12821_p2() {
    tmp_5_213_fu_12821_p2 = (!j_cast314_cast_cast1_reg_15722.read().is_01() || !ap_const_lv12_AC8.is_01())? sc_lv<12>(): (sc_bigint<12>(j_cast314_cast_cast1_reg_15722.read()) + sc_biguint<12>(ap_const_lv12_AC8));
}

void matrix_mul_thread::thread_tmp_5_214_cast_fu_12844_p0() {
    tmp_5_214_cast_fu_12844_p0 = esl_sext<16,12>(tmp_5_214_fu_12835_p2.read());
}

void matrix_mul_thread::thread_tmp_5_214_cast_fu_12844_p1() {
    tmp_5_214_cast_fu_12844_p1 = esl_zext<32,16>(tmp_5_214_cast_fu_12844_p0.read());
}

void matrix_mul_thread::thread_tmp_5_214_fu_12835_p2() {
    tmp_5_214_fu_12835_p2 = (!j_cast314_cast_cast1_reg_15722.read().is_01() || !ap_const_lv12_BF4.is_01())? sc_lv<12>(): (sc_bigint<12>(j_cast314_cast_cast1_reg_15722.read()) + sc_biguint<12>(ap_const_lv12_BF4));
}

void matrix_mul_thread::thread_tmp_5_215_cast_fu_12858_p0() {
    tmp_5_215_cast_fu_12858_p0 = esl_sext<16,11>(tmp_5_215_fu_12849_p2.read());
}

void matrix_mul_thread::thread_tmp_5_215_cast_fu_12858_p1() {
    tmp_5_215_cast_fu_12858_p1 = esl_zext<32,16>(tmp_5_215_cast_fu_12858_p0.read());
}

void matrix_mul_thread::thread_tmp_5_215_fu_12849_p2() {
    tmp_5_215_fu_12849_p2 = (!j_cast314_cast2_cast1_reg_15663.read().is_01() || !ap_const_lv11_520.is_01())? sc_lv<11>(): (sc_bigint<11>(j_cast314_cast2_cast1_reg_15663.read()) + sc_biguint<11>(ap_const_lv11_520));
}

void matrix_mul_thread::thread_tmp_5_216_cast_fu_12872_p0() {
    tmp_5_216_cast_fu_12872_p0 = esl_sext<16,10>(tmp_5_216_fu_12863_p2.read());
}

void matrix_mul_thread::thread_tmp_5_216_cast_fu_12872_p1() {
    tmp_5_216_cast_fu_12872_p1 = esl_zext<32,16>(tmp_5_216_cast_fu_12872_p0.read());
}

void matrix_mul_thread::thread_tmp_5_216_fu_12863_p2() {
    tmp_5_216_fu_12863_p2 = (!j_cast314_cast1_cast1_reg_15624.read().is_01() || !ap_const_lv10_24C.is_01())? sc_lv<10>(): (sc_bigint<10>(j_cast314_cast1_cast1_reg_15624.read()) + sc_biguint<10>(ap_const_lv10_24C));
}

void matrix_mul_thread::thread_tmp_5_217_cast_fu_12882_p1() {
    tmp_5_217_cast_fu_12882_p1 = esl_zext<32,17>(tmp_5_217_fu_12877_p2.read());
}

void matrix_mul_thread::thread_tmp_5_217_fu_12877_p2() {
    tmp_5_217_fu_12877_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_FF78.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_FF78));
}

void matrix_mul_thread::thread_tmp_5_218_cast_fu_12892_p1() {
    tmp_5_218_cast_fu_12892_p1 = esl_zext<32,17>(tmp_5_218_fu_12887_p2.read());
}

void matrix_mul_thread::thread_tmp_5_218_fu_12887_p2() {
    tmp_5_218_fu_12887_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_100A4.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_100A4));
}

void matrix_mul_thread::thread_tmp_5_219_cast_fu_12902_p1() {
    tmp_5_219_cast_fu_12902_p1 = esl_zext<32,17>(tmp_5_219_fu_12897_p2.read());
}

void matrix_mul_thread::thread_tmp_5_219_fu_12897_p2() {
    tmp_5_219_fu_12897_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_101D0.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_101D0));
}

void matrix_mul_thread::thread_tmp_5_21_cast_fu_10349_p0() {
    tmp_5_21_cast_fu_10349_p0 = esl_sext<13,12>(tmp_5_21_fu_10340_p2.read());
}

void matrix_mul_thread::thread_tmp_5_21_cast_fu_10349_p1() {
    tmp_5_21_cast_fu_10349_p1 = esl_zext<32,13>(tmp_5_21_cast_fu_10349_p0.read());
}

void matrix_mul_thread::thread_tmp_5_21_fu_10340_p2() {
    tmp_5_21_fu_10340_p2 = (!j_cast314_cast1_cast_reg_15638.read().is_01() || !ap_const_lv12_9C8.is_01())? sc_lv<12>(): (sc_bigint<12>(j_cast314_cast1_cast_reg_15638.read()) + sc_biguint<12>(ap_const_lv12_9C8));
}

void matrix_mul_thread::thread_tmp_5_220_cast_fu_12912_p1() {
    tmp_5_220_cast_fu_12912_p1 = esl_zext<32,17>(tmp_5_220_fu_12907_p2.read());
}

void matrix_mul_thread::thread_tmp_5_220_fu_12907_p2() {
    tmp_5_220_fu_12907_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_102FC.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_102FC));
}

void matrix_mul_thread::thread_tmp_5_221_cast_fu_12922_p1() {
    tmp_5_221_cast_fu_12922_p1 = esl_zext<32,17>(tmp_5_221_fu_12917_p2.read());
}

void matrix_mul_thread::thread_tmp_5_221_fu_12917_p2() {
    tmp_5_221_fu_12917_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_10428.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_10428));
}

void matrix_mul_thread::thread_tmp_5_222_cast_fu_12932_p1() {
    tmp_5_222_cast_fu_12932_p1 = esl_zext<32,17>(tmp_5_222_fu_12927_p2.read());
}

void matrix_mul_thread::thread_tmp_5_222_fu_12927_p2() {
    tmp_5_222_fu_12927_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_10554.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_10554));
}

void matrix_mul_thread::thread_tmp_5_223_cast_fu_12947_p1() {
    tmp_5_223_cast_fu_12947_p1 = esl_zext<32,17>(tmp_5_223_fu_12942_p2.read());
}

void matrix_mul_thread::thread_tmp_5_223_fu_12942_p2() {
    tmp_5_223_fu_12942_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_10680.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_10680));
}

void matrix_mul_thread::thread_tmp_5_224_cast_fu_12957_p1() {
    tmp_5_224_cast_fu_12957_p1 = esl_zext<32,17>(tmp_5_224_fu_12952_p2.read());
}

void matrix_mul_thread::thread_tmp_5_224_fu_12952_p2() {
    tmp_5_224_fu_12952_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_107AC.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_107AC));
}

void matrix_mul_thread::thread_tmp_5_225_cast_fu_12977_p1() {
    tmp_5_225_cast_fu_12977_p1 = esl_zext<32,17>(tmp_5_225_fu_12972_p2.read());
}

void matrix_mul_thread::thread_tmp_5_225_fu_12972_p2() {
    tmp_5_225_fu_12972_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_108D8.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_108D8));
}

void matrix_mul_thread::thread_tmp_5_226_cast_fu_12987_p1() {
    tmp_5_226_cast_fu_12987_p1 = esl_zext<32,17>(tmp_5_226_fu_12982_p2.read());
}

void matrix_mul_thread::thread_tmp_5_226_fu_12982_p2() {
    tmp_5_226_fu_12982_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_10A04.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_10A04));
}

void matrix_mul_thread::thread_tmp_5_227_cast_fu_12997_p1() {
    tmp_5_227_cast_fu_12997_p1 = esl_zext<32,17>(tmp_5_227_fu_12992_p2.read());
}

void matrix_mul_thread::thread_tmp_5_227_fu_12992_p2() {
    tmp_5_227_fu_12992_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_10B30.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_10B30));
}

void matrix_mul_thread::thread_tmp_5_228_cast_fu_13007_p1() {
    tmp_5_228_cast_fu_13007_p1 = esl_zext<32,17>(tmp_5_228_fu_13002_p2.read());
}

void matrix_mul_thread::thread_tmp_5_228_fu_13002_p2() {
    tmp_5_228_fu_13002_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_10C5C.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_10C5C));
}

void matrix_mul_thread::thread_tmp_5_229_cast_fu_13017_p1() {
    tmp_5_229_cast_fu_13017_p1 = esl_zext<32,17>(tmp_5_229_fu_13012_p2.read());
}

void matrix_mul_thread::thread_tmp_5_229_fu_13012_p2() {
    tmp_5_229_fu_13012_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_10D88.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_10D88));
}

void matrix_mul_thread::thread_tmp_5_22_cast_fu_10363_p0() {
    tmp_5_22_cast_fu_10363_p0 = esl_sext<13,12>(tmp_5_22_fu_10354_p2.read());
}

void matrix_mul_thread::thread_tmp_5_22_cast_fu_10363_p1() {
    tmp_5_22_cast_fu_10363_p1 = esl_zext<32,13>(tmp_5_22_cast_fu_10363_p0.read());
}

void matrix_mul_thread::thread_tmp_5_22_fu_10354_p2() {
    tmp_5_22_fu_10354_p2 = (!j_cast314_cast1_cast_reg_15638.read().is_01() || !ap_const_lv12_AF4.is_01())? sc_lv<12>(): (sc_bigint<12>(j_cast314_cast1_cast_reg_15638.read()) + sc_biguint<12>(ap_const_lv12_AF4));
}

void matrix_mul_thread::thread_tmp_5_230_cast_fu_13027_p1() {
    tmp_5_230_cast_fu_13027_p1 = esl_zext<32,17>(tmp_5_230_fu_13022_p2.read());
}

void matrix_mul_thread::thread_tmp_5_230_fu_13022_p2() {
    tmp_5_230_fu_13022_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_10EB4.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_10EB4));
}

void matrix_mul_thread::thread_tmp_5_231_cast_fu_13037_p1() {
    tmp_5_231_cast_fu_13037_p1 = esl_zext<32,17>(tmp_5_231_fu_13032_p2.read());
}

void matrix_mul_thread::thread_tmp_5_231_fu_13032_p2() {
    tmp_5_231_fu_13032_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_10FE0.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_10FE0));
}

void matrix_mul_thread::thread_tmp_5_232_cast_fu_13047_p1() {
    tmp_5_232_cast_fu_13047_p1 = esl_zext<32,17>(tmp_5_232_fu_13042_p2.read());
}

void matrix_mul_thread::thread_tmp_5_232_fu_13042_p2() {
    tmp_5_232_fu_13042_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_1110C.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_1110C));
}

void matrix_mul_thread::thread_tmp_5_233_cast_fu_13062_p1() {
    tmp_5_233_cast_fu_13062_p1 = esl_zext<32,17>(tmp_5_233_fu_13057_p2.read());
}

void matrix_mul_thread::thread_tmp_5_233_fu_13057_p2() {
    tmp_5_233_fu_13057_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_11238.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_11238));
}

void matrix_mul_thread::thread_tmp_5_234_cast_fu_13072_p1() {
    tmp_5_234_cast_fu_13072_p1 = esl_zext<32,17>(tmp_5_234_fu_13067_p2.read());
}

void matrix_mul_thread::thread_tmp_5_234_fu_13067_p2() {
    tmp_5_234_fu_13067_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_11364.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_11364));
}

void matrix_mul_thread::thread_tmp_5_235_cast_fu_13082_p1() {
    tmp_5_235_cast_fu_13082_p1 = esl_zext<32,17>(tmp_5_235_fu_13077_p2.read());
}

void matrix_mul_thread::thread_tmp_5_235_fu_13077_p2() {
    tmp_5_235_fu_13077_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_11490.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_11490));
}

void matrix_mul_thread::thread_tmp_5_236_cast_fu_13092_p1() {
    tmp_5_236_cast_fu_13092_p1 = esl_zext<32,17>(tmp_5_236_fu_13087_p2.read());
}

void matrix_mul_thread::thread_tmp_5_236_fu_13087_p2() {
    tmp_5_236_fu_13087_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_115BC.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_115BC));
}

void matrix_mul_thread::thread_tmp_5_237_cast_fu_13102_p1() {
    tmp_5_237_cast_fu_13102_p1 = esl_zext<32,17>(tmp_5_237_fu_13097_p2.read());
}

void matrix_mul_thread::thread_tmp_5_237_fu_13097_p2() {
    tmp_5_237_fu_13097_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_116E8.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_116E8));
}

void matrix_mul_thread::thread_tmp_5_238_cast_fu_13112_p1() {
    tmp_5_238_cast_fu_13112_p1 = esl_zext<32,17>(tmp_5_238_fu_13107_p2.read());
}

void matrix_mul_thread::thread_tmp_5_238_fu_13107_p2() {
    tmp_5_238_fu_13107_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_11814.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_11814));
}

void matrix_mul_thread::thread_tmp_5_239_cast_fu_13122_p1() {
    tmp_5_239_cast_fu_13122_p1 = esl_zext<32,17>(tmp_5_239_fu_13117_p2.read());
}

void matrix_mul_thread::thread_tmp_5_239_fu_13117_p2() {
    tmp_5_239_fu_13117_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_11940.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_11940));
}

void matrix_mul_thread::thread_tmp_5_23_cast_fu_10377_p0() {
    tmp_5_23_cast_fu_10377_p0 = esl_sext<13,11>(tmp_5_23_fu_10368_p2.read());
}

void matrix_mul_thread::thread_tmp_5_23_cast_fu_10377_p1() {
    tmp_5_23_cast_fu_10377_p1 = esl_zext<32,13>(tmp_5_23_cast_fu_10377_p0.read());
}

void matrix_mul_thread::thread_tmp_5_23_fu_10368_p2() {
    tmp_5_23_fu_10368_p2 = (!j_cast314_cast1_cast2_reg_15632.read().is_01() || !ap_const_lv11_420.is_01())? sc_lv<11>(): (sc_bigint<11>(j_cast314_cast1_cast2_reg_15632.read()) + sc_biguint<11>(ap_const_lv11_420));
}

void matrix_mul_thread::thread_tmp_5_240_cast_fu_13132_p1() {
    tmp_5_240_cast_fu_13132_p1 = esl_zext<32,17>(tmp_5_240_fu_13127_p2.read());
}

void matrix_mul_thread::thread_tmp_5_240_fu_13127_p2() {
    tmp_5_240_fu_13127_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_11A6C.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_11A6C));
}

void matrix_mul_thread::thread_tmp_5_241_cast_fu_13142_p1() {
    tmp_5_241_cast_fu_13142_p1 = esl_zext<32,17>(tmp_5_241_fu_13137_p2.read());
}

void matrix_mul_thread::thread_tmp_5_241_fu_13137_p2() {
    tmp_5_241_fu_13137_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_11B98.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_11B98));
}

void matrix_mul_thread::thread_tmp_5_242_cast_fu_13152_p1() {
    tmp_5_242_cast_fu_13152_p1 = esl_zext<32,17>(tmp_5_242_fu_13147_p2.read());
}

void matrix_mul_thread::thread_tmp_5_242_fu_13147_p2() {
    tmp_5_242_fu_13147_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_11CC4.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_11CC4));
}

void matrix_mul_thread::thread_tmp_5_243_cast_fu_13167_p1() {
    tmp_5_243_cast_fu_13167_p1 = esl_zext<32,17>(tmp_5_243_fu_13162_p2.read());
}

void matrix_mul_thread::thread_tmp_5_243_fu_13162_p2() {
    tmp_5_243_fu_13162_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_11DF0.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_11DF0));
}

void matrix_mul_thread::thread_tmp_5_244_cast_fu_13177_p1() {
    tmp_5_244_cast_fu_13177_p1 = esl_zext<32,17>(tmp_5_244_fu_13172_p2.read());
}

void matrix_mul_thread::thread_tmp_5_244_fu_13172_p2() {
    tmp_5_244_fu_13172_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_11F1C.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_11F1C));
}

void matrix_mul_thread::thread_tmp_5_245_cast_fu_13196_p1() {
    tmp_5_245_cast_fu_13196_p1 = esl_zext<32,17>(tmp_5_245_fu_13191_p2.read());
}

void matrix_mul_thread::thread_tmp_5_245_fu_13191_p2() {
    tmp_5_245_fu_13191_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_12048.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_12048));
}

void matrix_mul_thread::thread_tmp_5_246_cast_fu_13206_p1() {
    tmp_5_246_cast_fu_13206_p1 = esl_zext<32,17>(tmp_5_246_fu_13201_p2.read());
}

void matrix_mul_thread::thread_tmp_5_246_fu_13201_p2() {
    tmp_5_246_fu_13201_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_12174.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_12174));
}

void matrix_mul_thread::thread_tmp_5_247_cast_fu_13220_p1() {
    tmp_5_247_cast_fu_13220_p1 = esl_zext<32,17>(tmp_5_247_fu_13215_p2.read());
}

void matrix_mul_thread::thread_tmp_5_247_fu_13215_p2() {
    tmp_5_247_fu_13215_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_122A0.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_122A0));
}

void matrix_mul_thread::thread_tmp_5_248_cast_fu_13230_p1() {
    tmp_5_248_cast_fu_13230_p1 = esl_zext<32,17>(tmp_5_248_fu_13225_p2.read());
}

void matrix_mul_thread::thread_tmp_5_248_fu_13225_p2() {
    tmp_5_248_fu_13225_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_123CC.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_123CC));
}

void matrix_mul_thread::thread_tmp_5_249_cast_fu_13240_p1() {
    tmp_5_249_cast_fu_13240_p1 = esl_zext<32,17>(tmp_5_249_fu_13235_p2.read());
}

void matrix_mul_thread::thread_tmp_5_249_fu_13235_p2() {
    tmp_5_249_fu_13235_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_124F8.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_124F8));
}

void matrix_mul_thread::thread_tmp_5_24_cast_fu_10391_p0() {
    tmp_5_24_cast_fu_10391_p0 = esl_sext<13,11>(tmp_5_24_fu_10382_p2.read());
}

void matrix_mul_thread::thread_tmp_5_24_cast_fu_10391_p1() {
    tmp_5_24_cast_fu_10391_p1 = esl_zext<32,13>(tmp_5_24_cast_fu_10391_p0.read());
}

void matrix_mul_thread::thread_tmp_5_24_fu_10382_p2() {
    tmp_5_24_fu_10382_p2 = (!j_cast314_cast1_cast2_reg_15632.read().is_01() || !ap_const_lv11_54C.is_01())? sc_lv<11>(): (sc_bigint<11>(j_cast314_cast1_cast2_reg_15632.read()) + sc_biguint<11>(ap_const_lv11_54C));
}

void matrix_mul_thread::thread_tmp_5_250_cast_fu_13250_p1() {
    tmp_5_250_cast_fu_13250_p1 = esl_zext<32,17>(tmp_5_250_fu_13245_p2.read());
}

void matrix_mul_thread::thread_tmp_5_250_fu_13245_p2() {
    tmp_5_250_fu_13245_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_12624.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_12624));
}

void matrix_mul_thread::thread_tmp_5_251_cast_fu_13260_p1() {
    tmp_5_251_cast_fu_13260_p1 = esl_zext<32,17>(tmp_5_251_fu_13255_p2.read());
}

void matrix_mul_thread::thread_tmp_5_251_fu_13255_p2() {
    tmp_5_251_fu_13255_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_12750.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_12750));
}

void matrix_mul_thread::thread_tmp_5_252_cast_fu_13270_p1() {
    tmp_5_252_cast_fu_13270_p1 = esl_zext<32,17>(tmp_5_252_fu_13265_p2.read());
}

void matrix_mul_thread::thread_tmp_5_252_fu_13265_p2() {
    tmp_5_252_fu_13265_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_1287C.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_1287C));
}

void matrix_mul_thread::thread_tmp_5_253_cast_fu_13280_p1() {
    tmp_5_253_cast_fu_13280_p1 = esl_zext<32,17>(tmp_5_253_fu_13275_p2.read());
}

void matrix_mul_thread::thread_tmp_5_253_fu_13275_p2() {
    tmp_5_253_fu_13275_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_129A8.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_129A8));
}

void matrix_mul_thread::thread_tmp_5_254_cast_fu_13290_p1() {
    tmp_5_254_cast_fu_13290_p1 = esl_zext<32,17>(tmp_5_254_fu_13285_p2.read());
}

void matrix_mul_thread::thread_tmp_5_254_fu_13285_p2() {
    tmp_5_254_fu_13285_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_12AD4.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_12AD4));
}

void matrix_mul_thread::thread_tmp_5_255_cast_fu_13300_p1() {
    tmp_5_255_cast_fu_13300_p1 = esl_zext<32,17>(tmp_5_255_fu_13295_p2.read());
}

void matrix_mul_thread::thread_tmp_5_255_fu_13295_p2() {
    tmp_5_255_fu_13295_p2 = (j_cast1_reg_15407.read() | ap_const_lv17_12C00);
}

void matrix_mul_thread::thread_tmp_5_256_cast_fu_13310_p1() {
    tmp_5_256_cast_fu_13310_p1 = esl_zext<32,17>(tmp_5_256_fu_13305_p2.read());
}

void matrix_mul_thread::thread_tmp_5_256_fu_13305_p2() {
    tmp_5_256_fu_13305_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_12D2C.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_12D2C));
}

void matrix_mul_thread::thread_tmp_5_257_cast_fu_13320_p1() {
    tmp_5_257_cast_fu_13320_p1 = esl_zext<32,17>(tmp_5_257_fu_13315_p2.read());
}

void matrix_mul_thread::thread_tmp_5_257_fu_13315_p2() {
    tmp_5_257_fu_13315_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_12E58.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_12E58));
}

void matrix_mul_thread::thread_tmp_5_258_cast_fu_13330_p1() {
    tmp_5_258_cast_fu_13330_p1 = esl_zext<32,17>(tmp_5_258_fu_13325_p2.read());
}

void matrix_mul_thread::thread_tmp_5_258_fu_13325_p2() {
    tmp_5_258_fu_13325_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_12F84.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_12F84));
}

void matrix_mul_thread::thread_tmp_5_259_cast_fu_13340_p1() {
    tmp_5_259_cast_fu_13340_p1 = esl_zext<32,17>(tmp_5_259_fu_13335_p2.read());
}

void matrix_mul_thread::thread_tmp_5_259_fu_13335_p2() {
    tmp_5_259_fu_13335_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_130B0.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_130B0));
}

void matrix_mul_thread::thread_tmp_5_25_cast_fu_10405_p0() {
    tmp_5_25_cast_fu_10405_p0 = esl_sext<13,10>(tmp_5_25_fu_10396_p2.read());
}

void matrix_mul_thread::thread_tmp_5_25_cast_fu_10405_p1() {
    tmp_5_25_cast_fu_10405_p1 = esl_zext<32,13>(tmp_5_25_cast_fu_10405_p0.read());
}

void matrix_mul_thread::thread_tmp_5_25_fu_10396_p2() {
    tmp_5_25_fu_10396_p2 = (!j_cast314_cast1_cast1_reg_15624.read().is_01() || !ap_const_lv10_278.is_01())? sc_lv<10>(): (sc_bigint<10>(j_cast314_cast1_cast1_reg_15624.read()) + sc_biguint<10>(ap_const_lv10_278));
}

void matrix_mul_thread::thread_tmp_5_260_cast_fu_13350_p1() {
    tmp_5_260_cast_fu_13350_p1 = esl_zext<32,17>(tmp_5_260_fu_13345_p2.read());
}

void matrix_mul_thread::thread_tmp_5_260_fu_13345_p2() {
    tmp_5_260_fu_13345_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_131DC.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_131DC));
}

void matrix_mul_thread::thread_tmp_5_261_cast_fu_13360_p1() {
    tmp_5_261_cast_fu_13360_p1 = esl_zext<32,17>(tmp_5_261_fu_13355_p2.read());
}

void matrix_mul_thread::thread_tmp_5_261_fu_13355_p2() {
    tmp_5_261_fu_13355_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_13308.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_13308));
}

void matrix_mul_thread::thread_tmp_5_262_cast_fu_13370_p1() {
    tmp_5_262_cast_fu_13370_p1 = esl_zext<32,17>(tmp_5_262_fu_13365_p2.read());
}

void matrix_mul_thread::thread_tmp_5_262_fu_13365_p2() {
    tmp_5_262_fu_13365_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_13434.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_13434));
}

void matrix_mul_thread::thread_tmp_5_263_cast_fu_13386_p1() {
    tmp_5_263_cast_fu_13386_p1 = esl_zext<32,17>(tmp_5_263_fu_13381_p2.read());
}

void matrix_mul_thread::thread_tmp_5_263_fu_13381_p2() {
    tmp_5_263_fu_13381_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_13560.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_13560));
}

void matrix_mul_thread::thread_tmp_5_264_cast_fu_13396_p1() {
    tmp_5_264_cast_fu_13396_p1 = esl_zext<32,17>(tmp_5_264_fu_13391_p2.read());
}

void matrix_mul_thread::thread_tmp_5_264_fu_13391_p2() {
    tmp_5_264_fu_13391_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_1368C.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_1368C));
}

void matrix_mul_thread::thread_tmp_5_265_cast_fu_13406_p1() {
    tmp_5_265_cast_fu_13406_p1 = esl_zext<32,17>(tmp_5_265_fu_13401_p2.read());
}

void matrix_mul_thread::thread_tmp_5_265_fu_13401_p2() {
    tmp_5_265_fu_13401_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_137B8.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_137B8));
}

void matrix_mul_thread::thread_tmp_5_266_cast_fu_13416_p1() {
    tmp_5_266_cast_fu_13416_p1 = esl_zext<32,17>(tmp_5_266_fu_13411_p2.read());
}

void matrix_mul_thread::thread_tmp_5_266_fu_13411_p2() {
    tmp_5_266_fu_13411_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_138E4.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_138E4));
}

void matrix_mul_thread::thread_tmp_5_267_cast_fu_13426_p1() {
    tmp_5_267_cast_fu_13426_p1 = esl_zext<32,17>(tmp_5_267_fu_13421_p2.read());
}

void matrix_mul_thread::thread_tmp_5_267_fu_13421_p2() {
    tmp_5_267_fu_13421_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_13A10.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_13A10));
}

void matrix_mul_thread::thread_tmp_5_268_cast_fu_13436_p1() {
    tmp_5_268_cast_fu_13436_p1 = esl_zext<32,17>(tmp_5_268_fu_13431_p2.read());
}

void matrix_mul_thread::thread_tmp_5_268_fu_13431_p2() {
    tmp_5_268_fu_13431_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_13B3C.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_13B3C));
}

void matrix_mul_thread::thread_tmp_5_269_cast_fu_13446_p1() {
    tmp_5_269_cast_fu_13446_p1 = esl_zext<32,17>(tmp_5_269_fu_13441_p2.read());
}

void matrix_mul_thread::thread_tmp_5_269_fu_13441_p2() {
    tmp_5_269_fu_13441_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_13C68.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_13C68));
}

void matrix_mul_thread::thread_tmp_5_26_cast_fu_10415_p1() {
    tmp_5_26_cast_fu_10415_p1 = esl_zext<32,14>(tmp_5_26_fu_10410_p2.read());
}

void matrix_mul_thread::thread_tmp_5_26_fu_10410_p2() {
    tmp_5_26_fu_10410_p2 = (!j_cast314_cast2_reg_15645.read().is_01() || !ap_const_lv14_1FA4.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast2_reg_15645.read()) + sc_biguint<14>(ap_const_lv14_1FA4));
}

void matrix_mul_thread::thread_tmp_5_270_cast_fu_13456_p1() {
    tmp_5_270_cast_fu_13456_p1 = esl_zext<32,17>(tmp_5_270_fu_13451_p2.read());
}

void matrix_mul_thread::thread_tmp_5_270_fu_13451_p2() {
    tmp_5_270_fu_13451_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_13D94.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_13D94));
}

void matrix_mul_thread::thread_tmp_5_271_cast_fu_13466_p1() {
    tmp_5_271_cast_fu_13466_p1 = esl_zext<32,17>(tmp_5_271_fu_13461_p2.read());
}

void matrix_mul_thread::thread_tmp_5_271_fu_13461_p2() {
    tmp_5_271_fu_13461_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_13EC0.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_13EC0));
}

void matrix_mul_thread::thread_tmp_5_272_cast_fu_13476_p1() {
    tmp_5_272_cast_fu_13476_p1 = esl_zext<32,17>(tmp_5_272_fu_13471_p2.read());
}

void matrix_mul_thread::thread_tmp_5_272_fu_13471_p2() {
    tmp_5_272_fu_13471_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_13FEC.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_13FEC));
}

void matrix_mul_thread::thread_tmp_5_273_cast_fu_13486_p1() {
    tmp_5_273_cast_fu_13486_p1 = esl_zext<32,17>(tmp_5_273_fu_13481_p2.read());
}

void matrix_mul_thread::thread_tmp_5_273_fu_13481_p2() {
    tmp_5_273_fu_13481_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_14118.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_14118));
}

void matrix_mul_thread::thread_tmp_5_274_cast_fu_13496_p1() {
    tmp_5_274_cast_fu_13496_p1 = esl_zext<32,17>(tmp_5_274_fu_13491_p2.read());
}

void matrix_mul_thread::thread_tmp_5_274_fu_13491_p2() {
    tmp_5_274_fu_13491_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_14244.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_14244));
}

void matrix_mul_thread::thread_tmp_5_275_cast_fu_13506_p1() {
    tmp_5_275_cast_fu_13506_p1 = esl_zext<32,17>(tmp_5_275_fu_13501_p2.read());
}

void matrix_mul_thread::thread_tmp_5_275_fu_13501_p2() {
    tmp_5_275_fu_13501_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_14370.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_14370));
}

void matrix_mul_thread::thread_tmp_5_276_cast_fu_13516_p1() {
    tmp_5_276_cast_fu_13516_p1 = esl_zext<32,17>(tmp_5_276_fu_13511_p2.read());
}

void matrix_mul_thread::thread_tmp_5_276_fu_13511_p2() {
    tmp_5_276_fu_13511_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_1449C.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_1449C));
}

void matrix_mul_thread::thread_tmp_5_277_cast_fu_13526_p1() {
    tmp_5_277_cast_fu_13526_p1 = esl_zext<32,17>(tmp_5_277_fu_13521_p2.read());
}

void matrix_mul_thread::thread_tmp_5_277_fu_13521_p2() {
    tmp_5_277_fu_13521_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_145C8.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_145C8));
}

void matrix_mul_thread::thread_tmp_5_278_cast_fu_13536_p1() {
    tmp_5_278_cast_fu_13536_p1 = esl_zext<32,17>(tmp_5_278_fu_13531_p2.read());
}

void matrix_mul_thread::thread_tmp_5_278_fu_13531_p2() {
    tmp_5_278_fu_13531_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_146F4.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_146F4));
}

void matrix_mul_thread::thread_tmp_5_279_cast_fu_13551_p1() {
    tmp_5_279_cast_fu_13551_p1 = esl_zext<32,17>(tmp_5_279_fu_13546_p2.read());
}

void matrix_mul_thread::thread_tmp_5_279_fu_13546_p2() {
    tmp_5_279_fu_13546_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_14820.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_14820));
}

void matrix_mul_thread::thread_tmp_5_27_cast_fu_10430_p1() {
    tmp_5_27_cast_fu_10430_p1 = esl_zext<32,14>(tmp_5_27_fu_10425_p2.read());
}

void matrix_mul_thread::thread_tmp_5_27_fu_10425_p2() {
    tmp_5_27_fu_10425_p2 = (!j_cast314_cast2_reg_15645.read().is_01() || !ap_const_lv14_20D0.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast2_reg_15645.read()) + sc_biguint<14>(ap_const_lv14_20D0));
}

void matrix_mul_thread::thread_tmp_5_280_cast_fu_13561_p1() {
    tmp_5_280_cast_fu_13561_p1 = esl_zext<32,17>(tmp_5_280_fu_13556_p2.read());
}

void matrix_mul_thread::thread_tmp_5_280_fu_13556_p2() {
    tmp_5_280_fu_13556_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_1494C.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_1494C));
}

void matrix_mul_thread::thread_tmp_5_281_cast_fu_13587_p1() {
    tmp_5_281_cast_fu_13587_p1 = esl_zext<32,17>(tmp_5_281_fu_13582_p2.read());
}

void matrix_mul_thread::thread_tmp_5_281_fu_13582_p2() {
    tmp_5_281_fu_13582_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_14A78.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_14A78));
}

void matrix_mul_thread::thread_tmp_5_282_cast_fu_13597_p1() {
    tmp_5_282_cast_fu_13597_p1 = esl_zext<32,17>(tmp_5_282_fu_13592_p2.read());
}

void matrix_mul_thread::thread_tmp_5_282_fu_13592_p2() {
    tmp_5_282_fu_13592_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_14BA4.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_14BA4));
}

void matrix_mul_thread::thread_tmp_5_283_cast_fu_13607_p1() {
    tmp_5_283_cast_fu_13607_p1 = esl_zext<32,17>(tmp_5_283_fu_13602_p2.read());
}

void matrix_mul_thread::thread_tmp_5_283_fu_13602_p2() {
    tmp_5_283_fu_13602_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_14CD0.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_14CD0));
}

void matrix_mul_thread::thread_tmp_5_284_cast_fu_13617_p1() {
    tmp_5_284_cast_fu_13617_p1 = esl_zext<32,17>(tmp_5_284_fu_13612_p2.read());
}

void matrix_mul_thread::thread_tmp_5_284_fu_13612_p2() {
    tmp_5_284_fu_13612_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_14DFC.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_14DFC));
}

void matrix_mul_thread::thread_tmp_5_285_cast_fu_13627_p1() {
    tmp_5_285_cast_fu_13627_p1 = esl_zext<32,17>(tmp_5_285_fu_13622_p2.read());
}

void matrix_mul_thread::thread_tmp_5_285_fu_13622_p2() {
    tmp_5_285_fu_13622_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_14F28.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_14F28));
}

void matrix_mul_thread::thread_tmp_5_286_cast_fu_13637_p1() {
    tmp_5_286_cast_fu_13637_p1 = esl_zext<32,17>(tmp_5_286_fu_13632_p2.read());
}

void matrix_mul_thread::thread_tmp_5_286_fu_13632_p2() {
    tmp_5_286_fu_13632_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_15054.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_15054));
}

void matrix_mul_thread::thread_tmp_5_287_cast_fu_13647_p1() {
    tmp_5_287_cast_fu_13647_p1 = esl_zext<32,17>(tmp_5_287_fu_13642_p2.read());
}

void matrix_mul_thread::thread_tmp_5_287_fu_13642_p2() {
    tmp_5_287_fu_13642_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_15180.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_15180));
}

void matrix_mul_thread::thread_tmp_5_288_cast_fu_13657_p1() {
    tmp_5_288_cast_fu_13657_p1 = esl_zext<32,17>(tmp_5_288_fu_13652_p2.read());
}

void matrix_mul_thread::thread_tmp_5_288_fu_13652_p2() {
    tmp_5_288_fu_13652_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_152AC.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_152AC));
}

void matrix_mul_thread::thread_tmp_5_289_cast_fu_13672_p1() {
    tmp_5_289_cast_fu_13672_p1 = esl_zext<32,17>(tmp_5_289_fu_13667_p2.read());
}

void matrix_mul_thread::thread_tmp_5_289_fu_13667_p2() {
    tmp_5_289_fu_13667_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_153D8.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_153D8));
}

void matrix_mul_thread::thread_tmp_5_28_cast_fu_10440_p1() {
    tmp_5_28_cast_fu_10440_p1 = esl_zext<32,14>(tmp_5_28_fu_10435_p2.read());
}

void matrix_mul_thread::thread_tmp_5_28_fu_10435_p2() {
    tmp_5_28_fu_10435_p2 = (!j_cast314_cast2_reg_15645.read().is_01() || !ap_const_lv14_21FC.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast2_reg_15645.read()) + sc_biguint<14>(ap_const_lv14_21FC));
}

void matrix_mul_thread::thread_tmp_5_290_cast_fu_13682_p1() {
    tmp_5_290_cast_fu_13682_p1 = esl_zext<32,17>(tmp_5_290_fu_13677_p2.read());
}

void matrix_mul_thread::thread_tmp_5_290_fu_13677_p2() {
    tmp_5_290_fu_13677_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_15504.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_15504));
}

void matrix_mul_thread::thread_tmp_5_291_cast_fu_13692_p1() {
    tmp_5_291_cast_fu_13692_p1 = esl_zext<32,17>(tmp_5_291_fu_13687_p2.read());
}

void matrix_mul_thread::thread_tmp_5_291_fu_13687_p2() {
    tmp_5_291_fu_13687_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_15630.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_15630));
}

void matrix_mul_thread::thread_tmp_5_292_cast_fu_13702_p1() {
    tmp_5_292_cast_fu_13702_p1 = esl_zext<32,17>(tmp_5_292_fu_13697_p2.read());
}

void matrix_mul_thread::thread_tmp_5_292_fu_13697_p2() {
    tmp_5_292_fu_13697_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_1575C.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_1575C));
}

void matrix_mul_thread::thread_tmp_5_293_cast_fu_13712_p1() {
    tmp_5_293_cast_fu_13712_p1 = esl_zext<32,17>(tmp_5_293_fu_13707_p2.read());
}

void matrix_mul_thread::thread_tmp_5_293_fu_13707_p2() {
    tmp_5_293_fu_13707_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_15888.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_15888));
}

void matrix_mul_thread::thread_tmp_5_294_cast_fu_13722_p1() {
    tmp_5_294_cast_fu_13722_p1 = esl_zext<32,17>(tmp_5_294_fu_13717_p2.read());
}

void matrix_mul_thread::thread_tmp_5_294_fu_13717_p2() {
    tmp_5_294_fu_13717_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_159B4.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_159B4));
}

void matrix_mul_thread::thread_tmp_5_295_cast_fu_13732_p1() {
    tmp_5_295_cast_fu_13732_p1 = esl_zext<32,17>(tmp_5_295_fu_13727_p2.read());
}

void matrix_mul_thread::thread_tmp_5_295_fu_13727_p2() {
    tmp_5_295_fu_13727_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_15AE0.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_15AE0));
}

void matrix_mul_thread::thread_tmp_5_296_cast_fu_13742_p1() {
    tmp_5_296_cast_fu_13742_p1 = esl_zext<32,17>(tmp_5_296_fu_13737_p2.read());
}

void matrix_mul_thread::thread_tmp_5_296_fu_13737_p2() {
    tmp_5_296_fu_13737_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_15C0C.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_15C0C));
}

void matrix_mul_thread::thread_tmp_5_297_cast_fu_13752_p1() {
    tmp_5_297_cast_fu_13752_p1 = esl_zext<32,17>(tmp_5_297_fu_13747_p2.read());
}

void matrix_mul_thread::thread_tmp_5_297_fu_13747_p2() {
    tmp_5_297_fu_13747_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_15D38.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_15D38));
}

void matrix_mul_thread::thread_tmp_5_298_cast_fu_13762_p1() {
    tmp_5_298_cast_fu_13762_p1 = esl_zext<32,17>(tmp_5_298_fu_13757_p2.read());
}

void matrix_mul_thread::thread_tmp_5_298_fu_13757_p2() {
    tmp_5_298_fu_13757_p2 = (!j_cast1_reg_15407.read().is_01() || !ap_const_lv17_15E64.is_01())? sc_lv<17>(): (sc_bigint<17>(j_cast1_reg_15407.read()) + sc_biguint<17>(ap_const_lv17_15E64));
}

void matrix_mul_thread::thread_tmp_5_29_cast_fu_10450_p1() {
    tmp_5_29_cast_fu_10450_p1 = esl_zext<32,14>(tmp_5_29_fu_10445_p2.read());
}

void matrix_mul_thread::thread_tmp_5_29_fu_10445_p2() {
    tmp_5_29_fu_10445_p2 = (!j_cast314_cast2_reg_15645.read().is_01() || !ap_const_lv14_2328.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast2_reg_15645.read()) + sc_biguint<14>(ap_const_lv14_2328));
}

void matrix_mul_thread::thread_tmp_5_2_cast_fu_10123_p1() {
    tmp_5_2_cast_fu_10123_p1 = esl_zext<32,10>(tmp_5_2_reg_15806.read());
}

void matrix_mul_thread::thread_tmp_5_2_fu_10111_p2() {
    tmp_5_2_fu_10111_p2 = (!j_cast8_fu_10079_p1.read().is_01() || !ap_const_lv10_258.is_01())? sc_lv<10>(): (sc_bigint<10>(j_cast8_fu_10079_p1.read()) + sc_biguint<10>(ap_const_lv10_258));
}

void matrix_mul_thread::thread_tmp_5_30_cast_fu_10460_p1() {
    tmp_5_30_cast_fu_10460_p1 = esl_zext<32,14>(tmp_5_30_fu_10455_p2.read());
}

void matrix_mul_thread::thread_tmp_5_30_fu_10455_p2() {
    tmp_5_30_fu_10455_p2 = (!j_cast314_cast2_reg_15645.read().is_01() || !ap_const_lv14_2454.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast2_reg_15645.read()) + sc_biguint<14>(ap_const_lv14_2454));
}

void matrix_mul_thread::thread_tmp_5_31_cast_fu_10470_p1() {
    tmp_5_31_cast_fu_10470_p1 = esl_zext<32,14>(tmp_5_31_fu_10465_p2.read());
}

void matrix_mul_thread::thread_tmp_5_31_fu_10465_p2() {
    tmp_5_31_fu_10465_p2 = (!j_cast314_cast2_reg_15645.read().is_01() || !ap_const_lv14_2580.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast2_reg_15645.read()) + sc_biguint<14>(ap_const_lv14_2580));
}

void matrix_mul_thread::thread_tmp_5_32_cast_fu_10480_p1() {
    tmp_5_32_cast_fu_10480_p1 = esl_zext<32,14>(tmp_5_32_fu_10475_p2.read());
}

void matrix_mul_thread::thread_tmp_5_32_fu_10475_p2() {
    tmp_5_32_fu_10475_p2 = (!j_cast314_cast2_reg_15645.read().is_01() || !ap_const_lv14_26AC.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast2_reg_15645.read()) + sc_biguint<14>(ap_const_lv14_26AC));
}

void matrix_mul_thread::thread_tmp_5_33_cast_fu_10490_p1() {
    tmp_5_33_cast_fu_10490_p1 = esl_zext<32,14>(tmp_5_33_fu_10485_p2.read());
}

void matrix_mul_thread::thread_tmp_5_33_fu_10485_p2() {
    tmp_5_33_fu_10485_p2 = (!j_cast314_cast2_reg_15645.read().is_01() || !ap_const_lv14_27D8.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast2_reg_15645.read()) + sc_biguint<14>(ap_const_lv14_27D8));
}

void matrix_mul_thread::thread_tmp_5_34_cast_fu_10500_p1() {
    tmp_5_34_cast_fu_10500_p1 = esl_zext<32,14>(tmp_5_34_fu_10495_p2.read());
}

void matrix_mul_thread::thread_tmp_5_34_fu_10495_p2() {
    tmp_5_34_fu_10495_p2 = (!j_cast314_cast2_reg_15645.read().is_01() || !ap_const_lv14_2904.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast2_reg_15645.read()) + sc_biguint<14>(ap_const_lv14_2904));
}

void matrix_mul_thread::thread_tmp_5_35_cast_fu_10510_p1() {
    tmp_5_35_cast_fu_10510_p1 = esl_zext<32,14>(tmp_5_35_fu_10505_p2.read());
}

void matrix_mul_thread::thread_tmp_5_35_fu_10505_p2() {
    tmp_5_35_fu_10505_p2 = (!j_cast314_cast2_reg_15645.read().is_01() || !ap_const_lv14_2A30.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast2_reg_15645.read()) + sc_biguint<14>(ap_const_lv14_2A30));
}

void matrix_mul_thread::thread_tmp_5_36_cast_fu_10520_p1() {
    tmp_5_36_cast_fu_10520_p1 = esl_zext<32,14>(tmp_5_36_fu_10515_p2.read());
}

void matrix_mul_thread::thread_tmp_5_36_fu_10515_p2() {
    tmp_5_36_fu_10515_p2 = (!j_cast314_cast2_reg_15645.read().is_01() || !ap_const_lv14_2B5C.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast2_reg_15645.read()) + sc_biguint<14>(ap_const_lv14_2B5C));
}

void matrix_mul_thread::thread_tmp_5_37_cast_fu_10535_p1() {
    tmp_5_37_cast_fu_10535_p1 = esl_zext<32,14>(tmp_5_37_fu_10530_p2.read());
}

void matrix_mul_thread::thread_tmp_5_37_fu_10530_p2() {
    tmp_5_37_fu_10530_p2 = (!j_cast314_cast2_reg_15645.read().is_01() || !ap_const_lv14_2C88.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast2_reg_15645.read()) + sc_biguint<14>(ap_const_lv14_2C88));
}

void matrix_mul_thread::thread_tmp_5_38_cast_fu_10545_p1() {
    tmp_5_38_cast_fu_10545_p1 = esl_zext<32,14>(tmp_5_38_fu_10540_p2.read());
}

void matrix_mul_thread::thread_tmp_5_38_fu_10540_p2() {
    tmp_5_38_fu_10540_p2 = (!j_cast314_cast2_reg_15645.read().is_01() || !ap_const_lv14_2DB4.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast2_reg_15645.read()) + sc_biguint<14>(ap_const_lv14_2DB4));
}

void matrix_mul_thread::thread_tmp_5_39_cast_fu_10555_p1() {
    tmp_5_39_cast_fu_10555_p1 = esl_zext<32,14>(tmp_5_39_fu_10550_p2.read());
}

void matrix_mul_thread::thread_tmp_5_39_fu_10550_p2() {
    tmp_5_39_fu_10550_p2 = (!j_cast314_cast2_reg_15645.read().is_01() || !ap_const_lv14_2EE0.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast2_reg_15645.read()) + sc_biguint<14>(ap_const_lv14_2EE0));
}

void matrix_mul_thread::thread_tmp_5_3_cast_fu_10132_p1() {
    tmp_5_3_cast_fu_10132_p1 = esl_zext<32,11>(tmp_5_3_fu_10127_p2.read());
}

void matrix_mul_thread::thread_tmp_5_3_fu_10127_p2() {
    tmp_5_3_fu_10127_p2 = (!j_cast7_reg_15781.read().is_01() || !ap_const_lv11_384.is_01())? sc_lv<11>(): (sc_bigint<11>(j_cast7_reg_15781.read()) + sc_biguint<11>(ap_const_lv11_384));
}

void matrix_mul_thread::thread_tmp_5_40_cast_fu_10569_p0() {
    tmp_5_40_cast_fu_10569_p0 = esl_sext<14,13>(tmp_5_40_fu_10560_p2.read());
}

void matrix_mul_thread::thread_tmp_5_40_cast_fu_10569_p1() {
    tmp_5_40_cast_fu_10569_p1 = esl_zext<32,14>(tmp_5_40_cast_fu_10569_p0.read());
}

void matrix_mul_thread::thread_tmp_5_40_fu_10560_p2() {
    tmp_5_40_fu_10560_p2 = (!j_cast314_cast2_cast_reg_15679.read().is_01() || !ap_const_lv13_100C.is_01())? sc_lv<13>(): (sc_bigint<13>(j_cast314_cast2_cast_reg_15679.read()) + sc_biguint<13>(ap_const_lv13_100C));
}

void matrix_mul_thread::thread_tmp_5_41_cast_fu_10583_p0() {
    tmp_5_41_cast_fu_10583_p0 = esl_sext<14,13>(tmp_5_41_fu_10574_p2.read());
}

void matrix_mul_thread::thread_tmp_5_41_cast_fu_10583_p1() {
    tmp_5_41_cast_fu_10583_p1 = esl_zext<32,14>(tmp_5_41_cast_fu_10583_p0.read());
}

void matrix_mul_thread::thread_tmp_5_41_fu_10574_p2() {
    tmp_5_41_fu_10574_p2 = (!j_cast314_cast2_cast_reg_15679.read().is_01() || !ap_const_lv13_1138.is_01())? sc_lv<13>(): (sc_bigint<13>(j_cast314_cast2_cast_reg_15679.read()) + sc_biguint<13>(ap_const_lv13_1138));
}

void matrix_mul_thread::thread_tmp_5_42_cast_fu_10597_p0() {
    tmp_5_42_cast_fu_10597_p0 = esl_sext<14,13>(tmp_5_42_fu_10588_p2.read());
}

void matrix_mul_thread::thread_tmp_5_42_cast_fu_10597_p1() {
    tmp_5_42_cast_fu_10597_p1 = esl_zext<32,14>(tmp_5_42_cast_fu_10597_p0.read());
}

void matrix_mul_thread::thread_tmp_5_42_fu_10588_p2() {
    tmp_5_42_fu_10588_p2 = (!j_cast314_cast2_cast_reg_15679.read().is_01() || !ap_const_lv13_1264.is_01())? sc_lv<13>(): (sc_bigint<13>(j_cast314_cast2_cast_reg_15679.read()) + sc_biguint<13>(ap_const_lv13_1264));
}

void matrix_mul_thread::thread_tmp_5_43_cast_fu_10611_p0() {
    tmp_5_43_cast_fu_10611_p0 = esl_sext<14,13>(tmp_5_43_fu_10602_p2.read());
}

void matrix_mul_thread::thread_tmp_5_43_cast_fu_10611_p1() {
    tmp_5_43_cast_fu_10611_p1 = esl_zext<32,14>(tmp_5_43_cast_fu_10611_p0.read());
}

void matrix_mul_thread::thread_tmp_5_43_fu_10602_p2() {
    tmp_5_43_fu_10602_p2 = (!j_cast314_cast2_cast_reg_15679.read().is_01() || !ap_const_lv13_1390.is_01())? sc_lv<13>(): (sc_bigint<13>(j_cast314_cast2_cast_reg_15679.read()) + sc_biguint<13>(ap_const_lv13_1390));
}

void matrix_mul_thread::thread_tmp_5_44_cast_fu_10625_p0() {
    tmp_5_44_cast_fu_10625_p0 = esl_sext<14,13>(tmp_5_44_fu_10616_p2.read());
}

void matrix_mul_thread::thread_tmp_5_44_cast_fu_10625_p1() {
    tmp_5_44_cast_fu_10625_p1 = esl_zext<32,14>(tmp_5_44_cast_fu_10625_p0.read());
}

void matrix_mul_thread::thread_tmp_5_44_fu_10616_p2() {
    tmp_5_44_fu_10616_p2 = (!j_cast314_cast2_cast_reg_15679.read().is_01() || !ap_const_lv13_14BC.is_01())? sc_lv<13>(): (sc_bigint<13>(j_cast314_cast2_cast_reg_15679.read()) + sc_biguint<13>(ap_const_lv13_14BC));
}

void matrix_mul_thread::thread_tmp_5_45_cast_fu_10639_p0() {
    tmp_5_45_cast_fu_10639_p0 = esl_sext<14,13>(tmp_5_45_fu_10630_p2.read());
}

void matrix_mul_thread::thread_tmp_5_45_cast_fu_10639_p1() {
    tmp_5_45_cast_fu_10639_p1 = esl_zext<32,14>(tmp_5_45_cast_fu_10639_p0.read());
}

void matrix_mul_thread::thread_tmp_5_45_fu_10630_p2() {
    tmp_5_45_fu_10630_p2 = (!j_cast314_cast2_cast_reg_15679.read().is_01() || !ap_const_lv13_15E8.is_01())? sc_lv<13>(): (sc_bigint<13>(j_cast314_cast2_cast_reg_15679.read()) + sc_biguint<13>(ap_const_lv13_15E8));
}

void matrix_mul_thread::thread_tmp_5_46_cast_fu_10653_p0() {
    tmp_5_46_cast_fu_10653_p0 = esl_sext<14,13>(tmp_5_46_fu_10644_p2.read());
}

void matrix_mul_thread::thread_tmp_5_46_cast_fu_10653_p1() {
    tmp_5_46_cast_fu_10653_p1 = esl_zext<32,14>(tmp_5_46_cast_fu_10653_p0.read());
}

void matrix_mul_thread::thread_tmp_5_46_fu_10644_p2() {
    tmp_5_46_fu_10644_p2 = (!j_cast314_cast2_cast_reg_15679.read().is_01() || !ap_const_lv13_1714.is_01())? sc_lv<13>(): (sc_bigint<13>(j_cast314_cast2_cast_reg_15679.read()) + sc_biguint<13>(ap_const_lv13_1714));
}

void matrix_mul_thread::thread_tmp_5_47_cast_fu_10667_p0() {
    tmp_5_47_cast_fu_10667_p0 = esl_sext<14,12>(tmp_5_47_fu_10658_p2.read());
}

void matrix_mul_thread::thread_tmp_5_47_cast_fu_10667_p1() {
    tmp_5_47_cast_fu_10667_p1 = esl_zext<32,14>(tmp_5_47_cast_fu_10667_p0.read());
}

void matrix_mul_thread::thread_tmp_5_47_fu_10658_p2() {
    tmp_5_47_fu_10658_p2 = (!j_cast314_cast2_cast2_reg_15671.read().is_01() || !ap_const_lv12_840.is_01())? sc_lv<12>(): (sc_bigint<12>(j_cast314_cast2_cast2_reg_15671.read()) + sc_biguint<12>(ap_const_lv12_840));
}

void matrix_mul_thread::thread_tmp_5_48_cast_fu_10681_p0() {
    tmp_5_48_cast_fu_10681_p0 = esl_sext<14,12>(tmp_5_48_fu_10672_p2.read());
}

void matrix_mul_thread::thread_tmp_5_48_cast_fu_10681_p1() {
    tmp_5_48_cast_fu_10681_p1 = esl_zext<32,14>(tmp_5_48_cast_fu_10681_p0.read());
}

void matrix_mul_thread::thread_tmp_5_48_fu_10672_p2() {
    tmp_5_48_fu_10672_p2 = (!j_cast314_cast2_cast2_reg_15671.read().is_01() || !ap_const_lv12_96C.is_01())? sc_lv<12>(): (sc_bigint<12>(j_cast314_cast2_cast2_reg_15671.read()) + sc_biguint<12>(ap_const_lv12_96C));
}

void matrix_mul_thread::thread_tmp_5_49_cast_fu_10695_p0() {
    tmp_5_49_cast_fu_10695_p0 = esl_sext<14,12>(tmp_5_49_fu_10686_p2.read());
}

void matrix_mul_thread::thread_tmp_5_49_cast_fu_10695_p1() {
    tmp_5_49_cast_fu_10695_p1 = esl_zext<32,14>(tmp_5_49_cast_fu_10695_p0.read());
}

void matrix_mul_thread::thread_tmp_5_49_fu_10686_p2() {
    tmp_5_49_fu_10686_p2 = (!j_cast314_cast2_cast2_reg_15671.read().is_01() || !ap_const_lv12_A98.is_01())? sc_lv<12>(): (sc_bigint<12>(j_cast314_cast2_cast2_reg_15671.read()) + sc_biguint<12>(ap_const_lv12_A98));
}

void matrix_mul_thread::thread_tmp_5_4_cast_fu_10142_p1() {
    tmp_5_4_cast_fu_10142_p1 = esl_zext<32,11>(tmp_5_4_fu_10137_p2.read());
}

void matrix_mul_thread::thread_tmp_5_4_fu_10137_p2() {
    tmp_5_4_fu_10137_p2 = (!j_cast7_reg_15781.read().is_01() || !ap_const_lv11_4B0.is_01())? sc_lv<11>(): (sc_bigint<11>(j_cast7_reg_15781.read()) + sc_biguint<11>(ap_const_lv11_4B0));
}

void matrix_mul_thread::thread_tmp_5_50_cast_fu_10709_p0() {
    tmp_5_50_cast_fu_10709_p0 = esl_sext<14,12>(tmp_5_50_fu_10700_p2.read());
}

void matrix_mul_thread::thread_tmp_5_50_cast_fu_10709_p1() {
    tmp_5_50_cast_fu_10709_p1 = esl_zext<32,14>(tmp_5_50_cast_fu_10709_p0.read());
}

void matrix_mul_thread::thread_tmp_5_50_fu_10700_p2() {
    tmp_5_50_fu_10700_p2 = (!j_cast314_cast2_cast2_reg_15671.read().is_01() || !ap_const_lv12_BC4.is_01())? sc_lv<12>(): (sc_bigint<12>(j_cast314_cast2_cast2_reg_15671.read()) + sc_biguint<12>(ap_const_lv12_BC4));
}

void matrix_mul_thread::thread_tmp_5_51_cast_fu_10723_p0() {
    tmp_5_51_cast_fu_10723_p0 = esl_sext<14,11>(tmp_5_51_fu_10714_p2.read());
}

void matrix_mul_thread::thread_tmp_5_51_cast_fu_10723_p1() {
    tmp_5_51_cast_fu_10723_p1 = esl_zext<32,14>(tmp_5_51_cast_fu_10723_p0.read());
}

void matrix_mul_thread::thread_tmp_5_51_fu_10714_p2() {
    tmp_5_51_fu_10714_p2 = (!j_cast314_cast2_cast1_reg_15663.read().is_01() || !ap_const_lv11_4F0.is_01())? sc_lv<11>(): (sc_bigint<11>(j_cast314_cast2_cast1_reg_15663.read()) + sc_biguint<11>(ap_const_lv11_4F0));
}

void matrix_mul_thread::thread_tmp_5_52_cast_fu_10737_p0() {
    tmp_5_52_cast_fu_10737_p0 = esl_sext<14,10>(tmp_5_52_fu_10728_p2.read());
}

void matrix_mul_thread::thread_tmp_5_52_cast_fu_10737_p1() {
    tmp_5_52_cast_fu_10737_p1 = esl_zext<32,14>(tmp_5_52_cast_fu_10737_p0.read());
}

void matrix_mul_thread::thread_tmp_5_52_fu_10728_p2() {
    tmp_5_52_fu_10728_p2 = (!j_cast314_cast1_cast1_reg_15624.read().is_01() || !ap_const_lv10_21C.is_01())? sc_lv<10>(): (sc_bigint<10>(j_cast314_cast1_cast1_reg_15624.read()) + sc_biguint<10>(ap_const_lv10_21C));
}

void matrix_mul_thread::thread_tmp_5_53_cast_fu_10747_p1() {
    tmp_5_53_cast_fu_10747_p1 = esl_zext<32,15>(tmp_5_53_fu_10742_p2.read());
}

void matrix_mul_thread::thread_tmp_5_53_fu_10742_p2() {
    tmp_5_53_fu_10742_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_3F48.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_3F48));
}

void matrix_mul_thread::thread_tmp_5_54_cast_fu_10757_p1() {
    tmp_5_54_cast_fu_10757_p1 = esl_zext<32,15>(tmp_5_54_fu_10752_p2.read());
}

void matrix_mul_thread::thread_tmp_5_54_fu_10752_p2() {
    tmp_5_54_fu_10752_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_4074.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_4074));
}

void matrix_mul_thread::thread_tmp_5_55_cast_fu_10772_p1() {
    tmp_5_55_cast_fu_10772_p1 = esl_zext<32,15>(tmp_5_55_fu_10767_p2.read());
}

void matrix_mul_thread::thread_tmp_5_55_fu_10767_p2() {
    tmp_5_55_fu_10767_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_41A0.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_41A0));
}

void matrix_mul_thread::thread_tmp_5_56_cast_fu_10782_p1() {
    tmp_5_56_cast_fu_10782_p1 = esl_zext<32,15>(tmp_5_56_fu_10777_p2.read());
}

void matrix_mul_thread::thread_tmp_5_56_fu_10777_p2() {
    tmp_5_56_fu_10777_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_42CC.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_42CC));
}

void matrix_mul_thread::thread_tmp_5_57_cast_fu_10808_p1() {
    tmp_5_57_cast_fu_10808_p1 = esl_zext<32,15>(tmp_5_57_fu_10803_p2.read());
}

void matrix_mul_thread::thread_tmp_5_57_fu_10803_p2() {
    tmp_5_57_fu_10803_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_43F8.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_43F8));
}

void matrix_mul_thread::thread_tmp_5_58_cast_fu_10818_p1() {
    tmp_5_58_cast_fu_10818_p1 = esl_zext<32,15>(tmp_5_58_fu_10813_p2.read());
}

void matrix_mul_thread::thread_tmp_5_58_fu_10813_p2() {
    tmp_5_58_fu_10813_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_4524.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_4524));
}

void matrix_mul_thread::thread_tmp_5_59_cast_fu_10828_p1() {
    tmp_5_59_cast_fu_10828_p1 = esl_zext<32,15>(tmp_5_59_fu_10823_p2.read());
}

void matrix_mul_thread::thread_tmp_5_59_fu_10823_p2() {
    tmp_5_59_fu_10823_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_4650.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_4650));
}

void matrix_mul_thread::thread_tmp_5_5_cast_fu_10152_p1() {
    tmp_5_5_cast_fu_10152_p1 = esl_zext<32,11>(tmp_5_5_fu_10147_p2.read());
}

void matrix_mul_thread::thread_tmp_5_5_fu_10147_p2() {
    tmp_5_5_fu_10147_p2 = (!j_cast7_reg_15781.read().is_01() || !ap_const_lv11_5DC.is_01())? sc_lv<11>(): (sc_bigint<11>(j_cast7_reg_15781.read()) + sc_biguint<11>(ap_const_lv11_5DC));
}

void matrix_mul_thread::thread_tmp_5_60_cast_fu_10838_p1() {
    tmp_5_60_cast_fu_10838_p1 = esl_zext<32,15>(tmp_5_60_fu_10833_p2.read());
}

void matrix_mul_thread::thread_tmp_5_60_fu_10833_p2() {
    tmp_5_60_fu_10833_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_477C.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_477C));
}

void matrix_mul_thread::thread_tmp_5_61_cast_fu_10848_p1() {
    tmp_5_61_cast_fu_10848_p1 = esl_zext<32,15>(tmp_5_61_fu_10843_p2.read());
}

void matrix_mul_thread::thread_tmp_5_61_fu_10843_p2() {
    tmp_5_61_fu_10843_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_48A8.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_48A8));
}

void matrix_mul_thread::thread_tmp_5_62_cast_fu_10858_p1() {
    tmp_5_62_cast_fu_10858_p1 = esl_zext<32,15>(tmp_5_62_fu_10853_p2.read());
}

void matrix_mul_thread::thread_tmp_5_62_fu_10853_p2() {
    tmp_5_62_fu_10853_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_49D4.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_49D4));
}

void matrix_mul_thread::thread_tmp_5_63_cast_fu_10873_p1() {
    tmp_5_63_cast_fu_10873_p1 = esl_zext<32,15>(tmp_5_63_fu_10868_p2.read());
}

void matrix_mul_thread::thread_tmp_5_63_fu_10868_p2() {
    tmp_5_63_fu_10868_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_4B00.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_4B00));
}

void matrix_mul_thread::thread_tmp_5_64_cast_fu_10883_p1() {
    tmp_5_64_cast_fu_10883_p1 = esl_zext<32,15>(tmp_5_64_fu_10878_p2.read());
}

void matrix_mul_thread::thread_tmp_5_64_fu_10878_p2() {
    tmp_5_64_fu_10878_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_4C2C.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_4C2C));
}

void matrix_mul_thread::thread_tmp_5_65_cast_fu_10893_p1() {
    tmp_5_65_cast_fu_10893_p1 = esl_zext<32,15>(tmp_5_65_fu_10888_p2.read());
}

void matrix_mul_thread::thread_tmp_5_65_fu_10888_p2() {
    tmp_5_65_fu_10888_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_4D58.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_4D58));
}

void matrix_mul_thread::thread_tmp_5_66_cast_fu_10903_p1() {
    tmp_5_66_cast_fu_10903_p1 = esl_zext<32,15>(tmp_5_66_fu_10898_p2.read());
}

void matrix_mul_thread::thread_tmp_5_66_fu_10898_p2() {
    tmp_5_66_fu_10898_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_4E84.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_4E84));
}

void matrix_mul_thread::thread_tmp_5_67_cast_fu_10913_p1() {
    tmp_5_67_cast_fu_10913_p1 = esl_zext<32,15>(tmp_5_67_fu_10908_p2.read());
}

void matrix_mul_thread::thread_tmp_5_67_fu_10908_p2() {
    tmp_5_67_fu_10908_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_4FB0.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_4FB0));
}

void matrix_mul_thread::thread_tmp_5_68_cast_fu_10923_p1() {
    tmp_5_68_cast_fu_10923_p1 = esl_zext<32,15>(tmp_5_68_fu_10918_p2.read());
}

void matrix_mul_thread::thread_tmp_5_68_fu_10918_p2() {
    tmp_5_68_fu_10918_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_50DC.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_50DC));
}

void matrix_mul_thread::thread_tmp_5_69_cast_fu_10933_p1() {
    tmp_5_69_cast_fu_10933_p1 = esl_zext<32,15>(tmp_5_69_fu_10928_p2.read());
}

void matrix_mul_thread::thread_tmp_5_69_fu_10928_p2() {
    tmp_5_69_fu_10928_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_5208.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_5208));
}

void matrix_mul_thread::thread_tmp_5_6_cast_fu_10162_p1() {
    tmp_5_6_cast_fu_10162_p1 = esl_zext<32,12>(tmp_5_6_fu_10157_p2.read());
}

void matrix_mul_thread::thread_tmp_5_6_fu_10157_p2() {
    tmp_5_6_fu_10157_p2 = (!j_cast6_reg_15762.read().is_01() || !ap_const_lv12_708.is_01())? sc_lv<12>(): (sc_bigint<12>(j_cast6_reg_15762.read()) + sc_biguint<12>(ap_const_lv12_708));
}

void matrix_mul_thread::thread_tmp_5_70_cast_fu_10943_p1() {
    tmp_5_70_cast_fu_10943_p1 = esl_zext<32,15>(tmp_5_70_fu_10938_p2.read());
}

void matrix_mul_thread::thread_tmp_5_70_fu_10938_p2() {
    tmp_5_70_fu_10938_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_5334.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_5334));
}

void matrix_mul_thread::thread_tmp_5_71_cast_fu_10953_p1() {
    tmp_5_71_cast_fu_10953_p1 = esl_zext<32,15>(tmp_5_71_fu_10948_p2.read());
}

void matrix_mul_thread::thread_tmp_5_71_fu_10948_p2() {
    tmp_5_71_fu_10948_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_5460.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_5460));
}

void matrix_mul_thread::thread_tmp_5_72_cast_fu_10963_p1() {
    tmp_5_72_cast_fu_10963_p1 = esl_zext<32,15>(tmp_5_72_fu_10958_p2.read());
}

void matrix_mul_thread::thread_tmp_5_72_fu_10958_p2() {
    tmp_5_72_fu_10958_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_558C.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_558C));
}

void matrix_mul_thread::thread_tmp_5_73_cast_fu_10978_p1() {
    tmp_5_73_cast_fu_10978_p1 = esl_zext<32,15>(tmp_5_73_fu_10973_p2.read());
}

void matrix_mul_thread::thread_tmp_5_73_fu_10973_p2() {
    tmp_5_73_fu_10973_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_56B8.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_56B8));
}

void matrix_mul_thread::thread_tmp_5_74_cast_fu_10988_p1() {
    tmp_5_74_cast_fu_10988_p1 = esl_zext<32,15>(tmp_5_74_fu_10983_p2.read());
}

void matrix_mul_thread::thread_tmp_5_74_fu_10983_p2() {
    tmp_5_74_fu_10983_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_57E4.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_57E4));
}

void matrix_mul_thread::thread_tmp_5_75_cast_fu_11008_p1() {
    tmp_5_75_cast_fu_11008_p1 = esl_zext<32,15>(tmp_5_75_fu_11003_p2.read());
}

void matrix_mul_thread::thread_tmp_5_75_fu_11003_p2() {
    tmp_5_75_fu_11003_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_5910.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_5910));
}

void matrix_mul_thread::thread_tmp_5_76_cast_fu_11018_p1() {
    tmp_5_76_cast_fu_11018_p1 = esl_zext<32,15>(tmp_5_76_fu_11013_p2.read());
}

void matrix_mul_thread::thread_tmp_5_76_fu_11013_p2() {
    tmp_5_76_fu_11013_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_5A3C.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_5A3C));
}

void matrix_mul_thread::thread_tmp_5_77_cast_fu_11028_p1() {
    tmp_5_77_cast_fu_11028_p1 = esl_zext<32,15>(tmp_5_77_fu_11023_p2.read());
}

void matrix_mul_thread::thread_tmp_5_77_fu_11023_p2() {
    tmp_5_77_fu_11023_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_5B68.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_5B68));
}

void matrix_mul_thread::thread_tmp_5_78_cast_fu_11038_p1() {
    tmp_5_78_cast_fu_11038_p1 = esl_zext<32,15>(tmp_5_78_fu_11033_p2.read());
}

void matrix_mul_thread::thread_tmp_5_78_fu_11033_p2() {
    tmp_5_78_fu_11033_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_5C94.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_5C94));
}

void matrix_mul_thread::thread_tmp_5_79_cast_fu_11048_p1() {
    tmp_5_79_cast_fu_11048_p1 = esl_zext<32,15>(tmp_5_79_fu_11043_p2.read());
}

void matrix_mul_thread::thread_tmp_5_79_fu_11043_p2() {
    tmp_5_79_fu_11043_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_5DC0.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_5DC0));
}

void matrix_mul_thread::thread_tmp_5_7_cast_fu_10172_p1() {
    tmp_5_7_cast_fu_10172_p1 = esl_zext<32,12>(tmp_5_7_fu_10167_p2.read());
}

void matrix_mul_thread::thread_tmp_5_7_fu_10167_p2() {
    tmp_5_7_fu_10167_p2 = (!j_cast6_reg_15762.read().is_01() || !ap_const_lv12_834.is_01())? sc_lv<12>(): (sc_bigint<12>(j_cast6_reg_15762.read()) + sc_biguint<12>(ap_const_lv12_834));
}

void matrix_mul_thread::thread_tmp_5_80_cast_fu_11058_p1() {
    tmp_5_80_cast_fu_11058_p1 = esl_zext<32,15>(tmp_5_80_fu_11053_p2.read());
}

void matrix_mul_thread::thread_tmp_5_80_fu_11053_p2() {
    tmp_5_80_fu_11053_p2 = (!j_cast314_cast_reg_15690.read().is_01() || !ap_const_lv15_5EEC.is_01())? sc_lv<15>(): (sc_bigint<15>(j_cast314_cast_reg_15690.read()) + sc_biguint<15>(ap_const_lv15_5EEC));
}

void matrix_mul_thread::thread_tmp_5_81_cast_fu_11072_p0() {
    tmp_5_81_cast_fu_11072_p0 = esl_sext<15,14>(tmp_5_81_fu_11063_p2.read());
}

void matrix_mul_thread::thread_tmp_5_81_cast_fu_11072_p1() {
    tmp_5_81_cast_fu_11072_p1 = esl_zext<32,15>(tmp_5_81_cast_fu_11072_p0.read());
}

void matrix_mul_thread::thread_tmp_5_81_fu_11063_p2() {
    tmp_5_81_fu_11063_p2 = (!j_cast314_cast_cast_reg_15744.read().is_01() || !ap_const_lv14_2018.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast_cast_reg_15744.read()) + sc_biguint<14>(ap_const_lv14_2018));
}

void matrix_mul_thread::thread_tmp_5_82_cast_fu_11086_p0() {
    tmp_5_82_cast_fu_11086_p0 = esl_sext<15,14>(tmp_5_82_fu_11077_p2.read());
}

void matrix_mul_thread::thread_tmp_5_82_cast_fu_11086_p1() {
    tmp_5_82_cast_fu_11086_p1 = esl_zext<32,15>(tmp_5_82_cast_fu_11086_p0.read());
}

void matrix_mul_thread::thread_tmp_5_82_fu_11077_p2() {
    tmp_5_82_fu_11077_p2 = (!j_cast314_cast_cast_reg_15744.read().is_01() || !ap_const_lv14_2144.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast_cast_reg_15744.read()) + sc_biguint<14>(ap_const_lv14_2144));
}

void matrix_mul_thread::thread_tmp_5_83_cast_fu_11105_p0() {
    tmp_5_83_cast_fu_11105_p0 = esl_sext<15,14>(tmp_5_83_fu_11096_p2.read());
}

void matrix_mul_thread::thread_tmp_5_83_cast_fu_11105_p1() {
    tmp_5_83_cast_fu_11105_p1 = esl_zext<32,15>(tmp_5_83_cast_fu_11105_p0.read());
}

void matrix_mul_thread::thread_tmp_5_83_fu_11096_p2() {
    tmp_5_83_fu_11096_p2 = (!j_cast314_cast_cast_reg_15744.read().is_01() || !ap_const_lv14_2270.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast_cast_reg_15744.read()) + sc_biguint<14>(ap_const_lv14_2270));
}

void matrix_mul_thread::thread_tmp_5_84_cast_fu_11119_p0() {
    tmp_5_84_cast_fu_11119_p0 = esl_sext<15,14>(tmp_5_84_fu_11110_p2.read());
}

void matrix_mul_thread::thread_tmp_5_84_cast_fu_11119_p1() {
    tmp_5_84_cast_fu_11119_p1 = esl_zext<32,15>(tmp_5_84_cast_fu_11119_p0.read());
}

void matrix_mul_thread::thread_tmp_5_84_fu_11110_p2() {
    tmp_5_84_fu_11110_p2 = (!j_cast314_cast_cast_reg_15744.read().is_01() || !ap_const_lv14_239C.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast_cast_reg_15744.read()) + sc_biguint<14>(ap_const_lv14_239C));
}

void matrix_mul_thread::thread_tmp_5_85_cast_fu_11133_p0() {
    tmp_5_85_cast_fu_11133_p0 = esl_sext<15,14>(tmp_5_85_fu_11124_p2.read());
}

void matrix_mul_thread::thread_tmp_5_85_cast_fu_11133_p1() {
    tmp_5_85_cast_fu_11133_p1 = esl_zext<32,15>(tmp_5_85_cast_fu_11133_p0.read());
}

void matrix_mul_thread::thread_tmp_5_85_fu_11124_p2() {
    tmp_5_85_fu_11124_p2 = (!j_cast314_cast_cast_reg_15744.read().is_01() || !ap_const_lv14_24C8.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast_cast_reg_15744.read()) + sc_biguint<14>(ap_const_lv14_24C8));
}

void matrix_mul_thread::thread_tmp_5_86_cast_fu_11147_p0() {
    tmp_5_86_cast_fu_11147_p0 = esl_sext<15,14>(tmp_5_86_fu_11138_p2.read());
}

void matrix_mul_thread::thread_tmp_5_86_cast_fu_11147_p1() {
    tmp_5_86_cast_fu_11147_p1 = esl_zext<32,15>(tmp_5_86_cast_fu_11147_p0.read());
}

void matrix_mul_thread::thread_tmp_5_86_fu_11138_p2() {
    tmp_5_86_fu_11138_p2 = (!j_cast314_cast_cast_reg_15744.read().is_01() || !ap_const_lv14_25F4.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast_cast_reg_15744.read()) + sc_biguint<14>(ap_const_lv14_25F4));
}

void matrix_mul_thread::thread_tmp_5_87_cast_fu_11161_p0() {
    tmp_5_87_cast_fu_11161_p0 = esl_sext<15,14>(tmp_5_87_fu_11152_p2.read());
}

void matrix_mul_thread::thread_tmp_5_87_cast_fu_11161_p1() {
    tmp_5_87_cast_fu_11161_p1 = esl_zext<32,15>(tmp_5_87_cast_fu_11161_p0.read());
}

void matrix_mul_thread::thread_tmp_5_87_fu_11152_p2() {
    tmp_5_87_fu_11152_p2 = (!j_cast314_cast_cast_reg_15744.read().is_01() || !ap_const_lv14_2720.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast_cast_reg_15744.read()) + sc_biguint<14>(ap_const_lv14_2720));
}

void matrix_mul_thread::thread_tmp_5_88_cast_fu_11175_p0() {
    tmp_5_88_cast_fu_11175_p0 = esl_sext<15,14>(tmp_5_88_fu_11166_p2.read());
}

void matrix_mul_thread::thread_tmp_5_88_cast_fu_11175_p1() {
    tmp_5_88_cast_fu_11175_p1 = esl_zext<32,15>(tmp_5_88_cast_fu_11175_p0.read());
}

void matrix_mul_thread::thread_tmp_5_88_fu_11166_p2() {
    tmp_5_88_fu_11166_p2 = (!j_cast314_cast_cast_reg_15744.read().is_01() || !ap_const_lv14_284C.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast_cast_reg_15744.read()) + sc_biguint<14>(ap_const_lv14_284C));
}

void matrix_mul_thread::thread_tmp_5_89_cast_fu_11189_p0() {
    tmp_5_89_cast_fu_11189_p0 = esl_sext<15,14>(tmp_5_89_fu_11180_p2.read());
}

void matrix_mul_thread::thread_tmp_5_89_cast_fu_11189_p1() {
    tmp_5_89_cast_fu_11189_p1 = esl_zext<32,15>(tmp_5_89_cast_fu_11189_p0.read());
}

void matrix_mul_thread::thread_tmp_5_89_fu_11180_p2() {
    tmp_5_89_fu_11180_p2 = (!j_cast314_cast_cast_reg_15744.read().is_01() || !ap_const_lv14_2978.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast_cast_reg_15744.read()) + sc_biguint<14>(ap_const_lv14_2978));
}

void matrix_mul_thread::thread_tmp_5_8_cast_fu_10182_p1() {
    tmp_5_8_cast_fu_10182_p1 = esl_zext<32,12>(tmp_5_8_fu_10177_p2.read());
}

void matrix_mul_thread::thread_tmp_5_8_fu_10177_p2() {
    tmp_5_8_fu_10177_p2 = (!j_cast6_reg_15762.read().is_01() || !ap_const_lv12_960.is_01())? sc_lv<12>(): (sc_bigint<12>(j_cast6_reg_15762.read()) + sc_biguint<12>(ap_const_lv12_960));
}

void matrix_mul_thread::thread_tmp_5_90_cast_fu_11203_p0() {
    tmp_5_90_cast_fu_11203_p0 = esl_sext<15,14>(tmp_5_90_fu_11194_p2.read());
}

void matrix_mul_thread::thread_tmp_5_90_cast_fu_11203_p1() {
    tmp_5_90_cast_fu_11203_p1 = esl_zext<32,15>(tmp_5_90_cast_fu_11203_p0.read());
}

void matrix_mul_thread::thread_tmp_5_90_fu_11194_p2() {
    tmp_5_90_fu_11194_p2 = (!j_cast314_cast_cast_reg_15744.read().is_01() || !ap_const_lv14_2AA4.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast_cast_reg_15744.read()) + sc_biguint<14>(ap_const_lv14_2AA4));
}

void matrix_mul_thread::thread_tmp_5_91_cast_fu_11217_p0() {
    tmp_5_91_cast_fu_11217_p0 = esl_sext<15,14>(tmp_5_91_fu_11208_p2.read());
}

void matrix_mul_thread::thread_tmp_5_91_cast_fu_11217_p1() {
    tmp_5_91_cast_fu_11217_p1 = esl_zext<32,15>(tmp_5_91_cast_fu_11217_p0.read());
}

void matrix_mul_thread::thread_tmp_5_91_fu_11208_p2() {
    tmp_5_91_fu_11208_p2 = (!j_cast314_cast_cast_reg_15744.read().is_01() || !ap_const_lv14_2BD0.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast_cast_reg_15744.read()) + sc_biguint<14>(ap_const_lv14_2BD0));
}

void matrix_mul_thread::thread_tmp_5_92_cast_fu_11231_p0() {
    tmp_5_92_cast_fu_11231_p0 = esl_sext<15,14>(tmp_5_92_fu_11222_p2.read());
}

void matrix_mul_thread::thread_tmp_5_92_cast_fu_11231_p1() {
    tmp_5_92_cast_fu_11231_p1 = esl_zext<32,15>(tmp_5_92_cast_fu_11231_p0.read());
}

void matrix_mul_thread::thread_tmp_5_92_fu_11222_p2() {
    tmp_5_92_fu_11222_p2 = (!j_cast314_cast_cast_reg_15744.read().is_01() || !ap_const_lv14_2CFC.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast_cast_reg_15744.read()) + sc_biguint<14>(ap_const_lv14_2CFC));
}

void matrix_mul_thread::thread_tmp_5_93_cast_fu_11250_p0() {
    tmp_5_93_cast_fu_11250_p0 = esl_sext<15,14>(tmp_5_93_fu_11241_p2.read());
}

void matrix_mul_thread::thread_tmp_5_93_cast_fu_11250_p1() {
    tmp_5_93_cast_fu_11250_p1 = esl_zext<32,15>(tmp_5_93_cast_fu_11250_p0.read());
}

void matrix_mul_thread::thread_tmp_5_93_fu_11241_p2() {
    tmp_5_93_fu_11241_p2 = (!j_cast314_cast_cast_reg_15744.read().is_01() || !ap_const_lv14_2E28.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast_cast_reg_15744.read()) + sc_biguint<14>(ap_const_lv14_2E28));
}

void matrix_mul_thread::thread_tmp_5_94_cast_fu_11264_p0() {
    tmp_5_94_cast_fu_11264_p0 = esl_sext<15,14>(tmp_5_94_fu_11255_p2.read());
}

void matrix_mul_thread::thread_tmp_5_94_cast_fu_11264_p1() {
    tmp_5_94_cast_fu_11264_p1 = esl_zext<32,15>(tmp_5_94_cast_fu_11264_p0.read());
}

void matrix_mul_thread::thread_tmp_5_94_fu_11255_p2() {
    tmp_5_94_fu_11255_p2 = (!j_cast314_cast_cast_reg_15744.read().is_01() || !ap_const_lv14_2F54.is_01())? sc_lv<14>(): (sc_bigint<14>(j_cast314_cast_cast_reg_15744.read()) + sc_biguint<14>(ap_const_lv14_2F54));
}

void matrix_mul_thread::thread_tmp_5_95_cast_fu_11287_p0() {
    tmp_5_95_cast_fu_11287_p0 = esl_sext<15,13>(tmp_5_95_fu_11278_p2.read());
}

void matrix_mul_thread::thread_tmp_5_95_cast_fu_11287_p1() {
    tmp_5_95_cast_fu_11287_p1 = esl_zext<32,15>(tmp_5_95_cast_fu_11287_p0.read());
}

void matrix_mul_thread::thread_tmp_5_95_fu_11278_p2() {
    tmp_5_95_fu_11278_p2 = (!j_cast314_cast_cast2_reg_15733.read().is_01() || !ap_const_lv13_1080.is_01())? sc_lv<13>(): (sc_bigint<13>(j_cast314_cast_cast2_reg_15733.read()) + sc_biguint<13>(ap_const_lv13_1080));
}

void matrix_mul_thread::thread_tmp_5_96_cast_fu_11301_p0() {
    tmp_5_96_cast_fu_11301_p0 = esl_sext<15,13>(tmp_5_96_fu_11292_p2.read());
}

void matrix_mul_thread::thread_tmp_5_96_cast_fu_11301_p1() {
    tmp_5_96_cast_fu_11301_p1 = esl_zext<32,15>(tmp_5_96_cast_fu_11301_p0.read());
}

void matrix_mul_thread::thread_tmp_5_96_fu_11292_p2() {
    tmp_5_96_fu_11292_p2 = (!j_cast314_cast_cast2_reg_15733.read().is_01() || !ap_const_lv13_11AC.is_01())? sc_lv<13>(): (sc_bigint<13>(j_cast314_cast_cast2_reg_15733.read()) + sc_biguint<13>(ap_const_lv13_11AC));
}

void matrix_mul_thread::thread_tmp_5_97_cast_fu_11319_p0() {
    tmp_5_97_cast_fu_11319_p0 = esl_sext<15,13>(tmp_5_97_fu_11310_p2.read());
}

void matrix_mul_thread::thread_tmp_5_97_cast_fu_11319_p1() {
    tmp_5_97_cast_fu_11319_p1 = esl_zext<32,15>(tmp_5_97_cast_fu_11319_p0.read());
}

void matrix_mul_thread::thread_tmp_5_97_fu_11310_p2() {
    tmp_5_97_fu_11310_p2 = (!j_cast314_cast_cast2_reg_15733.read().is_01() || !ap_const_lv13_12D8.is_01())? sc_lv<13>(): (sc_bigint<13>(j_cast314_cast_cast2_reg_15733.read()) + sc_biguint<13>(ap_const_lv13_12D8));
}

void matrix_mul_thread::thread_tmp_5_98_cast_fu_11333_p0() {
    tmp_5_98_cast_fu_11333_p0 = esl_sext<15,13>(tmp_5_98_fu_11324_p2.read());
}

void matrix_mul_thread::thread_tmp_5_98_cast_fu_11333_p1() {
    tmp_5_98_cast_fu_11333_p1 = esl_zext<32,15>(tmp_5_98_cast_fu_11333_p0.read());
}

void matrix_mul_thread::thread_tmp_5_98_fu_11324_p2() {
    tmp_5_98_fu_11324_p2 = (!j_cast314_cast_cast2_reg_15733.read().is_01() || !ap_const_lv13_1404.is_01())? sc_lv<13>(): (sc_bigint<13>(j_cast314_cast_cast2_reg_15733.read()) + sc_biguint<13>(ap_const_lv13_1404));
}

void matrix_mul_thread::thread_tmp_5_99_cast_fu_11347_p0() {
    tmp_5_99_cast_fu_11347_p0 = esl_sext<15,13>(tmp_5_99_fu_11338_p2.read());
}

void matrix_mul_thread::thread_tmp_5_99_cast_fu_11347_p1() {
    tmp_5_99_cast_fu_11347_p1 = esl_zext<32,15>(tmp_5_99_cast_fu_11347_p0.read());
}

void matrix_mul_thread::thread_tmp_5_99_fu_11338_p2() {
    tmp_5_99_fu_11338_p2 = (!j_cast314_cast_cast2_reg_15733.read().is_01() || !ap_const_lv13_1530.is_01())? sc_lv<13>(): (sc_bigint<13>(j_cast314_cast_cast2_reg_15733.read()) + sc_biguint<13>(ap_const_lv13_1530));
}

void matrix_mul_thread::thread_tmp_5_9_cast_fu_10192_p1() {
    tmp_5_9_cast_fu_10192_p1 = esl_zext<32,12>(tmp_5_9_fu_10187_p2.read());
}

void matrix_mul_thread::thread_tmp_5_9_fu_10187_p2() {
    tmp_5_9_fu_10187_p2 = (!j_cast6_reg_15762.read().is_01() || !ap_const_lv12_A8C.is_01())? sc_lv<12>(): (sc_bigint<12>(j_cast6_reg_15762.read()) + sc_biguint<12>(ap_const_lv12_A8C));
}

void matrix_mul_thread::thread_tmp_5_cast_fu_10202_p1() {
    tmp_5_cast_fu_10202_p1 = esl_zext<32,12>(tmp_5_s_fu_10197_p2.read());
}

void matrix_mul_thread::thread_tmp_5_s_fu_10197_p2() {
    tmp_5_s_fu_10197_p2 = (!j_cast6_reg_15762.read().is_01() || !ap_const_lv12_BB8.is_01())? sc_lv<12>(): (sc_bigint<12>(j_cast6_reg_15762.read()) + sc_biguint<12>(ap_const_lv12_BB8));
}

void matrix_mul_thread::thread_tmp_7_cast_fu_6701_p1() {
    tmp_7_cast_fu_6701_p1 = esl_zext<32,17>(phi_mul_reg_5961.read());
}

void matrix_mul_thread::thread_tmp_8_fu_6667_p2() {
    tmp_8_fu_6667_p2 = (!i_1_reg_5938.read().is_01() || !ap_const_lv17_15F8F.is_01())? sc_lv<1>(): (sc_biguint<17>(i_1_reg_5938.read()) < sc_biguint<17>(ap_const_lv17_15F8F));
}

void matrix_mul_thread::thread_tmp_s_fu_13836_p2() {
    tmp_s_fu_13836_p2 = (!i_4_reg_5996.read().is_01() || !ap_const_lv17_15F8F.is_01())? sc_lv<1>(): (sc_biguint<17>(i_4_reg_5996.read()) < sc_biguint<17>(ap_const_lv17_15F8F));
}

}

