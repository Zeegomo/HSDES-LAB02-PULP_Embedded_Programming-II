/* 
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 *
 * Authors: Jonathan Boesser (jboesser@iis.ee.ethz.ch)
 */

#ifndef __HAL_ANALOG_PPG_H__
#define __HAL_ANALOG_PPG_H__


/*
 * Analog PPG HAL file for VivoSoC IP: PPG_IP
 * Use this file for PPG IP compliant to VivoSoC3
 *
 */


/*
 * PPG_IP: TMA-O
 */

// Write full register functions
static inline void hal_analog_ppg_sar_cap_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_0, value & ((1<<PPG_ADC_CWR_0_NBITS)-1));
}

static inline void hal_analog_ppg_sar_cap_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_1, value & ((1<<PPG_ADC_CWR_1_NBITS)-1));
}

static inline void hal_analog_ppg_sar_cap_2_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_2, value & ((1<<PPG_ADC_CWR_2_NBITS)-1));
}

static inline void hal_analog_ppg_sar_cap_3_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_3, value & ((1<<PPG_ADC_CWR_3_NBITS)-1));
}

static inline void hal_analog_ppg_sar_cap_4_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_4, value & ((1<<PPG_ADC_CWR_4_NBITS)-1));
}

static inline void hal_analog_ppg_sar_cap_5_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_5, value & ((1<<PPG_ADC_CWR_5_NBITS)-1));
}

static inline void hal_analog_ppg_sar_cap_6_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_6, value & ((1<<PPG_ADC_CWR_6_NBITS)-1));
}

static inline void hal_analog_ppg_sar_cap_7_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_7, value & ((1<<PPG_ADC_CWR_7_NBITS)-1));
}

static inline void hal_analog_ppg_sar_cap_8_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_8, value & ((1<<PPG_ADC_CWR_8_NBITS)-1));
}

static inline void hal_analog_ppg_sar_cap_9_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_9, value & ((1<<PPG_ADC_CWR_9_NBITS)-1));
}

static inline void hal_analog_ppg_sar_cap_10_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_10, value & ((1<<PPG_ADC_CWR_10_NBITS)-1));
}

static inline void hal_analog_ppg_sar_cap_11_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_11, value & ((1<<PPG_ADC_CWR_11_NBITS)-1));
}

static inline void hal_analog_ppg_sar_cap_12_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_12, value & ((1<<PPG_ADC_CWR_12_NBITS)-1));
}

static inline void hal_analog_ppg_sar_cap_13_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_13, value & ((1<<PPG_ADC_CWR_13_NBITS)-1));
}

static inline void hal_analog_ppg_sar_cap_14_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_14, value & ((1<<PPG_ADC_CWR_14_NBITS)-1));
}

static inline void hal_analog_ppg_sar_cap_15_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_15, value & ((1<<PPG_ADC_CWR_15_NBITS)-1));
}

static inline void hal_analog_ppg_sar_cap_16_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_16, value & ((1<<PPG_ADC_CWR_16_NBITS)-1));
}

static inline void hal_analog_ppg_sar_peturbation_cap_weight_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_SAR_PCWR, value & ((1<<PPG_SAR_PCWR_NBITS)-1));
}

static inline void hal_analog_ppg_sar_offset_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_OSR, value & ((1<<PPG_ADC_OSR_NBITS)-1));
}

static inline void hal_analog_ppg_mfcr_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_MFCR, value);
}

static inline void hal_analog_ppg_asr_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_ASR, value);
}

static inline void hal_analog_ppg_sgs_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_SAR_SGS, value);
}

static inline void hal_analog_ppg_lcr_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_LCR, value);
}
// Write full SAR clocking cycles register
static inline void hal_analog_ppg_sar_clocking_cycle_set(unsigned int num, unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, (PPG_SAR_CC_0 + num), value);
}

static inline void hal_analog_ppg_dtr_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_DTR_0, value);
}

static inline void hal_analog_ppg_dtr_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_DTR_1, value);
}

static inline void hal_analog_ppg_dtr_2_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_DTR_2, value);
}

static inline void hal_analog_ppg_ddr_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_DDR_0, value);
}

static inline void hal_analog_ppg_ddr_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_DDR_1, value);
}

static inline void hal_analog_ppg_gcr_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_GCR, value);
}

static inline void hal_analog_ppg_tctia_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_TCTIA_0, value);
}

static inline void hal_analog_ppg_tctia_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_TCTIA_1, value);
}

static inline void hal_analog_ppg_tccal_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_TCCAL, value);
}

static inline void hal_analog_ppg_psr_0_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_0_0, value);
}

