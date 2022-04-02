/* 
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 *
 * Authors: Jonathan Boesser (jboesser@iis.ee.ethz.ch)
 */

#ifndef __HAL_ANALOG_EXG_H__
#define __HAL_ANALOG_EXG_H__

/*
 * Analog EXG HAL file for VivoSoC IP: EXG_CHANNEL_IP, EXG_SAR_IP, EXG_EIM_IP
 * Use this file for EXG IPs compliant to VivoSoC3
 *
 */


/*
 * EXG_CHANNEL_IP: EXG Analog Channels Cerebro
 */

// Write full register functions
// Enums
typedef enum {
	HAL_ANALOG_EXG_CHANNEL_0 = ARCHI_ANALOG_EXG_CH_0,
	HAL_ANALOG_EXG_CHANNEL_1,
	HAL_ANALOG_EXG_CHANNEL_2,
	HAL_ANALOG_EXG_CHANNEL_3,
	HAL_ANALOG_EXG_CHANNEL_4,
	HAL_ANALOG_EXG_CHANNEL_5,
	HAL_ANALOG_EXG_CHANNEL_6,
	HAL_ANALOG_EXG_CHANNEL_7,
	HAL_ANALOG_EXG_CHANNEL_8
} hal_analog_exg_channel_t;

static inline void hal_analog_exg_channel_enable_set(hal_analog_exg_channel_t channel, unsigned int value) {
	hal_analog_ip_write_reg(channel, EXG_CH_ENABLE, value & ((1<<1)-1));
}

static inline void hal_analog_exg_channel_gain_set(hal_analog_exg_channel_t channel, unsigned int value) {
	hal_analog_ip_write_reg(channel, EXG_CH_GAIN, value & ((1<<EXG_CH_GAIN_NBITS)-1));
}

static inline void hal_analog_exg_channel_deodac_set(hal_analog_exg_channel_t channel, unsigned int value) {
	hal_analog_ip_write_reg(channel, EXG_CH_DEODAC, value & ((1<<EXG_CH_DEODAC_NBITS)-1));
}

static inline void hal_analog_exg_channel_paodac_set(hal_analog_exg_channel_t channel, unsigned int value) {
	hal_analog_ip_write_reg(channel, EXG_CH_PAODAC, value & ((1<<(EXG_CH_PAODAC_BW_NBITS + EXG_CH_PAODAC_HPF_NBITS + EXG_CH_PAODAC_NBITS))-1));
}

// Write partial register functions

// TODO - only possible with shadow copies!!

// Read full register functions

// NOT POSSIBLE TO READ REGISTER OF THIS IP!!


/*
 * EXG_SAR_IP: SAR Cerebro
 */

// Write full register functions
// Enums
typedef enum {
	HAL_ANALOG_EXG_CLOCKING_CYCLE_0 = EXG_SAR_CC_0,
	HAL_ANALOG_EXG_CLOCKING_CYCLE_1,
	HAL_ANALOG_EXG_CLOCKING_CYCLE_2,
	HAL_ANALOG_EXG_CLOCKING_CYCLE_3,
	HAL_ANALOG_EXG_CLOCKING_CYCLE_4,
	HAL_ANALOG_EXG_CLOCKING_CYCLE_5,
	HAL_ANALOG_EXG_CLOCKING_CYCLE_6,
	HAL_ANALOG_EXG_CLOCKING_CYCLE_7,
	HAL_ANALOG_EXG_CLOCKING_CYCLE_8,
	HAL_ANALOG_EXG_CLOCKING_CYCLE_9,
	HAL_ANALOG_EXG_CLOCKING_CYCLE_10,
	HAL_ANALOG_EXG_CLOCKING_CYCLE_11,
	HAL_ANALOG_EXG_CLOCKING_CYCLE_12,
	HAL_ANALOG_EXG_CLOCKING_CYCLE_13,
	HAL_ANALOG_EXG_CLOCKING_CYCLE_14,
	HAL_ANALOG_EXG_CLOCKING_CYCLE_15,
	HAL_ANALOG_EXG_CLOCKING_CYCLE_16,
	HAL_ANALOG_EXG_CLOCKING_CYCLE_RESET,
} hal_analog_exg_clocking_cycle_t;

