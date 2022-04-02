/* 
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 *
 * Authors: Jonathan Boesser (jboesser@iis.ee.ethz.ch)
 */

#ifndef __RT_RT_ANALOG_CONTROL_H__
#define __RT_RT_ANALOG_CONTROL_H__

/**
 * @ingroup groupDriversAnalog
 */

/** @defgroup analog_control Control
 * The following API gives access to the driver for the control part of the analog part of VivoSoC (IPs 0, 3, 4, and 6). It supports the following functionalities:
 *   - Manage band-gap and biases of all analog IPs according to the user's needs (IP 0)
 *   - Manage clock configurations for all analog IPs according to the user's needs and settings found to be optimal (IP 3)
 *   - Manage analog clock generator (IP 4)
 *   - Power management for all analog IPs (IP 6)
 *
 * Note: When using the other analog APIs there is no need to call functions of this API separatly, as this is handled within the other APIs
 *
 * Important: this API can only be used for the VivoSoC2 chip family, including VivoSoC2 and VivoSoC2.001
 *
 * Usage:
 *   - initialize clock dividers (has to be done first)
 *   - enable clk / pmu according to needs
 *
 * The supported functionality covers the standard use-cases. Experienced users can still use the HAL functions for more advanced functionality, however they need to be carefull when interfering with the driver.
 *
 * NOTE: This file is ported from the old runtime and does not comply with the standards of the new runtime!
 */

/**        
 * @addtogroup analog_control
 * @{        
 */

/**@{*/


/** \brief Debug Configuration for control driver. 
 *
 * This define sets the debug level for the analog control driver
 *   0 debug OFF
 *   1 debug with LEDs
 *   2 debug with printfs
 *   3 debug with LEDs & printfs
 *   4 8MHz clk option for VivoSoC2
 *   5 debug value for chopping clk divider
 */
#define ANALOG_CONTROL_DEBUG 0

/** \brief Output Configuration of Internal 3.3V LDO. 
 *
 * The output of the internal LDO can be set to either 3.0V (LOW) or 3.3V (HIGH). It is recommended to set it to LOW when supplying the LDO with 3.3V from external
 *
 * \def   ANALOG_CTRL_INTERNAL_3V3_LDO_OUTPUT_LOW  
 * Output of internal LDO is 3.0V
 * \def   ANALOG_CTRL_INTERNAL_3V3_LDO_OUTPUT_HIGH  
 * Output of internal LDO is 3.3V
 */
#define ANALOG_CTRL_INTERNAL_3V3_LDO_OUTPUT_LOW 0
#define ANALOG_CTRL_INTERNAL_3V3_LDO_OUTPUT_HIGH 1

/** \brief Settings of Internal Oscillator.
 *
 * Settings for the internal oscillator. The oscillator has to be turned on if a crystal is used. If an oscillator or an external clock source is used it can be powered down
 *
 * \def   ANALOG_CTRL_INTERNAL_OSCILLATOR_OFF  
 * Power down internal oscillator
 * \def   ANALOG_CTRL_INTERNAL_OSCILLATOR_ON  
 * Let internal oscillator run  
 */
#define ANALOG_CTRL_INTERNAL_OSCILLATOR_OFF 0
#define ANALOG_CTRL_INTERNAL_OSCILLATOR_ON 1

/** \brief Clock Divider Initialization. 
 *
 * This will set all the internal clock dividers (without enabling any of the clock divider) to achieve the following clocks:
 *   input:
 *   - input clk :   xx.yy / xx.00
 *   master:
 *   - Master:    8.192MHz / 8.0MHz 
 *   slaves:
 *   - band-gap:     16kHz / 15.625kHz  
 *   - chopping:     32kHz / 31.25kHz
 *   - EXG:     dependent on choosen fs
 *   - EIMa:         32kHz / 31.25kHz
 *   - EIMd:      0.512MHz / 0.50MHz
 *   - PPG:       2.048MHz / 2.0MHz
 *   - STIM:      1.024MHz / 1.0MHz
 *   - TEMP:      2.048MHz / 2.0MHz
 *   - BIOZ_1:    2.048MHz / 2.0MHz
 *   - BIOZ_2:    2.048MHz / 2.0MHz
 *   - BIOZ:    dependent on choosen fs
 *
 * Supported are the following input clocks:
 *                    version     2     2.001  
 *   -  8:  8.192MHz /  8.0MHz    -     x            
 *   - 16: 16.384MHz / 16.0MHz    x     x     
 *   - 32: 32.768MHz / 32.0MHz    x     x     
 *   - 48: 49.152MHz / 48.0MHz    x     -     
 *   - 64: 65.536MHz / 64.0MHz    x     -     
 *   - 80: 81.920MHz / 80.0MHz    x     -     
 *   - 96: 98.304MHz / 96.0MHz    x     -     
 *
 * \param   board_clk  Clock frequency of the clock which is provided to VivoSoC.
 * \return  0 if clk_dividers where successfully set, 1 if the given board_clk is not supported.
 */
