/* 
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 *
 * Authors: Jonathan Boesser (jboesser@iis.ee.ethz.ch)
 */

#ifndef __HAL_ANALOG_STIM_H__
#define __HAL_ANALOG_STIM_H__

/*
 * Analog STIM HAL file for VivoSoC IP: STIM_IP
 * Use this file for STIM IP compliant to VivoSoC3
 *
 */

/*
 * STIM_IP: Miur Nerve Stimulator and Blocker
 */

// Write full register functions
static inline void hal_analog_stim_general_settings_ch_A_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_GSA, value);
}

static inline void hal_analog_stim_calibration_timing_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_TCAL, value);
}

static inline void hal_analog_stim_psr_A_0_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_0_0, value);
}

static inline void hal_analog_stim_psr_A_0_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_0_1, value);
}

static inline void hal_analog_stim_psr_A_0_2_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_0_2, value);
}

static inline void hal_analog_stim_psr_A_0_3_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_0_3, value);
}

static inline void hal_analog_stim_psr_A_1_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_1_0, value);
}

static inline void hal_analog_stim_psr_A_1_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_1_1, value);
}

static inline void hal_analog_stim_psr_A_1_2_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_1_2, value);
}

static inline void hal_analog_stim_psr_A_1_3_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_1_3, value);
}

static inline void hal_analog_stim_psr_A_2_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_2_0, value);
}

static inline void hal_analog_stim_psr_A_2_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_2_1, value);
}

static inline void hal_analog_stim_psr_A_2_2_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_2_2, value);
}

static inline void hal_analog_stim_psr_A_2_3_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_2_3, value);
}

static inline void hal_analog_stim_psr_A_3_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_3_0, value);
}

static inline void hal_analog_stim_psr_A_3_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_3_1, value);
}

static inline void hal_analog_stim_psr_A_3_2_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_3_2, value);
}

static inline void hal_analog_stim_psr_A_3_3_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_3_3, value);
}

static inline void hal_analog_stim_psr_A_4_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_4_0, value);
}

static inline void hal_analog_stim_psr_A_4_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_4_1, value);
}

static inline void hal_analog_stim_psr_A_4_2_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_4_2, value);
}

static inline void hal_analog_stim_psr_A_4_3_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_4_3, value);
}

static inline void hal_analog_stim_general_settings_ch_B_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_GSB, value);
}

static inline void hal_analog_stim_psr_B_0_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_0_0, value);
}

static inline void hal_analog_stim_psr_B_0_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_0_1, value);
}

static inline void hal_analog_stim_psr_B_0_2_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_0_2, value);
}

static inline void hal_analog_stim_psr_B_0_3_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_0_3, value);
}

static inline void hal_analog_stim_psr_B_1_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_1_0, value);
}

static inline void hal_analog_stim_psr_B_1_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_1_1, value);
}

static inline void hal_analog_stim_psr_B_1_2_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_1_2, value);
}

static inline void hal_analog_stim_psr_B_1_3_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_1_3, value);
}

static inline void hal_analog_stim_psr_B_2_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_2_0, value);
}

static inline void hal_analog_stim_psr_B_2_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_2_1, value);
}

static inline void hal_analog_stim_psr_B_2_2_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_2_2, value);
}

static inline void hal_analog_stim_psr_B_2_3_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_2_3, value);
}

static inline void hal_analog_stim_psr_B_3_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_3_0, value);
}

static inline void hal_analog_stim_psr_B_3_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_3_1, value);
}

static inline void hal_analog_stim_psr_B_3_2_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_3_2, value);
}

static inline void hal_analog_stim_psr_B_3_3_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_3_3, value);
}

static inline void hal_analog_stim_psr_B_4_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_4_0, value);
}

static inline void hal_analog_stim_psr_B_4_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_4_1, value);
}

static inline void hal_analog_stim_psr_B_4_2_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_4_2, value);
}

static inline void hal_analog_stim_psr_B_4_3_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_4_3, value);
}

static inline void hal_analog_stim_bcr_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_STIM_IP, STIM_BCR, value);
}

// Write partial register functions
// Enums
typedef enum {
	HAL_ANALOG_STIM_CHANNEL_A = STIM_GSA,
	HAL_ANALOG_STIM_CHANNEL_B = STIM_GSB
} hal_analog_stim_channel_t;