typedef enum {
	HAL_ANALOG_EXG_CIC_CHANNEL_0 = EXG_SAR_CIC_0,
	HAL_ANALOG_EXG_CIC_CHANNEL_1,
	HAL_ANALOG_EXG_CIC_CHANNEL_2,
	HAL_ANALOG_EXG_CIC_CHANNEL_3,
	HAL_ANALOG_EXG_CIC_CHANNEL_4,
	HAL_ANALOG_EXG_CIC_CHANNEL_5,
	HAL_ANALOG_EXG_CIC_CHANNEL_6,
	HAL_ANALOG_EXG_CIC_CHANNEL_7,
	HAL_ANALOG_EXG_CIC_CHANNEL_8
} hal_analog_exg_cic_channel_t;

static inline void hal_analog_exg_sar_cap_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_0, value & ((1<<EXG_ADC_CWR_0_NBITS)-1));
}

static inline void hal_analog_exg_sar_cap_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_1, value & ((1<<EXG_ADC_CWR_1_NBITS)-1));
}

static inline void hal_analog_exg_sar_cap_2_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_2, value & ((1<<EXG_ADC_CWR_2_NBITS)-1));
}

static inline void hal_analog_exg_sar_cap_3_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_3, value & ((1<<EXG_ADC_CWR_3_NBITS)-1));
}

static inline void hal_analog_exg_sar_cap_4_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_4, value & ((1<<EXG_ADC_CWR_4_NBITS)-1));
}

static inline void hal_analog_exg_sar_cap_5_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_5, value & ((1<<EXG_ADC_CWR_5_NBITS)-1));
}

static inline void hal_analog_exg_sar_cap_6_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_6, value & ((1<<EXG_ADC_CWR_6_NBITS)-1));
}

static inline void hal_analog_exg_sar_cap_7_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_7, value & ((1<<EXG_ADC_CWR_7_NBITS)-1));
}

static inline void hal_analog_exg_sar_cap_8_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_8, value & ((1<<EXG_ADC_CWR_8_NBITS)-1));
}

static inline void hal_analog_exg_sar_cap_9_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_9, value & ((1<<EXG_ADC_CWR_9_NBITS)-1));
}

static inline void hal_analog_exg_sar_cap_10_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_10, value & ((1<<EXG_ADC_CWR_10_NBITS)-1));
}

static inline void hal_analog_exg_sar_cap_11_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_11, value & ((1<<EXG_ADC_CWR_11_NBITS)-1));
}

static inline void hal_analog_exg_sar_cap_12_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_12, value & ((1<<EXG_ADC_CWR_12_NBITS)-1));
}

static inline void hal_analog_exg_sar_cap_13_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_13, value & ((1<<EXG_ADC_CWR_13_NBITS)-1));
}

static inline void hal_analog_exg_sar_cap_14_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_14, value & ((1<<EXG_ADC_CWR_14_NBITS)-1));
}

static inline void hal_analog_exg_sar_cap_15_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_15, value & ((1<<EXG_ADC_CWR_15_NBITS)-1));
}

static inline void hal_analog_exg_sar_cap_16_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_16, value & ((1<<EXG_ADC_CWR_16_NBITS)-1));
}

static inline void hal_analog_exg_sar_peturbation_cap_weight_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_SAR_PCWR, value & ((1<<EXG_SAR_PCWR_NBITS)-1));
}

static inline void hal_analog_exg_sar_offset_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_OSR, value & ((1<<EXG_ADC_OSR_NBITS)-1));
}

static inline void hal_analog_exg_mfcr_set(unsigned int value){
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_MFCR, value);
}

static inline void hal_analog_exg_asr_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_ASR, value);
}

static inline void hal_analog_exg_sgs_set(unsigned int value){
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_SAR_SGS, value);
}

static inline void hal_analog_exg_dsr_set(unsigned int value){
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_DSR, value);
}

static inline void hal_analog_exg_lcr_set(unsigned int value){
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_LCR, value);
}
// Write full SAR clocking cycles register
static inline void hal_analog_exg_sar_clocking_cycle_set(hal_analog_exg_clocking_cycle_t number, unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, number, value);
}
// Write full CIC register given ExG channel
static inline void hal_analog_exg_sar_cic_set(hal_analog_exg_cic_channel_t channel, unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_SAR_IP, channel, value);
}