int analog_ctrl_clkdiv_init(unsigned char board_clk);

/** \brief Enable Master Clock.
 *
 * Enables the master clock divider. Needs to be enabled for clock to be propagated to other clock dividers.
 */
void analog_ctrl_master_clk_enable(void);

/** \brief Disable Master Clock.
 *
 * Disables the master clock divider. Function tracks the activity of the slave clocks and will not disable the master clock if one or more of the slave clocks are still active.
 */
void analog_ctrl_master_clk_disable(void);

/** \brief Enable Band-Gap Clock.
 *
 * Enables the band-gap clock divider. Needs to be enabled in order to set the band-gap properly.
 */
void analog_ctrl_bg_clk_enable(void);

/** \brief Disable Band-Gap Clock.
 *
 * Disables the band-gap clock divider. This will only be done as long as the band-gap is not needed by any of the analog sub-circuitry.
 */
void analog_ctrl_bg_clk_disable(void);

/** \brief Enable EXG Clock.
 *
 * Enables the clock divider of the EXG-SAR and enables the phase generation of the EXG-SAR and the chopping as well.
 */
void analog_ctrl_exg_clk_enable(void);

/** \brief Disable EXG Clock.
 *
 * Disables the clock divider of the EXG-SAR and disables the phase generation of the EXG-SAR and the chopping as well.
 */
void analog_ctrl_exg_clk_disable(void);

/** \brief Enable EIM Clock.
 *
 * Enables the clock divider of the analog and the digital part of the EIM.
 */
void analog_ctrl_exg_eim_clk_enable(void);

/** \brief Disable EIM Clock.
 *
 * Disables the clock divider of the analog and the digital part of the EIM.
 */
void analog_ctrl_exg_eim_clk_disable(void);

/** \brief Enable PPG Clock.
 *
 * Enables the PPG clock divider.
 */
void analog_ctrl_ppg_clk_enable(void);

/** \brief Disable PPG Clock.
 *
 * Disables the PPG clock divider.
 */
void analog_ctrl_ppg_clk_disable(void);

/** \brief Enable STIM Clock.
 *
 * Enables the STIM clock divider.
 */
void analog_ctrl_stim_clk_enable(void);

/** \brief Disable STIM Clock.
 *
 * Disables the STIM clock divider.
 */
void analog_ctrl_stim_clk_disable(void);

/** \brief Enable TEMP Clock.
 *
 * Enables the TEMP clock divider.
 */
void analog_ctrl_temp_clk_enable(void);

/** \brief Disable TEMP Clock.
 *
 * Disables the TEMO clock divider.
 */
void analog_ctrl_temp_clk_disable(void);

/** \brief Enable BIOZ Clock.
 *
 * Enables the two clock dividers for the BIOZ and the clock divider for the BIOZ-SAR and enables the phase generation of the BIOZ-SAR.
 */
void analog_ctrl_bioz_clk_enable(void);

/** \brief Disable BIOZ Clock.
 *
 * Disables the two clock dividers for the BIOZ and the clock divider for the BIOZ-SAR and disables the phase generation of the BIOZ-SAR.
*/
void analog_ctrl_bioz_clk_disable(void);

/** \brief Enable/Disable Internal Oscillator.
 *
 * Enables internal oscillator.
 *
 * \param value: off: ANALOG_CTRL_INTERNAL_OSCILLATOR_OFF / on: ANALOG_CTRL_INTERNAL_OSCILLATOR_ON.
 */
void analog_ctrl_internal_oscillator_set(unsigned char value);

/** \brief Enable LDOs for Band-Gap.
 *
 * Enables internal LDOs needed to enable BG: 1.2V digital EXG (always on), 1.2V analog EXG and 3.0V analog EXG.
 */
void analog_ctrl_pmu_bg_enable(void);

/** \brief Disable LDOs for Band-Gap.
 *
 * Disables internal LDOs needed to enable band-gap, as long as no other analog sub-circuitry needs the band-gap: 1.2V digital EXG (always on), 1.2V analog EXG and 3.0V analog EXG.
 * Note: this enables as well all the LDOs needed for EXG
 */
