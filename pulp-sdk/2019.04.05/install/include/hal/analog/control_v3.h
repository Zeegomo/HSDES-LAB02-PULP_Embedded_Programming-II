/* 
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 *
 * Authors: Jonathan Boesser (jboesser@iis.ee.ethz.ch)
 */

#ifndef __HAL_ANALOG_CONTROL_H__
#define __HAL_ANALOG_CONTROL_H__

/*
 * Analog control HAL file for VivoSoC IPs: CONTROL_BG_BIAS_IP, CONTORL_CLK_DIV_IP, CONTORL_CLK_GEN_IP, CONTORL_PMU_IP
 * Use this file for control IPs compliant to VivoSoC3
 *
 */


/*
 * CONTROL_BG_BIAS_IP: Band-Gap and Biases
 */

// Write full register functions
static inline void hal_analog_control_bg_enable_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTROL_BG_BIAS_IP, CONTROL_BG_BIAS_EN, value);
}

static inline void hal_analog_control_bg_boost_enable_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTROL_BG_BIAS_IP, CONTROL_BG_BIAS_BOOST_EN, value);
}

static inline void hal_analog_control_bg_current_enable_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTROL_BG_BIAS_IP, CONTROL_BG_BIAS_CURRENT_EN, value);
}

static inline void hal_analog_control_pmu_0v6_enable_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTROL_BG_BIAS_IP, CONTROL_BG_BIAS_PMU_0V6_EN, value);
}

static inline void hal_analog_control_pmu_1v2_enable_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTROL_BG_BIAS_IP, CONTROL_BG_BIAS_PMU_1V2_EN, value);
}

static inline void hal_analog_control_bias_all_enable_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTROL_BG_BIAS_IP, CONTROL_BG_BIAS_ALL_BIAS_EN, value);
}

static inline void hal_analog_control_ibias_exg_vref_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTROL_BG_BIAS_IP, CONTROL_BG_BIAS_IBIAS_EXG_VREF, value);
}

static inline void hal_analog_control_ibias_exg_vcm_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTROL_BG_BIAS_IP, CONTROL_BG_BIAS_IBIAS_EXG_VCM, value);
}

static inline void hal_analog_control_ibias_pmu_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTROL_BG_BIAS_IP, CONTROL_BG_BIAS_IBIAS_PMU, value);
}

static inline void hal_analog_control_pgnd_value_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTROL_BG_BIAS_IP, CONTROL_BG_BIAS_EXG_PGND_VALUE, value);
}

static inline void hal_analog_control_ibias_stim_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTROL_BG_BIAS_IP, CONTROL_BG_BIAS_IBIAS_STIM, value);
}

static inline void hal_analog_control_ibias_ppg_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTROL_BG_BIAS_IP, CONTROL_BG_BIAS_IBIAS_PPG, value);
}

static inline void hal_analog_control_ibias_ppg_1v2_buffer_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTROL_BG_BIAS_IP, CONTROL_BG_BIAS_IBIAS_PPG_1V2, value);
}

static inline void hal_analog_control_ibias_pgnd_buffer_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTROL_BG_BIAS_IP, CONTROL_BG_BIAS_IBIAS_EXG_PGND, value);
}

static inline void hal_analog_control_ibias_bioz_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTROL_BG_BIAS_IP, CONTROL_BG_BIAS_IBIAS_BIOZ, value);
}

static inline void hal_analog_control_ibias_bioz_vcm_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTROL_BG_BIAS_IP, CONTROL_BG_BIAS_IBIAS_BIOZ_VCM, value);
}

static inline void hal_analog_control_ibias_bioz_vref_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTROL_BG_BIAS_IP, CONTROL_BG_BIAS_IBIAS_BIOZ_VREF, value);
}

static inline void hal_analog_control_pgnd_buffer_enable_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTROL_BG_BIAS_IP, CONTROL_BG_BIAS_EXG_PGND_EN, value);
}

// Write partial register functions

// TODO - only possible with shadow copies!!

// Read full register functions

// NOT POSSIBLE TO READ REGISTER OF THIS IP!!

/*
 * CONTORL_CLK_DIV_IP: Clock Divider
 */

// Write full register functions
static inline void hal_analog_control_clk_enable_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EN_REG, value);
}

static inline void hal_analog_control_clk_division_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_GLOBAL_DIV_REG, value);
}

static inline void hal_analog_control_exg_ch_arm_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EXG_CH_ARM, value);
}

static inline void hal_analog_control_exg_ch_skip_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EXG_CH_SKIP_0, value);
}

static inline void hal_analog_control_exg_ch_skip_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EXG_CH_SKIP_1, value);
}

static inline void hal_analog_control_exg_ch_chopping_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EXG_CH_CHOPPING_0, value);
}