// Write partial register functions
// Write reset of MFCR register
static inline void hal_analog_exg_fsm_breset_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_MFCR, value, 1<<EXG_ADC_MFCR_RESET_OFFSET);
}
// Write CycEn of clocking cycles register
static inline void hal_analog_exg_sar_clocking_cycle_enable_set(hal_analog_exg_clocking_cycle_t number, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_EXG_SAR_IP, number, value, 1<<EXG_SAR_CC_REG_CYC_EN_OFFSET);
}
// Write Num comparisons of clocking cycles register
static inline void hal_analog_exg_sar_clocking_cycle_num_comparisons_set(hal_analog_exg_clocking_cycle_t number, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_EXG_SAR_IP, number, value, ((1<<EXG_SAR_CC_REG_NUM_COMP_NBITS)-1)<<EXG_SAR_CC_REG_NUM_COMP_OFFSET);
}
// Write Settling cycles of clocking cycles register
static inline void hal_analog_exg_sar_clocking_cycle_settling_cycles_set(hal_analog_exg_clocking_cycle_t number, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_EXG_SAR_IP, number, value, ((1<<EXG_SAR_CC_REG_SETTLING_CYC_NBITS)-1)<<EXG_SAR_CC_REG_SETTLING_CYC_OFFSET);
}
// Write Settling cycles of reset cycle register
static inline void hal_analog_exg_sar_reset_cycle_settling_cycles_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_EXG_SAR_IP, EXG_SAR_RC, value, ((1<<(EXG_SAR_CC_REG_SETTLING_CYC_NBITS + EXG_SAR_CC_REG_NUM_COMP_NBITS))-1)<<EXG_SAR_CC_REG_NUM_COMP_OFFSET);
}
// Write Cardinal Cap Num of clocking cycles register
static inline void hal_analog_exg_sar_clocking_cycle_cap_num_set(hal_analog_exg_clocking_cycle_t number, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_EXG_SAR_IP, number, value, ((1<<EXG_SAR_CC_REG_CAP_NO_NBITS)-1)<<EXG_SAR_CC_REG_CAP_NO_OFFSET);
}
// Write Vref bias current of clocking cycles register
static inline void hal_analog_exg_sar_clocking_cycle_vref_bias_set(hal_analog_exg_clocking_cycle_t number, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_EXG_SAR_IP, number, value, ((1<<EXG_SAR_CC_REG_VREF_BIAS_CURR_NBITS)-1)<<EXG_SAR_CC_REG_VREF_BIAS_CURR_OFFSET);
}
// Write Vcm bias current of clocking cycles register
static inline void hal_analog_exg_sar_clocking_cycle_vcm_bias_set(hal_analog_exg_clocking_cycle_t number, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_EXG_SAR_IP, number, value, ((1<<PPG_SAR_CC_REG_CM_BIAS_CURR_NBITS)-1)<<EXG_SAR_CC_REG_CM_BIAS_CURR_OFFSET);
}
// Write FrontBuffer En of clocking cycles register
static inline void hal_analog_exg_sar_clocking_cycle_fb_bias_en_set(hal_analog_exg_clocking_cycle_t number, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_EXG_SAR_IP, number, value, 1<<EXG_SAR_CC_REG_FRONT_BUFFER_EN_OFFSET);
}
// Write FrontBufferBias of clocking cycles register
static inline void hal_analog_exg_sar_clocking_cycle_fb_bias_set(hal_analog_exg_clocking_cycle_t number, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_EXG_SAR_IP, number, value, ((1<<PPG_SAR_CC_REG_CM_FRONT_BUFFER_BIAS_NBITS)-1)<<EXG_SAR_CC_REG_CM_FRONT_BUFFER_BIAS_OFFSET);
}
// Write k1 of CIC register
static inline void hal_analog_exg_sar_cic_k1_set(hal_analog_exg_cic_channel_t channel, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_EXG_SAR_IP, channel, value, ((1<<EXG_SAR_CIC_REG_K_1_NBITS)-1)<<EXG_SAR_CIC_REG_K_1_OFFSET);
}
// Write k2 of CIC register
static inline void hal_analog_exg_sar_cic_k2_set(hal_analog_exg_cic_channel_t channel, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_EXG_SAR_IP, channel, value, ((1<<EXG_SAR_CIC_REG_K_2_NBITS)-1)<<EXG_SAR_CIC_REG_K_2_OFFSET);
}
// Write mode of CIC register
static inline void hal_analog_exg_sar_cic_mode_set(hal_analog_exg_cic_channel_t channel, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_EXG_SAR_IP, channel, value, ((1<<EXG_SAR_CIC_REG_MODE_NBITS)-1)<<EXG_SAR_CIC_REG_MODE_OFFSET);
}
// Write trunk of CIC register
static inline void hal_analog_exg_sar_cic_trunk_set(hal_analog_exg_cic_channel_t channel, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_EXG_SAR_IP, channel, value, ((1<<EXG_SAR_CIC_REG_TRUNK_NBITS)-1)<<EXG_SAR_CIC_REG_TRUNK_OFFSET);
}
// Write bypass of CIC register
static inline void hal_analog_exg_sar_cic_bypass_set(hal_analog_exg_cic_channel_t channel, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_EXG_SAR_IP, channel, value, 1<<EXG_SAR_CIC_REG_BYPASS_OFFSET);
}