typedef enum {
	HAL_ANALOG_STIM_CHANNEL_A_SEQ_0 = STIM_PSR_A_0_0,
	HAL_ANALOG_STIM_CHANNEL_A_SEQ_1 = STIM_PSR_A_1_0,
	HAL_ANALOG_STIM_CHANNEL_A_SEQ_2 = STIM_PSR_A_2_0,
	HAL_ANALOG_STIM_CHANNEL_A_SEQ_3 = STIM_PSR_A_3_0,
	HAL_ANALOG_STIM_CHANNEL_A_SEQ_4 = STIM_PSR_A_4_0,
	HAL_ANALOG_STIM_CHANNEL_B_SEQ_0 = STIM_PSR_B_0_0,
	HAL_ANALOG_STIM_CHANNEL_B_SEQ_1 = STIM_PSR_B_1_0,
	HAL_ANALOG_STIM_CHANNEL_B_SEQ_2 = STIM_PSR_B_2_0,
	HAL_ANALOG_STIM_CHANNEL_B_SEQ_3 = STIM_PSR_B_3_0,
	HAL_ANALOG_STIM_CHANNEL_B_SEQ_4 = STIM_PSR_B_4_0
} hal_analog_stim_sequence_t;

typedef enum {
	HAL_ANALOG_STIM_PULSE_A = 2,
	HAL_ANALOG_STIM_PULSE_B
} hal_analog_stim_pulse_t;

static inline void hal_analog_stim_ch_mode_set(hal_analog_stim_channel_t channel, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, HAL_ANALOG_STIM_CHANNEL_A, value, ((1<<STIM_GSA_MODE_NBITS)-1)<<STIM_GSA_MODE_OFFSET);
}

static inline void hal_analog_stim_prescale_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, STIM_GSA, value, ((1<<STIM_GSA_PRESCALE_NBITS)-1)<<STIM_GSA_PRESCALE_OFFSET);
}

static inline void hal_analog_stim_prog_seq_ch_set(hal_analog_stim_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence, value, ((1<<STIM_PSR_i_j_0_CH_SEL_NBITS)-1)<<STIM_PSR_i_j_0_CH_SEL_OFFSET);
}

static inline void hal_analog_stim_prog_seq_pulse_setting_set(hal_analog_stim_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence, value, ((1<<STIM_PSR_i_j_0_PULSE_SETTING_NBITS)-1)<<STIM_PSR_i_j_0_PULSE_SETTING_OFFSET);
}

static inline void hal_analog_stim_prog_seq_t_dead_set(hal_analog_stim_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence, value, ((1<<STIM_PSR_i_j_0_T_DEAD_NBITS)-1)<<STIM_PSR_i_j_0_T_DEAD_OFFSET);
}

static inline void hal_analog_stim_prog_seq_t_idle_set(hal_analog_stim_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence, value, ((1<<STIM_PSR_i_j_0_T_IDLE_NBITS)-1)<<STIM_PSR_i_j_0_T_IDLE_OFFSET);
}

static inline void hal_analog_stim_prog_seq_n_pulses_set(hal_analog_stim_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence + 1, value, ((1<<STIM_PSR_i_j_1_DURATION_NBITS)-1)<<STIM_PSR_i_j_1_DURATION_OFFSET);
}

static inline void hal_analog_stim_prog_seq_dac_code_pulse_set(hal_analog_stim_sequence_t sequence, hal_analog_stim_pulse_t pulse, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence + pulse, value, ((1<<STIM_PSR_i_j_2_3_DAC_CODE_NBITS)-1)<<STIM_PSR_i_j_2_3_DAC_CODE_OFFSET);
}

static inline void hal_analog_stim_prog_seq_r_sense_pulse_set(hal_analog_stim_sequence_t sequence, hal_analog_stim_pulse_t pulse, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence + pulse, value, ((1<<STIM_PSR_i_j_2_3_R_SENSE_NBITS)-1)<<STIM_PSR_i_j_2_3_R_SENSE_OFFSET);
}

static inline void hal_analog_stim_prog_seq_t_pulse_set(hal_analog_stim_sequence_t sequence, hal_analog_stim_pulse_t pulse, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence + pulse, value, ((1<<STIM_PSR_i_j_2_3_T_PULSE_NBITS)-1)<<STIM_PSR_i_j_2_3_T_PULSE_OFFSET);
}

static inline void hal_analog_stim_prog_seq_matrix_en_set(hal_analog_stim_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence + 2, value, ((1<<STIM_PSR_i_j_2_EN_MATRIX_NBITS)-1)<<STIM_PSR_i_j_2_EN_MATRIX_OFFSET);
}