void analog_ctrl_pmu_bg_disable(void);

/** \brief Enable LDOs for PPG.
 *
 * Enables internal LDOs needed for PPG: 1.2V analog PPG and 3.0V analog PPG.
 */
void analog_ctrl_pmu_ppg_enable(void);

/** \brief Disable LDOs for PPG.
 *
 * Disables internal LDOs needed for PPG: 1.2V analog PPG and 3.0V analog PPG.
 */
void analog_ctrl_pmu_ppg_disable(void);

/** \brief Enable LDOs for STIM.
 *
 * Enables internal LDOs needed for STIM: 1.2V analog STIM and 3.0V analog STIM.
 */
void analog_ctrl_pmu_stim_enable(void);

/** \brief Disable LDOs for STIM.
 *
 * Disables internal LDOs needed for STIM: 1.2V analog STIM and 3.0V analog STIM.
 */
void analog_ctrl_pmu_stim_disable(void);

/** \brief Enable LDO for BIOZ.
 *
 * Enables internal LDO needed for BIOZ: 1.2V analog BIOZ.
 */
void analog_ctrl_pmu_bioz_enable(void);

/** \brief Disable LDO for BIOZ.
 *
 * Disables internal LDO needed for BIOZ: 1.2V analog BIOZ.
 */
void analog_ctrl_pmu_bioz_disable(void);

/** \brief Set LDO output setting for 3v3 LDOs.
 *
 * Set LDO output setting for 3v3 LDOs to adjust for supply.
 *
 * Note: Choose lower setting if analog supply is not 3.5V on VivoSoC2.001
 *
 * \param setting  0: lower setting (~3.0V), 1: higher setting (~3.3V).
 */
void analog_ctrl_pmu_3v3_ldo_set(unsigned char setting);

/** \brief EXG Initialization. 
 *
 * Sets the internal clock dividers as needed.
 * 
 * Supported are the following input clocks:
 *                    version     2     2.001  
 *   -  8:  8.192MHz /  8.0MHz    -     x            
 *   - 16: 16.384MHz / 16.0MHz    x     x     
 *   - 32: 32.768MHz / 32.0MHz    x     x     
 *   - 48: 49.152MHz / 48.0MHz    x     -     
 *   - 64: 65.536MHz / 64.0MHz    x     -     
 *   - 80: 81.920MHz / 80.0MHz    x     -     
 *   - 96: 98.304MHz / 96.0MHz    x     -     
 *
 * \param   board_clk  Clock frequency of the clock which is provided to VivoSoC.
 * \param   setting    8: 8kHz base sampling frequency, 16: 16kHz base sampling frequency, 32: 32kHz base sampling frequency
 * \return  0 if the given board_clk is supported, 1 if the given board_clk is not supported.
 */
int analog_ctrl_exg_init(unsigned char board_clk, unsigned char setting);

/** \brief Enable EXG.
 *
 * Enables enable the internal clock dividers as needed and enable the LDOs as needed:
 *   - Clks: 
 *   - LDOs: 
 */
void analog_ctrl_exg_enable(void);

/** \brief Disable EXG.
 *
 * Disables the internal clock dividers and LDOs as long as they are not used by any other analog circuitry.
 */
void analog_ctrl_exg_disable(void);

/** \brief PPG Initialization. 
 *
 * Sets the internal clock dividers as needed, sets the reference bias currents for PPG to 2.5uA.
 * 
 * Supported are the following input clocks:
 *                    version     2     2.001  
 *   -  8:  8.192MHz /  8.0MHz    -     x            
 *   - 16: 16.384MHz / 16.0MHz    x     x     
 *   - 32: 32.768MHz / 32.0MHz    x     x     
 *   - 48: 49.152MHz / 48.0MHz    x     -     
 *   - 64: 65.536MHz / 64.0MHz    x     -     
 *   - 80: 81.920MHz / 80.0MHz    x     -     
 *   - 96: 98.304MHz / 96.0MHz    x     -     
 *
 * \param   board_clk  Clock frequency of the clock which is provided to VivoSoC.
 * \return  0 if the given board_clk is supported, 1 if the given board_clk is not supported.
 */
int analog_ctrl_ppg_init(unsigned char board_clk);

/** \brief Enable PPG.
 *
 * This will set and enable the internal clock dividers as needed and enable the LDOs as needed:
 *   - Clks: master clk, band-gap clk, ppg clk
 *   - LDOs: 1.2V digital EXG, 1.2V analog EXG, 3.0V analog EXG, 1.2V analog PPG, 3.0V analog PPG
 */