// Read full register functions
static inline unsigned int hal_analog_exg_sar_cap_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_0);
}

static inline unsigned int hal_analog_exg_sar_cap_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_1);
}

static inline unsigned int hal_analog_exg_sar_cap_2_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_2);
}

static inline unsigned int hal_analog_exg_sar_cap_3_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_3);
}

static inline unsigned int hal_analog_exg_sar_cap_4_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_4);
}

static inline unsigned int hal_analog_exg_sar_cap_5_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_5);
}

static inline unsigned int hal_analog_exg_sar_cap_6_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_6);
}

static inline unsigned int hal_analog_exg_sar_cap_7_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_7);
}

static inline unsigned int hal_analog_exg_sar_cap_8_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_8);
}

static inline unsigned int hal_analog_exg_sar_cap_9_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_9);
}

static inline unsigned int hal_analog_exg_sar_cap_10_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_10);
}

static inline unsigned int hal_analog_exg_sar_cap_11_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_11);
}

static inline unsigned int hal_analog_exg_sar_cap_12_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_12);
}

static inline unsigned int hal_analog_exg_sar_cap_13_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_13);
}

static inline unsigned int hal_analog_exg_sar_cap_14_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_14);
}

static inline unsigned int hal_analog_exg_sar_cap_15_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_15);
}

static inline unsigned int hal_analog_exg_sar_cap_16_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_CWR_16);
}

static inline unsigned int hal_analog_exg_sar_peturbation_cap_weight_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_SAR_PCWR);
}

static inline unsigned int hal_analog_exg_sar_offset_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_OSR);
}

static inline unsigned int hal_analog_exg_mfcr_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_MFCR);
}

static inline unsigned int hal_analog_exg_asr_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_ASR);
}

static inline unsigned int hal_analog_exg_sgs_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_SAR_SGS);
}

static inline unsigned int hal_analog_exg_dsr_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_DSR);
}

static inline unsigned int hal_analog_exg_lcr_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, EXG_ADC_LCR);
}
// Read full SAR clocking cycles register
static inline unsigned int hal_analog_exg_sar_clocking_cycle_get(hal_analog_exg_clocking_cycle_t number) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, number);
}
// Read full CIC register given ExG channel
static inline unsigned int hal_analog_exg_sar_cic_get(hal_analog_exg_cic_channel_t channel) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_EXG_SAR_IP, channel);
}


/*
 * EXG_EIM_IP: Electrode Impedance Measurement
 */

// Write full register functions
typedef enum {
	HAL_ANALOG_EXG_EIM_CHANNEL_0 = EXG_EIM_CS_SEL_CH_0,
	HAL_ANALOG_EXG_EIM_CHANNEL_1,
	HAL_ANALOG_EXG_EIM_CHANNEL_2,
	HAL_ANALOG_EXG_EIM_CHANNEL_3,
	HAL_ANALOG_EXG_EIM_CHANNEL_4,
	HAL_ANALOG_EXG_EIM_CHANNEL_5,
	HAL_ANALOG_EXG_EIM_CHANNEL_6,
	HAL_ANALOG_EXG_EIM_CHANNEL_7
} hal_analog_exg_eim_channel_t;

static inline void hal_analog_exg_eim_en_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_EIM_IP, EXG_EIM_IP_ENABLE, value);
}

static inline void hal_analog_exg_eim_h_res_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_EIM_IP, EXG_EIM_CON_H_RES, value);
}

static inline void hal_analog_exg_eim_l_res_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_EIM_IP, EXG_EIM_CON_L_RES, value);
}

static inline void hal_analog_exg_eim_cs_sel_ch_set(hal_analog_exg_eim_channel_t channel, unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_EIM_IP, channel, value);
}

static inline void hal_analog_exg_eim_neg_en_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_EIM_IP, EXG_EIM_EN_NEG, value);
}

static inline void hal_analog_exg_eim_pos_en_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_EIM_IP, EXG_EIM_EN_POS, value);
}

static inline void hal_analog_exg_eim_clk_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_EXG_EIM_IP, EXG_EIM_CLK_SET, value);
}

// Write partial register functions

// TODO - only possible with shadow copies!!

// Read full register functions

// NOT POSSIBLE TO READ REGISTER OF THIS IP!!


#else
#error HAL file for VivoSoC/ExG already included
#endif		// __HAL_ANALOG_EXG_H__