static inline void hal_analog_control_exg_ch_chopping_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EXG_CH_CHOPPING_1, value);
}

static inline void hal_analog_control_exg_ch_chopping_2_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EXG_CH_CHOPPING_2, value);
}

static inline void hal_analog_control_exg_ch_trigger_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EXG_CH_WDW_TRIGGER, value);
}

static inline void hal_analog_control_exg_monitor_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EXG_MONITOR_PAD_SEL, value);
}

static inline void hal_analog_control_bg_divider_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_BG_DIV, value);
}

static inline void hal_analog_control_stim_divider_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_BIOZ_AFE_DIV, value);
}

static inline void hal_analog_control_stim_ch_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_BIOZ_CH, value);
}

static inline void hal_analog_control_stim_trigger_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_BIOZ_CH_WDW_TRIGGER, value);
}

static inline void hal_analog_control_clk_monitor_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_IP_CONFIG, value);
}

static inline void hal_analog_control_pll_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_PLL_CONFIG_0, value);
}

static inline void hal_analog_control_pll_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_PLL_CONFIG_1, value);
}

// Write partial register functions
static inline void hal_analog_control_clkdiv_master_enable_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EN_REG, value, 1<<CONTROL_CLK_DIV_EN_MASTER_OFFSET);
}

static inline void hal_analog_control_clkdiv_exg_sar_enable_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EN_REG, value, 1<<CONTROL_CLK_DIV_EN_EXG_SAR_OFFSET);
}

static inline void hal_analog_control_clkdiv_exg_phase_gen_enable_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EN_REG, value, 1<<CONTROL_CLK_DIV_EN_EXG_PHASEGEN_OFFSET);
}

static inline void hal_analog_control_clkdiv_bg_enable_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EN_REG, value, 1<<CONTROL_CLK_DIV_EN_BG_DUTY_OFFSET);
}

static inline void hal_analog_control_clkdiv_exg_eima_enable_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EN_REG, value, 1<<CONTROL_CLK_DIV_EN_EXG_EIM_A_OFFSET);
}

static inline void hal_analog_control_clkdiv_exg_eimd_enable_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EN_REG, value, 1<<CONTROL_CLK_DIV_EN_EXG_EIM_D_OFFSET);
}

static inline void hal_analog_control_clkdiv_ppg_enable_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EN_REG, value, 1<<CONTROL_CLK_DIV_EN_PPG_OFFSET);
}

static inline void hal_analog_control_clkdiv_stim_demod_enable_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EN_REG, value, 1<<CONTROL_CLK_DIV_EN_BIOZ_DEMOD_OFFSET);
}

static inline void hal_analog_control_clkdiv_stim_gen_enable_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EN_REG, value, 1<<CONTROL_CLK_DIV_EN_BIOZ_GEN_OFFSET);
}

static inline void hal_analog_control_clkdiv_stim_sar_enable_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EN_REG, value, 1<<CONTROL_CLK_DIV_EN_BIOZ_SAR_OFFSET);
}

static inline void hal_analog_control_clkdiv_stim_phase_gen_enable_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EN_REG, value, 1<<CONTROL_CLK_DIV_EN_BIOZ_PHASEGEN_OFFSET);
}

// Read full register functions
static inline unsigned int hal_analog_control_clk_enable_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EN_REG);
}

static inline unsigned int hal_analog_control_clk_division_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_GLOBAL_DIV_REG);
}

static inline unsigned int hal_analog_control_exg_ch_arm_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EXG_CH_ARM);
}

static inline unsigned int hal_analog_control_exg_ch_skip_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EXG_CH_SKIP_0);
}

static inline unsigned int hal_analog_control_exg_ch_skip_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EXG_CH_SKIP_1);
}

static inline unsigned int hal_analog_control_exg_ch_chopping_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EXG_CH_CHOPPING_0);
}

static inline unsigned int hal_analog_control_exg_ch_chopping_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EXG_CH_CHOPPING_1);
}

static inline unsigned int hal_analog_control_exg_ch_chopping_2_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EXG_CH_CHOPPING_2);
}

static inline unsigned int hal_analog_control_exg_ch_trigger_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EXG_CH_WDW_TRIGGER);
}

static inline unsigned int hal_analog_control_exg_monitor_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_EXG_MONITOR_PAD_SEL);
}

static inline unsigned int hal_analog_control_bg_divider_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_BG_DIV);
}

static inline unsigned int hal_analog_control_stim_divider_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_BIOZ_AFE_DIV);
}

static inline unsigned int hal_analog_control_stim_ch_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_BIOZ_CH);
}

static inline unsigned int hal_analog_control_stim_trigger_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_BIOZ_CH_WDW_TRIGGER);
}

static inline unsigned int hal_analog_control_clk_monitor_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_IP_CONFIG);
}