static inline void hal_analog_stim_prog_seq_pos_pin_set(hal_analog_stim_sequence_t sequence, unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_PPG_IP, sequence + 2, value, ((1<<STIM_PSR_i_j_2_ALT_POS_PIN_NBITS)-1)<<STIM_PSR_i_j_2_ALT_POS_PIN_OFFSET);
}

// Read full register functions
static inline unsigned int hal_analog_stim_general_settings_ch_A_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_GSA);
}

static inline unsigned int hal_analog_stim_calibration_timing_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_TCAL);
}

static inline unsigned int hal_analog_stim_psr_A_0_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_0_0);
}

static inline unsigned int hal_analog_stim_psr_A_0_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_0_1);
}

static inline unsigned int hal_analog_stim_psr_A_0_2_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_0_2);
}

static inline unsigned int hal_analog_stim_psr_A_0_3_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_0_3);
}

static inline unsigned int hal_analog_stim_psr_A_1_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_1_0);
}

static inline unsigned int hal_analog_stim_psr_A_1_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_1_1);
}

static inline unsigned int hal_analog_stim_psr_A_1_2_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_1_2);
}

static inline unsigned int hal_analog_stim_psr_A_1_3_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_1_3);
}

static inline unsigned int hal_analog_stim_psr_A_2_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_2_0);
}

static inline unsigned int hal_analog_stim_psr_A_2_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_2_1);
}

static inline unsigned int hal_analog_stim_psr_A_2_2_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_2_2);
}

static inline unsigned int hal_analog_stim_psr_A_2_3_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_2_3);
}

static inline unsigned int hal_analog_stim_psr_A_3_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_3_0);
}

static inline unsigned int hal_analog_stim_psr_A_3_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_3_1);
}

static inline unsigned int hal_analog_stim_psr_A_3_2_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_3_2);
}

static inline unsigned int hal_analog_stim_psr_A_3_3_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_3_3);
}

static inline unsigned int hal_analog_stim_psr_A_4_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_4_0);
}

static inline unsigned int hal_analog_stim_psr_A_4_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_4_1);
}

static inline unsigned int hal_analog_stim_psr_A_4_2_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_4_2);
}

static inline unsigned int hal_analog_stim_psr_A_4_3_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_A_4_3);
}

static inline unsigned int hal_analog_stim_general_settings_ch_B_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_GSB);
}

static inline unsigned int hal_analog_stim_psr_B_0_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_0_0);
}

static inline unsigned int hal_analog_stim_psr_B_0_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_0_1);
}

static inline unsigned int hal_analog_stim_psr_B_0_2_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_0_2);
}

static inline unsigned int hal_analog_stim_psr_B_0_3_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_0_3);
}

static inline unsigned int hal_analog_stim_psr_B_1_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_1_0);
}

static inline unsigned int hal_analog_stim_psr_B_1_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_1_1);
}

static inline unsigned int hal_analog_stim_psr_B_1_2_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_1_2);
}

static inline unsigned int hal_analog_stim_psr_B_1_3_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_1_3);
}

static inline unsigned int hal_analog_stim_psr_B_2_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_2_0);
}

static inline unsigned int hal_analog_stim_psr_B_2_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_2_1);
}

static inline unsigned int hal_analog_stim_psr_B_2_2_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_2_2);
}

static inline unsigned int hal_analog_stim_psr_B_2_3_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_2_3);
}

static inline unsigned int hal_analog_stim_psr_B_3_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_3_0);
}

static inline unsigned int hal_analog_stim_psr_B_3_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_3_1);
}

static inline unsigned int hal_analog_stim_psr_B_3_2_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_3_2);
}

static inline unsigned int hal_analog_stim_psr_B_3_3_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_3_3);
}

static inline unsigned int hal_analog_stim_psr_B_4_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_4_0);
}

static inline unsigned int hal_analog_stim_psr_B_4_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_4_1);
}

static inline unsigned int hal_analog_stim_psr_B_4_2_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_4_2);
}

static inline unsigned int hal_analog_stim_psr_B_4_3_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_PSR_B_4_3);
}

static inline unsigned int hal_analog_stim_bcr_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_BCR);
}

static inline unsigned int hal_analog_stim_or_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_STIM_IP, STIM_OR_0);
}

#else
#error HAL file for VivoSoC/Stim already included
#endif		// __HAL_ANALOG_STIM_H__