static inline void hal_analog_ppg_psr_0_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_0_1, value);
}

static inline void hal_analog_ppg_psr_0_2_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_0_2, value);
}

static inline void hal_analog_ppg_psr_0_3_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_0_3, value);
}

static inline void hal_analog_ppg_psr_0_4_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_0_4, value);
}

static inline void hal_analog_ppg_psr_1_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_1_0, value);
}

static inline void hal_analog_ppg_psr_1_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_1_1, value);
}

static inline void hal_analog_ppg_psr_1_2_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_1_2, value);
}

static inline void hal_analog_ppg_psr_1_3_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_1_3, value);
}

static inline void hal_analog_ppg_psr_1_4_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_1_4, value);
}

static inline void hal_analog_ppg_psr_2_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_2_0, value);
}

static inline void hal_analog_ppg_psr_2_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_2_1, value);
}

static inline void hal_analog_ppg_psr_2_2_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_2_2, value);
}

static inline void hal_analog_ppg_psr_2_3_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_2_3, value);
}

static inline void hal_analog_ppg_psr_2_4_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_2_4, value);
}

static inline void hal_analog_ppg_psr_3_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_3_0, value);
}

static inline void hal_analog_ppg_psr_3_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_3_1, value);
}

static inline void hal_analog_ppg_psr_3_2_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_3_2, value);
}

static inline void hal_analog_ppg_psr_3_3_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_3_3, value);
}

static inline void hal_analog_ppg_psr_3_4_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_3_4, value);
}

static inline void hal_analog_ppg_psr_4_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_4_0, value);
}

static inline void hal_analog_ppg_psr_4_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_4_1, value);
}

static inline void hal_analog_ppg_psr_4_2_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_4_2, value);
}

static inline void hal_analog_ppg_psr_4_3_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_4_3, value);
}

static inline void hal_analog_ppg_psr_4_4_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_4_4, value);
}

static inline void hal_analog_ppg_tcr_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_TCR, value);
}

static inline void hal_analog_ppg_dcr_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_DCR_1, value);
}

static inline void hal_analog_ppg_dcr_2_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_DCR_2, value);
}

static inline void hal_analog_ppg_bcr_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_TMA_BCR, value);
}

static inline void hal_analog_ppg_icr_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_PPG_IP, PPG_VIV_ICR, value);
}

// Write partial register functions
// Enums
typedef enum {
	HAL_ANALOG_PPG_SEQ_0 = PPG_OXI_PSR_0_0,
	HAL_ANALOG_PPG_SEQ_1 = PPG_OXI_PSR_1_0,
	HAL_ANALOG_PPG_SEQ_2 = PPG_OXI_PSR_2_0,
	HAL_ANALOG_PPG_SEQ_3 = PPG_OXI_PSR_3_0,
	HAL_ANALOG_PPG_SEQ_4 = PPG_OXI_PSR_4_0
} hal_analog_ppg_sequence_t;

static inline void hal_analog_ppg_fsm_breset_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, PPG_ADC_MFCR, value, 1<<PPG_ADC_MFCR_RESET_OFFSET);
}

static inline void hal_analog_ppg_fsm_dithering_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, PPG_ADC_MFCR, value, ((1<<PPG_ADC_MFCR_IN_DS_NBITS)-1)<<PPG_ADC_MFCR_IN_DS_OFFSET);
}

static inline void hal_analog_ppg_duty_cycling_enable_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, PPG_OXI_GCR, value, ((1<<PPG_OXI_GCR_DUTY_CYCLING_ON_NBITS)-1)<<PPG_OXI_GCR_DUTY_CYCLING_ON_OFFSET);
}

static inline void hal_analog_ppg_cnfg_cathode_only_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, PPG_OXI_GCR, value, ((1<<PPG_OXI_GCR_CAHTODE_ONLY_NBITS)-1)<<PPG_OXI_GCR_CAHTODE_ONLY_OFFSET);
}

static inline void hal_analog_ppg_t_idle_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, PPG_OXI_TCTIA_0, value, ((1<<PPG_OXI_TCTIA_0_T_IDLE_NBITS)-1)<<PPG_OXI_TCTIA_0_T_IDLE_OFFSET);
}

static inline void hal_analog_ppg_en_input_channel_3_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, PPG_OXI_TCR, value, 1<<PPG_OXI_TCR_EN_INP_CH3_OFFSET);
}

static inline void hal_analog_ppg_n_seq_repetitions_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, PPG_OXI_DCR_1, value, ((1<<PPG_OXI_DCR_1_NUM_SEQ_REP_NBITS)-1)<<PPG_OXI_DCR_1_NUM_SEQ_REP_OFFSET);
}