static inline unsigned int hal_analog_control_pll_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_PLL_CONFIG_0);
}

static inline unsigned int hal_analog_control_pll_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_CONTORL_CLK_DIV_IP, CONTROL_CLK_DIV_PLL_CONFIG_1);
}


/*
 * CONTORL_CLK_GEN_IP: Clock Generator
 */

// Write full register functions
static inline void hal_analog_control_clk_gen_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTORL_CLK_GEN_IP, CONTROL_CLK_GEN_REG, value);
}

// Write partial register functions

// TODO

// Read full register functions
static inline unsigned int hal_analog_control_clk_gen_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_CONTORL_CLK_GEN_IP, CONTROL_CLK_GEN_REG);
}


/*
 * CONTORL_PMU_IP: PMU
 */

// Write full register functions
static inline void hal_analog_control_ldo_config_0_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTORL_PMU_IP, CONTROL_PMU_LDO_CONFIG_REG_0, value);
}

static inline void hal_analog_control_ldo_config_1_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTORL_PMU_IP, CONTROL_PMU_LDO_CONFIG_REG_1, value);
}

static inline void hal_analog_control_ldo_config_2_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTORL_PMU_IP, CONTROL_PMU_LDO_CONFIG_REG_2, value);
}

static inline void hal_analog_control_power_switch_set(unsigned int value) {
	hal_analog_ip_write_reg(ARCHI_ANALOG_CONTORL_PMU_IP, CONTROL_PMU_POWER_SWITCH_REG, value);
}

// Write partial register functions
static inline void hal_analog_control_ldo_digital_1V2_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_CONTORL_PMU_IP, CONTROL_PMU_LDO_CONFIG_REG_0, value, 1<<CONTROL_PMU_D_1V2_LOW_C_OFFSET);
}

static inline void hal_analog_control_ldo_exg_1V2_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_CONTORL_PMU_IP, CONTROL_PMU_LDO_CONFIG_REG_0, value, 7<<CONTROL_PMU_EXG_1V2_EN_OFFSET);
}

static inline void hal_analog_control_ldo_exg_3V3_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_CONTORL_PMU_IP, CONTROL_PMU_LDO_CONFIG_REG_0, value, 3<<CONTROL_PMU_EXG_3V3_EN_OFFSET);
}

static inline void hal_analog_control_ldo_bioz_1V2_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_CONTORL_PMU_IP, CONTROL_PMU_LDO_CONFIG_REG_0, value, 7<<CONTROL_PMU_BIOZ_1V2_EN_OFFSET);
}

static inline void hal_analog_control_ldo_ppg_1V2_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_CONTORL_PMU_IP, CONTROL_PMU_LDO_CONFIG_REG_0, value, 7<<CONTROL_PMU_PPG_1V2_EN_OFFSET);
}

static inline void hal_analog_control_ldo_ppg_3V3_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_CONTORL_PMU_IP, CONTROL_PMU_LDO_CONFIG_REG_0, value, 3<<CONTROL_PMU_PPG_3V3_EN_OFFSET);
}

static inline void hal_analog_control_ldo_stim_1V2_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_CONTORL_PMU_IP, CONTROL_PMU_LDO_CONFIG_REG_0, value, 7<<CONTROL_PMU_STIM_1V2_EN_OFFSET);
}

static inline void hal_analog_control_ldo_stim_3V3_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_CONTORL_PMU_IP, CONTROL_PMU_LDO_CONFIG_REG_0, value, 3<<CONTROL_PMU_STIM_3V3_EN_OFFSET);
}

static inline void hal_analog_control_ldo_clk_1V2_set(unsigned int value) {
	hal_analog_ip_write_bit(ARCHI_ANALOG_CONTORL_PMU_IP, CONTROL_PMU_LDO_CONFIG_REG_0, value, 7<<CONTROL_PMU_CLK_1V2_EN_OFFSET);
}

// Read full register functions
static inline unsigned int hal_analog_control_ldo_config_0_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_CONTORL_CLK_GEN_IP, CONTROL_PMU_LDO_CONFIG_REG_0);
}

static inline unsigned int hal_analog_control_ldo_config_1_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_CONTORL_CLK_GEN_IP, CONTROL_PMU_LDO_CONFIG_REG_1);
}

static inline unsigned int hal_analog_control_ldo_config_2_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_CONTORL_CLK_GEN_IP, CONTROL_PMU_LDO_CONFIG_REG_2);
}

static inline unsigned int hal_analog_control_power_switch_get(void) {
	return hal_analog_ip_read_reg(ARCHI_ANALOG_CONTORL_CLK_GEN_IP, CONTROL_PMU_POWER_SWITCH_REG);
}

#else
#error HAL file for VivoSoC/Control already included
#endif		// __HAL_ANALOG_CONTROL_H__