void analog_ctrl_ppg_enable(void);

/** \brief Disable PPG.
 *
 * Disables the internal clock dividers and LDOs as long as they are not used by any other analog circuitry.
 */
void analog_ctrl_ppg_disable(void);

/** \brief STIM Initialization. 
 *
 * Sets the internal clock dividers as needed.
 * 
 * Supported are the following input clocks:
 *                    version     2     2.001  
 *   -  8:  8.192MHz /  8.0MHz    -     x            
 *   - 16: 16.384MHz / 16.0MHz    x     x     
 *   - 32: 32.768MHz / 32.0MHz    x     x     
 *   - 48: 49.152MHz / 48.0MHz    x     -     
 *   - 64: 65.536MHz / 64.0MHz    x     -     
 *   - 80: 81.920MHz / 80.0MHz    x     -     
 *   - 96: 98.304MHz / 96.0MHz    x     -     
 *
 * \param   board_clk  Clock frequency of the clock which is provided to VivoSoC.
 * \return  0 if the given board_clk is supported, 1 if the given board_clk is not supported.
 */
int analog_ctrl_stim_init(unsigned char board_clk);

/** \brief Enable STIM.
 *
 * Enables enable the internal clock dividers as needed and enable the LDOs as needed:
 *   - Clks: 
 *   - LDOs: 
 */
void analog_ctrl_stim_enable(void);

/** \brief Disable STIM.
 *
 * Disables the internal clock dividers and LDOs as long as they are not used by any other analog circuitry.
 */
void analog_ctrl_stim_disable(void);

/** \brief TEMP Initialization. 
 *
 * Sets the internal clock dividers as needed.
 * 
 * Supported are the following input clocks:
 *                    version     2     2.001  
 *   -  8:  8.192MHz /  8.0MHz    -     x            
 *   - 16: 16.384MHz / 16.0MHz    x     x     
 *   - 32: 32.768MHz / 32.0MHz    x     x     
 *   - 48: 49.152MHz / 48.0MHz    x     -     
 *   - 64: 65.536MHz / 64.0MHz    x     -     
 *   - 80: 81.920MHz / 80.0MHz    x     -     
 *   - 96: 98.304MHz / 96.0MHz    x     -     
 *
 * \param   board_clk  Clock frequency of the clock which is provided to VivoSoC.
 * \return  0 if the given board_clk is supported, 1 if the given board_clk is not supported.
 */
int analog_ctrl_temp_init(unsigned char board_clk);

/** \brief Enable TEMP.
 *
 * Enables enable the internal clock dividers as needed and enable the LDOs as needed:
 *   - Clks: 
 *   - LDOs: 
 */
void analog_ctrl_temp_enable(void);

/** \brief Disable TEMP.
 *
 * Disables the internal clock dividers and LDOs as long as they are not used by any other analog circuitry.
 */
void analog_ctrl_temp_disable(void);

/** \brief BIOZ Initialization. 
 *
 * Sets the internal clock dividers as needed.
 * 
 * Supported are the following input clocks:
 *                    version     2     2.001  
 *   -  8:  8.192MHz /  8.0MHz    -     x            
 *   - 16: 16.384MHz / 16.0MHz    x     x     
 *   - 32: 32.768MHz / 32.0MHz    x     x     
 *   - 48: 49.152MHz / 48.0MHz    x     -     
 *   - 64: 65.536MHz / 64.0MHz    x     -     
 *   - 80: 81.920MHz / 80.0MHz    x     -     
 *   - 96: 98.304MHz / 96.0MHz    x     -     
 *
 * \param   board_clk  Clock frequency of the clock which is provided to VivoSoC.
 * \return  0 if the given board_clk is supported, 1 if the given board_clk is not supported.
 */
int analog_ctrl_bioz_init(unsigned char board_clk);

/** \brief Enable BIOZ.
 *
 * Enables enable the internal clock dividers as needed and enable the LDOs as needed:
 *   - Clks: 
 *   - LDOs: 
 */
void analog_ctrl_bioz_enable(void);

/** \brief Disable BIOZ.
 *
 * Disables the internal clock dividers and LDOs as long as they are not used by any other analog circuitry.
 */
void analog_ctrl_bioz_disable(void);


//!@}

/**        
 * @} end of analog_control group        
 */

#else
#error API file for VivoSoC/Control already included
#endif		// __RT_RT_ANALOG_CONTROL_H__