static inline void hal_analog_ppg_prog_seq_ch_out_set(hal_analog_ppg_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence, value, ((1<<PPG_OXI_PSR_i_0_CH_OUT_NBITS)-1)<<PPG_OXI_PSR_i_0_CH_OUT_OFFSET);
}

static inline void hal_analog_ppg_prog_seq_ch_in_set(hal_analog_ppg_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence, value, ((1<<PPG_OXI_PSR_i_0_CH_IN_NBITS)-1)<<PPG_OXI_PSR_i_0_CH_IN_OFFSET);
}

static inline void hal_analog_ppg_prog_seq_mode_cnfg_set(hal_analog_ppg_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence, value, 0x3F<<PPG_OXI_PSR_i_0_CTIA_ALL_CF_OFFSET);
}

static inline void hal_analog_ppg_prog_seq_dcs_cnfg_dk_set(hal_analog_ppg_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence, value, ((1<<PPG_OXI_PSR_i_0_DCS_CNFG_DK_NBITS)-1)<<PPG_OXI_PSR_i_0_DCS_CNFG_DK_OFFSET);
}

static inline void hal_analog_ppg_prog_seq_rf_cnfg_vs_set(hal_analog_ppg_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence, value, ((1<<PPG_PSR_i_1_RF_CNFG_RED_NBITS)-1)<<PPG_PSR_i_1_RF_CNFG_RED_OFFSET);
}

static inline void hal_analog_ppg_prog_seq_cf_cnfg_vs_set(hal_analog_ppg_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence + 1, value, ((1<<PPG_PSR_i_1_CF_CNFG_RED_NBITS)-1)<<PPG_PSR_i_1_CF_CNFG_RED_OFFSET);
}

static inline void hal_analog_ppg_prog_seq_rf_cnfg_ir_set(hal_analog_ppg_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence + 1, value, ((1<<PPG_PSR_i_1_RF_CNFG_IR_NBITS)-1)<<PPG_PSR_i_1_RF_CNFG_IR_OFFSET);
}

static inline void hal_analog_ppg_prog_seq_cf_cnfg_ir_set(hal_analog_ppg_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence + 1, value, ((1<<PPG_PSR_i_1_CF_CNFG_IR_NBITS)-1)<<PPG_PSR_i_1_CF_CNFG_IR_OFFSET);
}

static inline void hal_analog_ppg_prog_seq_ir_only_set(hal_analog_ppg_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence + 1, value, ((1<<PPG_PSR_i_1_IR_SUB_CH_ONLY_NBITS)-1)<<PPG_PSR_i_1_IR_SUB_CH_ONLY_OFFSET);
}

static inline void hal_analog_ppg_prog_seq_dac_code_vs_set(hal_analog_ppg_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence + 2, value, ((1<<PPG_PSR_i_2_DAC_CODE_RED_NBITS)-1)<<PPG_PSR_i_2_DAC_CODE_RED_OFFSET);
}

static inline void hal_analog_ppg_prog_seq_dcs_cnfg_vs_set(hal_analog_ppg_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence + 2, value, ((1<<PPG_PSR_i_2_DCS_CNFG_RED_NBITS)-1)<<PPG_PSR_i_2_DCS_CNFG_RED_OFFSET);
}

static inline void hal_analog_ppg_prog_seq_dac_code_ir_set(hal_analog_ppg_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence + 2, value, ((1<<PPG_PSR_i_2_DAC_CODE_IR_NBITS)-1)<<PPG_PSR_i_2_DAC_CODE_IR_OFFSET);
}

static inline void hal_analog_ppg_prog_seq_dcs_cnfg_ir_set(hal_analog_ppg_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence + 2, value, ((1<<PPG_PSR_i_2_DCS_CNFG_IR_NBITS)-1)<<PPG_PSR_i_2_DCS_CNFG_IR_OFFSET);
}

static inline void hal_analog_ppg_prog_seq_t_track_vs_set(hal_analog_ppg_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence + 3, value, ((1<<PPG_PSR_i_3_T_TRACK_RED_NBITS)-1)<<PPG_PSR_i_3_T_TRACK_RED_OFFSET);
}

static inline void hal_analog_ppg_prog_seq_t_track_ir_set(hal_analog_ppg_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence + 3, value, ((1<<PPG_PSR_i_3_T_TRACK_IR_NBITS)-1)<<PPG_PSR_i_3_T_TRACK_IR_OFFSET);
}

static inline void hal_analog_ppg_prog_seq_t_track_dk_vs_set(hal_analog_ppg_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence + 4, value, ((1<<PPG_PSR_i_4_T_TRACK_DK_RED_NBITS)-1)<<PPG_PSR_i_4_T_TRACK_DK_RED_OFFSET);
}

static inline void hal_analog_ppg_prog_seq_en_anode_mux_set(hal_analog_ppg_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence + 4, value, ((1<<PPG_PSR_i_4_EN_ANODE_MUX_NBITS)-1)<<PPG_PSR_i_4_EN_ANODE_MUX_OFFSET);
}

static inline void hal_analog_ppg_prog_seq_anode_sel_set(hal_analog_ppg_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence + 4, value, ((1<<PPG_PSR_i_4_ANODE_SEL_NBITS)-1)<<PPG_PSR_i_4_ANODE_SEL_OFFSET);
}

static inline void hal_analog_ppg_prog_seq_t_track_dk_ir_set(hal_analog_ppg_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence + 4, value, ((1<<PPG_PSR_i_4_T_TRACK_DK_IR_NBITS)-1)<<PPG_PSR_i_4_T_TRACK_DK_IR_OFFSET);
}

static inline void hal_analog_ppg_prog_seq_cf_cnfg_dk_set(hal_analog_ppg_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence + 4, value, ((1<<PPG_PSR_i_4_CF_CNFG_DK_NBITS)-1)<<PPG_PSR_i_4_CF_CNFG_DK_OFFSET);
}

// Read full register functions
static inline unsigned int hal_analog_ppg_sar_cap_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_0);
}

static inline unsigned int hal_analog_ppg_sar_cap_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_1);
}

static inline unsigned int hal_analog_ppg_sar_cap_2_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_2);
}

static inline unsigned int hal_analog_ppg_sar_cap_3_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_3);
}

static inline unsigned int hal_analog_ppg_sar_cap_4_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_4);
}

static inline unsigned int hal_analog_ppg_sar_cap_5_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_5);
}

static inline unsigned int hal_analog_ppg_sar_cap_6_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_6);
}

static inline unsigned int hal_analog_ppg_sar_cap_7_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_7);
}

static inline unsigned int hal_analog_ppg_sar_cap_8_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_8);
}

static inline unsigned int hal_analog_ppg_sar_cap_9_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_9);
}

static inline unsigned int hal_analog_ppg_sar_cap_10_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_10);
}

static inline unsigned int hal_analog_ppg_sar_cap_11_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_11);
}

static inline unsigned int hal_analog_ppg_sar_cap_12_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_12);
}

static inline unsigned int hal_analog_ppg_sar_cap_13_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_13);
}

static inline unsigned int hal_analog_ppg_sar_cap_14_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_14);
}

static inline unsigned int hal_analog_ppg_sar_cap_15_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_15);
}

static inline unsigned int hal_analog_ppg_sar_cap_16_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_CWR_16);
}

static inline unsigned int hal_analog_ppg_sar_peturbation_cap_weight_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_SAR_PCWR);
}

static inline unsigned int hal_analog_ppg_sar_offset_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_OSR);
}

static inline unsigned int hal_analog_ppg_mfcr_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_MFCR);
}

static inline unsigned int hal_analog_ppg_asr_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_ASR);
}

static inline unsigned int hal_analog_ppg_sgs_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_SAR_SGS);
}

static inline unsigned int hal_analog_ppg_lcr_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_ADC_LCR);
}
// Read full SAR clocking cycles register
static inline unsigned int hal_analog_ppg_sar_clocking_cycle_get(unsigned int num) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, (PPG_SAR_CC_0 + num));
}

static inline unsigned int hal_analog_ppg_dtr_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_DTR_0);
}

static inline unsigned int hal_analog_ppg_dtr_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_DTR_1);
}

static inline unsigned int hal_analog_ppg_dtr_2_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_DTR_2);
}

static inline unsigned int hal_analog_ppg_ddr_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_DDR_0);
}

static inline unsigned int hal_analog_ppg_ddr_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_DDR_1);
}

static inline unsigned int hal_analog_ppg_gcr_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_GCR);
}

static inline unsigned int hal_analog_ppg_tctia_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_TCTIA_0);
}

static inline unsigned int hal_analog_ppg_tctia_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_TCTIA_1);
}

static inline unsigned int hal_analog_ppg_tccal_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_TCCAL);
}

static inline unsigned int hal_analog_ppg_psr_0_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_0_0);
}

static inline unsigned int hal_analog_ppg_psr_0_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_0_1);
}

static inline unsigned int hal_analog_ppg_psr_0_2_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_0_2);
}

static inline unsigned int hal_analog_ppg_psr_0_3_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_0_3);
}

static inline unsigned int hal_analog_ppg_psr_0_4_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_0_4);
}

static inline unsigned int hal_analog_ppg_psr_1_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_1_0);
}

static inline unsigned int hal_analog_ppg_psr_1_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_1_1);
}

static inline unsigned int hal_analog_ppg_psr_1_2_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_1_2);
}

static inline unsigned int hal_analog_ppg_psr_1_3_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_1_3);
}

static inline unsigned int hal_analog_ppg_psr_1_4_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_1_4);
}

static inline unsigned int hal_analog_ppg_psr_2_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_2_0);
}

static inline unsigned int hal_analog_ppg_psr_2_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_2_1);
}

static inline unsigned int hal_analog_ppg_psr_2_2_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_2_2);
}

static inline unsigned int hal_analog_ppg_psr_2_3_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_2_3);
}

static inline unsigned int hal_analog_ppg_psr_2_4_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_2_4);
}

static inline unsigned int hal_analog_ppg_psr_3_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_3_0);
}

static inline unsigned int hal_analog_ppg_psr_3_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_3_1);
}

static inline unsigned int hal_analog_ppg_psr_3_2_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_3_2);
}

static inline unsigned int hal_analog_ppg_psr_3_3_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_3_3);
}

static inline unsigned int hal_analog_ppg_psr_3_4_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_3_4);
}

static inline unsigned int hal_analog_ppg_psr_4_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_4_0);
}

static inline unsigned int hal_analog_ppg_psr_4_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_4_1);
}

static inline unsigned int hal_analog_ppg_psr_4_2_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_4_2);
}

static inline unsigned int hal_analog_ppg_psr_4_3_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_4_3);
}

static inline unsigned int hal_analog_ppg_psr_4_4_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_PSR_4_4);
}

static inline unsigned int hal_analog_ppg_tcr_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_TCR);
}

static inline unsigned int hal_analog_ppg_dcr_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_DCR_1);
}

static inline unsigned int hal_analog_ppg_dcr_2_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_DCR_2);
}

static inline unsigned int hal_analog_ppg_bcr_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_TMA_BCR);
}

static inline unsigned int hal_analog_ppg_icr_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_VIV_ICR);
}

static inline unsigned int hal_analog_ppg_sar_cap_0_ff_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_FF_ADC_CWR_0);
}

static inline unsigned int hal_analog_ppg_sar_cap_1_ff_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_FF_ADC_CWR_1);
}

static inline unsigned int hal_analog_ppg_sar_cap_2_ff_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_FF_ADC_CWR_2);
}

static inline unsigned int hal_analog_ppg_sar_cap_3_ff_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_FF_ADC_CWR_3);
}

static inline unsigned int hal_analog_ppg_sar_cap_4_ff_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_FF_ADC_CWR_4);
}

static inline unsigned int hal_analog_ppg_sar_cap_5_ff_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_FF_ADC_CWR_5);
}

static inline unsigned int hal_analog_ppg_sar_cap_6_ff_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_FF_ADC_CWR_6);
}

static inline unsigned int hal_analog_ppg_sar_cap_7_ff_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_FF_ADC_CWR_7);
}

static inline unsigned int hal_analog_ppg_sar_cap_8_ff_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_FF_ADC_CWR_8);
}

static inline unsigned int hal_analog_ppg_sar_cap_9_ff_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_FF_ADC_CWR_9);
}

static inline unsigned int hal_analog_ppg_sar_cap_10_ff_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_FF_ADC_CWR_10);
}

static inline unsigned int hal_analog_ppg_sar_cap_11_ff_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_FF_ADC_CWR_11);
}

static inline unsigned int hal_analog_ppg_sar_cap_12_ff_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_FF_ADC_CWR_12);
}

static inline unsigned int hal_analog_ppg_sar_cap_13_ff_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_FF_ADC_CWR_13);
}

static inline unsigned int hal_analog_ppg_sar_cap_14_ff_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_FF_ADC_CWR_14);
}

static inline unsigned int hal_analog_ppg_sar_cap_15_ff_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_FF_ADC_CWR_15);
}

static inline unsigned int hal_analog_ppg_sar_cap_16_ff_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_FF_ADC_CWR_16);
}

static inline unsigned int hal_analog_ppg_sar_peturbation_cap_weight_ff_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_FF_SAR_PCWR);
}

static inline unsigned int hal_analog_ppg_observation_output_reg_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_SAR_OOR);
}

static inline unsigned int hal_analog_ppg_calibration_output_reg_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_PPG_IP, PPG_OXI_COR);
}

#else
#error HAL file for VivoSoC/PPG already included
#endif		// __HAL_ANALOG_PPG_H__
