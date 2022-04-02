/* 
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 *
 * Authors: Jonathan Boesser (jboesser@iis.ee.ethz.ch)
 *      Philipp Schoenle (philipsc@iis.ee.ethz.ch)
 */

#ifndef __RT_RT_ANALOG_PPG_H__
#define __RT_RT_ANALOG_PPG_H__

/**
 * @ingroup groupDriversAnalog
 */

/** @defgroup analog_ppg PPG
 * The following API gives access to the driver for the PPG front-end of the analog part of VivoSoC (IP 7). It supports the following functionalities:
 *   - Initialize, enable and disable PPG circuitry of VivoSoC
 *   - Configure sequences 
 *    - up to 5 sequences which are sequentially processed
 *    - up to 2 subchannels per sequence, often named vs (red LED) and ir (infra-red LED)
 *    - different sets of inputs and outputs can be used for each sequence
 *    - many configurations can be set independently for each sequences, such as DCS, C_f, R_f, LED on times, LED DAC codes, ... 
 *   - Setup interrupt based readout of data from analog circuitry
 *    - data is sorted by subchannels and put into buffers provided by user  
 *   - Control of PPG circuitry
 *
 * Important: this API can only be used for the VivoSoC2 chip family, including VivoSoC2 and VivoSoC2.001
 * 
 * Usage:
 *   - initialize ppg driver (has to be done first)
 *   - initialize all sequences needed, incl sampling frequency, dithering, special modes
 *   - initialize buffers for the data stream
 *   - start continuous samples acquisition
 *   - enable ppg hardware
 *
 * The supported functionality covers the standard use-cases. Experienced users can still use the HAL functions for more advanced functionality, however they need to be carefull when interfering with the driver.
 *
 * NOTE: This file is ported from the old runtime and does not comply with the standards of the new runtime!
 */

/**        
 * @addtogroup analog_ppg
 * @{        
 */

/**@{*/


/** \brief Debug Configuration for PPG driver. 
 *
 * This define sets the debug level for the analog PPG driver
 *   0 debug OFF
 *   1 debug with LEDs
 *   2 debug with printfs
 *   3 debug with LEDs & printfs
 *   4 run ADC at 4MHz
 *   5 run ADC at 8MHZ
 *   6 run ADC at 16MHz
 */
#define ANALOG_PPG_DEBUG 7

/** \brief TIA Configuration. 
 *
 * These defines let the user choose different feedback resistor (R_f) value of the TIA. Given R_f the optimal configurations of the feedback capacitor (C_f), the differential current source (DCS), the reference voltage of the TIA, and the length of the LED on-time (t_track) are set. 
 * 
 * The settings will be the same for all sequences. 
 *
 * \def   ANALOG_PPG_RF_9_4KOHM  
 * R_f = 9.4kOhm, C_f = 33.6pF, I_DCS = 9.984uA, t_track = 1us
 * \def   ANALOG_PPG_RF_18_8KOHM 
 * R_f = 18.8kOhm, C_f = 33.6pF, I_DCS = 9.984uA, t_track = 1us
 * \def   ANALOG_PPG_RF_37_6KOHM 
 * R_f = 37.6kOhm, C_f = 33.6pF, I_DCS = 7.987uA, t_track = 1us
 * \def   ANALOG_PPG_RF_47KOHM 
 * R_f = 47kOhm, C_f = 33.6pF, I_DCS = 6.24uA, t_track = 1us
 * \def   ANALOG_PPG_RF_75KOHM 
 * R_f = 75kOhm, C_f = 33.6pF, I_DCS = 3.994uA, t_track = 3us
 * \def   ANALOG_PPG_RF_150KOHM  
 * R_f = 150kOhm, C_f = 33.6pF, I_DCS = 1.997uA, t_track = 10us
 * \def   ANALOG_PPG_RF_225KOHM  
 * R_f = 225kOhm, C_f = 33.6pF, I_DCS = 1.331uA, t_track = 18us
 * \def   ANALOG_PPG_RF_300KOHM  
 * R_f = 300kOhm, C_f = 33.6pF, I_DCS = 998.4nA, t_track = 25us
 * \def   ANALOG_PPG_RF_375KOHM  
 * R_f = 375kOhm, C_f = 27.3pF, I_DCS = 780nA, t_track = 26us
 * \def   ANALOG_PPG_RF_450KOHM  
 * R_f = 450kOhm, C_f = 23.1pF, I_DCS = 1.331uA, t_track = 26us
 * \def   ANALOG_PPG_RF_600KOHM  
 * R_f = 600kOhm, C_f = 16.8pF, I_DCS = 499.2nA, t_track = 25us
 * \def   ANALOG_PPG_RF_750KOHM  
 * R_f = 750kOhm, C_f = 12.6pF, I_DCS = 374.4nA, t_track = 23us
 * \def   ANALOG_PPG_RF_900KOHM  
 * R_f = 900kOhm, C_f = 10.5pF, I_DCS = 332.8nA, t_track = 23us
 * \def   ANALOG_PPG_RF_1_2MOHM  
 * R_f = 1.2MOhm, C_f = 8.4pF, I_DCS = 249.6nA, t_track = 25us
 * \def   ANALOG_PPG_RF_1_575MOHM  
 * R_f = 1.575MOhm, C_f = 6.3pF, I_DCS = 187.8nA, t_track = 25us
 * \def   ANALOG_PPG_RF_2_025MOHM  
 * R_f = 2.025MOhm, C_f = 4.2pF, I_DCS = 146.3nA, t_track = 21us
 * \def   ANALOG_PPG_RF_2_4MOHM  
 * R_f = 2.4MOhm, C_f = 4.2pF, I_DCS = 124.8nA, t_track = 25us
 * \def   ANALOG_PPG_RF_2_85MOHM 
 * R_f = 2.85MOhm, C_f = 4.2pF, I_DCS = 104nA, t_track = 31us  
 * \def   ANALOG_PPG_RF_3_6MOHM  
 * R_f = 3.6MOhm, C_f = 2.1pF, I_DCS = 83.2nA, t_track = 18us
 * \def   ANALOG_PPG_RF_4_65MOHM 
 * R_f = 4.65MOhm, C_f = 2.1pF, I_DCS = 62.6nA, t_track = 24us
 */
#define ANALOG_PPG_RF_9_4KOHM        0
#define ANALOG_PPG_RF_18_8KOHM       1
#define ANALOG_PPG_RF_37_6KOHM       2
#define ANALOG_PPG_RF_47KOHM         3
#define ANALOG_PPG_RF_75KOHM         4
#define ANALOG_PPG_RF_150KOHM        5
#define ANALOG_PPG_RF_225KOHM        6
#define ANALOG_PPG_RF_300KOHM        7
#define ANALOG_PPG_RF_375KOHM        8
#define ANALOG_PPG_RF_450KOHM        9
#define ANALOG_PPG_RF_600KOHM       10
#define ANALOG_PPG_RF_750KOHM       11
#define ANALOG_PPG_RF_900KOHM       12
#define ANALOG_PPG_RF_1_2MOHM       13
#define ANALOG_PPG_RF_1_575MOHM     14
#define ANALOG_PPG_RF_2_025MOHM     15
#define ANALOG_PPG_RF_2_4MOHM       16
#define ANALOG_PPG_RF_2_85MOHM      17
#define ANALOG_PPG_RF_3_6MOHM       18
#define ANALOG_PPG_RF_4_65MOHM      19  

/** \brief Sampling Mode Configuration. 
 *
 * These defines let the user choose different sampling modes. The user can choose from different modes of correlated double sampling (CDS):
 *   - digital: dark samples are subtracted from signal in digital domain
 *   - analog: dark samples are subtracted from signal in analog domain
 *   - enhanced data rate: signal and dark samples are returned
 *   - off: dark samples are not subtracted from signal
 * 
 * The settings can be choosen individually for each sequence 
 *
 * \def   ANALOG_PPG_DIRECT_SAMPLING_NO_DCS
 * Signal is directly sampled without (CDS), internal differential current source (DCS) is turned off
 * \def   ANALOG_PPG_DIRECT_SAMPLING_DCS 
 * Signal is directly sampled without (CDS), internal differential current source (DCS) is turned on
 * \def   ANALOG_PPG_CDS_ANALOG 
 * Dark samples are subtracted from signal in analog domain, internal DCS is turned on
 * \def   ANALOG_PPG_CDS_DIGITAL 
 * Dark samples are subtracted from signal in digital domain, internal DCS is turned on
 * \def   ANALOG_PPG_EDR 
 * Dark samples and signal samples are returned, internal DCS is turned on   
 */
#define ANALOG_PPG_DIRECT_SAMPLING_NO_DCS   0
#define ANALOG_PPG_DIRECT_SAMPLING_DCS      1
#define ANALOG_PPG_CDS_ANALOG               2
#define ANALOG_PPG_CDS_DIGITAL              3
#define ANALOG_PPG_EDR                      4

#define ANALOG_PPG_AGC_INVALID_BIT          27
#define ANALOG_PPG_AGC_INVALID              (1 << ANALOG_PPG_AGC_INVALID_BIT)

/** \struct   analog_ppg_sequence_config_t
 * \brief Mandatory Sequences Configuration. 
 *
 * These structs let the user set the configurations of the sequences.
 *
 * The settings can be choosen individually for each sequence 
 *
 * Mandatory settings, all fields have to be set:
 * - ch_in: input channels, 4-bit bitfield, i.e. lsb: channel0 and msb: channel3, 1 = enabled, 0 = disabled
 * - ch_out: output channels, 4-bit bitfield, i.e. lsb: channel0 and msb: channel3, 1 = enabled, 0 = disabled
 * - sampling_mode: choose from ANALOG_PPG_DIRECT_SAMPLING_NO_DCS, ANALOG_PPG_DIRECT_SAMPLING_DCS, ANALOG_PPG_CDS_ANALOG, ANALOG_PPG_EDR
 * - dac_code_vs: LED DAC code of the first sub-channel, integer, 0-255, I_LED_vs = u(dac_code_vs)/1275 * V_DAC_max / Ohm
 * - dac_code_ir: LED DAC code of the second sub-channel, integer, 0-255, I_LED_ir = u(dac_code_ir)/1275 * V_DAC_max / Ohm
 */
typedef struct {
  unsigned char ch_in:4;
  unsigned char ch_out:4;
  unsigned char sampling_mode:3;
  unsigned char dac_code_vs;
  unsigned char dac_code_ir;
} analog_ppg_sequence_config_t;

/** \struct   analog_ppg_sequence_config_optional_t
 * \brief Optional Sequences Configuration. 
 *
 * These structs let the user set the configurations of the sequences.
 *
 * The settings can be choosen individually for each sequence 
 *  
 * Optional settings, if used all fields have to be set:
 * - in_ch: sets input channel, 4-bit bitfield, i.e. lsb: channel0 and msb: channel3, 1 = en, 0 = dis
 * - in_invers_ch: inverts the polarity of the channel input terminals, 4-bit bitfield, i.e. lsb: channel0 and msb: channel3, 1 = inverted, 0 = normal
 * - out_anode_sel_ch: selects anodes of activated LEDs
 * - out_cathode_sel_ch: selects cathodes of activated LEDs
 * - out_subchannel_sel: 3: sample both subchannels, 1: sample only first sub-channel, 2: sample only second sub-channel
 */
typedef struct {
  unsigned char in_ch: 4;
  unsigned char in_inverse_ch:4;
  unsigned char out_anode_sel_ch:4;
  unsigned char out_cathode_sel_ch:4;
  unsigned char out_subchannel_sel:2;
} analog_ppg_sequence_config_optional_t;

/** \struct   analog_ppg_adc_output_truncated_t
 * \brief Return Samples. 
 *
 * This structs lets the user convert the 32bit samples into the proper bitfields.
 *
 * Truncated ADC data (default). ADC Data is truncated and additional information is added
 * - dummy: 5 unused bits
 * - led_dac_code: LED DAC code of current sub-channel
 * - dcs_cnfg_lsb: 3 lsbs of DCS config of current sub-channel
 * - adc_data: 16-bit truncated ADC data of current sub-channel
 */
typedef struct {
    int16_t adc_data;
    uint16_t dcs_cnfg_lsb:3, led_dac_code:8, dummy:5;
} analog_ppg_adc_output_truncated_t;  

/** \brief PPG Initialization. 
 * Initializes the analog sub-circuitry of the PPG part of VivoSoC:
 *   - Initializes SAR-ADC with proper values 
 *   - Initializes TIA with proper values
 *   - Initializes timing settings
 *   - Initializes all sequences
 *
 * Note: this function has to be called first in order to set everything properly. Settings which were done before calling this function may be reset to initial values.
 *
 * Important: this function is already enabling the clocks and the LDOs, as they are needed to write to the register
 *
 * \param   board_clk          Clock frequency of the clock which is provided to VivoSoC.
 * \param   binary_board_clk   1: input clk is multiple of 1.024MHz, 0: input clk is multiple of 1.0MHz
 * \return  0 if the given board_clk is supported, 1 if the given board_clk is not supported.
 */
int analog_ppg_init(unsigned char board_clk, _Bool binary_board_clk);

/** \brief Enable PPG.
 * Enables the clocks and the LDOs, pulls the SAR-ADC FSM out of reset and starts the TIA FSM in the given operating mode. 
 *
 * Note: in order to be able to properly enable PPG, the operating mode has to be set (-> analog_ppg_sequence_rtia_init(),  analog_ppg_sequence_ctia_init() or analog_ppg_calibration_init() was already called)
 *
 * \return 0 if the PPG is enabled properly, 1 if the operating mode was not set (-> no sequences initialized).
 */
int analog_ppg_enable(void);

/** \brief Disable PPG.
 * Disables the clocks and the LDOs, pulls the SAR-ADC FSM into reset and stops the TIA FSM. 
 *
 * Note: no settings are reset
 */
void analog_ppg_disable(void);

/** \brief Enable Dithering.
 * Enables 8-fold dithering. Can be used to reduced quantization noise. Dithering is on by default.
 *
 * Note: timing is adapted as well to maintain same sampling frequency.
 */
void analog_ppg_dithering_enable(void);

/** \brief Disable Dithering.
 * Enables 8-fold dithering. Dithering is on by default.
 *
 * Note: timing is adapted as well to maintain same sampling frequency.
 */
void analog_ppg_dithering_disable(void);

/** \brief Set SAR-ADC FSM Reset.
 * Allows to reset the SAR-ADC manually. Needs to be done after manual changes of the SAR-ADC settings
 *
 * \param value   0 to put SAR-ADC into reset, 1 to get SAR-ADC FSM out of reset.
 */
void analog_ppg_adc_reset_set(unsigned short value);

/** \brief Allow For Higher Sampling Frequencies.
 * To allow for higher sampling frequencies two settings are changed:
 *  - The FSM of the analog PPG part is not waiting for the ADC to fully settle. 
 *    This may result in loss of precision due to the given timing settings.
 *  - Disable duty cycling of TIA OTA. 
 *    This results in higher power consumption 
 *
 * Note: This function should only be called by experienced users
 */
void analog_ppg_set_pwv_fast_mode(void);

/** \brief Modify Sampling Freequency.
 * Allows to modify the sampling frequency while PPG is running. 
 *
 * Note: due to integer division the sampling frequency may not be exactly as given -> can check with analog_ppg_gs_get()
 *
 * \param fs   sampling frequency, integer
 */
void analog_ppg_fs_mod(unsigned int fs);

/** \brief Set Entire Timing By Hand.
 * Allows to modify the entire timing resulting in a broader range of sampling frequencies at the high side. 
 *
 * Note: This functionality cannot be used together with analog_ppg_fs_mod() or analog_ppg_sequence_rtia_init().
 *       This function should only be used by experienced users.
 *
 * The flag is defined as follows:
 *   bit0: t_idle
 *   bit1: t_ota_en
 *   bit2: t_oss
 *   bit3: t_rst_cf
 *   bit4: t_precharge
 *   bit5: t_int
 *   bit6: t_adc_track
 *   bit7: t_adc_sample
 *   bit8: t_inter_ch_rst
 *   bit9: t_scycle
 *
 * \param flag   bit is 0: timing will stay unchanged, bit is 1: timing will be changed
 * \param t_idle         set bit 0 to 1 to change
 * \param t_ota_en       set bit 1 to 1 to change
 * \param t_oss          set bit 2 to 1 to change
 * \param t_rst_cf       set bit 3 to 1 to change
 * \param t_precharge    set bit 4 to 1 to change
 * \param t_int          set bit 5 to 1 to change
 * \param t_adc_track    set bit 6 to 1 to change
 * \param t_adc_sample   set bit 7 to 1 to change
 * \param t_inter_ch_rst set bit 8 to 1 to change
 * \param t_scycle       set bit 9 to 1 to change
 */
void analog_ppg_timing_set_custom(unsigned short flag, unsigned short t_idle, unsigned char t_ota_en, unsigned char t_oss, unsigned char t_rst_cf, unsigned char t_precharge, unsigned char t_int, unsigned char t_adc_track, unsigned char t_adc_sample, unsigned char t_inter_ch_rst, unsigned char t_scycle);

/** \brief Get Current Sampling Frequency.
 *
 * Returns current sampling frequency of PPG. 
 *
 * \return Sampling frequency.
 */
unsigned int analog_ppg_fs_get(void);

/** \brief Modify LED Max/Min current settings.
 *
 * Allows to modify the maximum/minimum current settings for the LEDs. The user can choose between 7 different settings:
 *   - 0: DAC voltage range: 400mV/  0mV (0.6V DAC voltage reference) -> max LED current:  80mA / min LED current:  0mA 
 *   - 1: DAC voltage range: 510mV/  0mV (1.2V DAC voltage reference) -> max LED current: 102mA / min LED current:  0mA
 *   - 2: DAC voltage range: 600mV/  0mV (0.6V DAC voltage reference) -> max LED current: 120mA / min LED current:  0mA -> default configuration
 *   - 3: DAC voltage range: 720mV/  0mV (1.2V DAC voltage reference) -> max LED current: 144mA / min LED current:  0mA
 *   - 4: DAC voltage range: 450mV/150mV (0.6V DAC voltage reference) -> max LED current:  90mA / min LED current: 30mA
 *   - 5: DAC voltage range: 600mV/200mV (0.6V DAC voltage reference) -> max LED current: 120mA / min LED current: 40mA
 *   - 6: DAC voltage range: 800mV/260mV (1.2V DAC voltage reference) -> max LED current: 160mA / min LED current: 52mA
 *
 * Note: the settings will be the same for all output channels during all sequences.
 *
 * \param setting   setting number
 */
void analog_ppg_dac_current_cnfg_mod(unsigned char setting);

/** \brief Set TIA V_Ref Configuration.
 *
 * Sets TIA V_ref configuration of PPG. 
 *
 * Note: this setting will be the same for all sequences.
 *
 * Important: this function should only used by experienced users.
 *
 * \return TIA V_ref configuration, bitfield -> 0b0001: V_ref = 0.8V/0.4V -> V_delta = 0.4V / 0b0010: V_ref = 0.9V/0.3V -> V_delta = 0.6V / 0b0100: V_ref = 1.0V/0.2V -> V_delta = 0.8V / 0b1000: V_ref = 1.1V/0.1V -> V_delta = 1.0V
 */
void analog_ppg_tia_ref_advanced_set(unsigned short tia_ref_cnfg);

/** \brief Get Current TIA V_Ref Configuration.
 *
 * Returns current TIA V_ref configuration of PPG. 
 *
 * \return TIA V_ref configuration, bitfield -> 0b0001: V_ref = 0.8V/0.4V -> V_delta = 0.4V / 0b0010: V_ref = 0.9V/0.3V -> V_delta = 0.6V / 0b0100: V_ref = 1.0V/0.2V -> V_delta = 0.8V / 0b1000: V_ref = 1.1V/0.1V -> V_delta = 1.0V
 */
unsigned short analog_ppg_tia_ref_advanced_get(void);

/** \brief Enable Input Channel 3.
 *
 * Input channel 3 is shared with input channel 8 of ExG frontend
 */
void analog_ppg_input_3_enable(void);

/** \brief Disable Input Channel 3.
 *
 * Input channel 3 is shared with input channel 8 of ExG frontend
 */
void analog_ppg_input_3_disable(void);


/** \brief Set Common Settings of All Sequences for RTIA Mode.
 *
 * Configures all sequences in RTIA mode and manages other settings common to all sequences:
 *  - sampling frequency     (given value)
 *  - R_f configuration    (given setting)
 *  - I_dcs configuration    (according to R_f setting)
 *  - TIA V_ref configuration  (according to R_f setting)
 *  - C_f configuration    (according to R_f setting)
 *  - LED on-time        (according to R_f setting)
 *
 * Note: these settings will be the same for all sequences. This function 
 *
 * Important: this function should only used by experienced users. The function will not set any of the settings in case one or more sequences are already active -> function returns 1 in this case.
 *
 * \param r_f   R_f setting -> see TIA configuration for more information
 * \param f_s   Sampling frequency
 * \return 0 if properly initialized, 1 if sequences are already running
 */
int analog_ppg_sequence_rtia_init(unsigned short r_f, unsigned short f_s);

/** \brief Set Common Settings of All Sequences for CTIA Mode.
 *
 * Configures all sequences in RTIA mode and manages other settings common to all sequences:
 *
 * \param r_f   R_f setting -> see TIA configuration for more information
 * \param f_s   Sampling frequency
 * \return 0 if properly initialized, 1 if sequences are already running
 */
int analog_ppg_sequence_ctia_init(unsigned short r_f, unsigned short f_s);

/** \brief Set All Settings Needed for Calibration Mode.
 *
 * Configures sequences in Calibration mode and manages other settings needed for calibration:
 *
 * \param r_f   R_f setting -> see TIA configuration for more information
 * \param f_s   Sampling frequency
 * \return 0 if properly initialized, 1 if sequences are already running
 */
int analog_ppg_calibration_init(unsigned short r_f, unsigned short f_s);

/** \brief Initialize Sequence With Custom Settings.
 *
 * Set all settings manually, to optimize for special applications.
 *
 * Important: only for experienced users.
 *
 * \param mode           Operating mode
 * \param rf             rf configuration
 * \param cf             cf configuration
 * \param dcs            dcs configuration
 * \param t_track_vs     t_track configuration for vs sub-channel
 * \param t_track_ir     t_track configuration for ir sub-channel
 * \param t_track_dk_vs  t_track configuration for dark of vs sub-channel
 * \param t_track_dk_ir  t_track configuration for dark of ir sub-channel
 * \param ref_tia        ref_tia configuration
 * \return 0 if properly initialized, 1 if sequences are already running
 */
int analog_ppg_sequence_custom_init(unsigned char mode, unsigned short rf, unsigned char cf, unsigned char dcs, unsigned short t_track_vs, unsigned short t_track_ir, unsigned short t_track_dk_vs, unsigned short t_track_dk_ir, unsigned char ref_tia);

/** \brief Set Mandatory Settings For Each Sequence.
 *
 * Configures mandatory settings for each sequence (see analog_ppg_sequence_config_t for more information):
 *   - Input & Output channels, single mode
 *   - Sampling mode
 *   - VS & IR subchannels
 *   - DK configuration according to sampling mode
 *
 * Note: these settings may vary from sequence to sequence and have to be set for all the sequences that should run
 *
 * Important: this function will activate the sequence, settings for active sequences are overwritten.
 *
 * \param sequence   Number of sequence to be changed, possible values: 0-4
 * \param seq_cnfg   Mandatory configuration of sequence (see analog_ppg_sequence_config_t for more information)
 */
void analog_ppg_sequence_rtia_set(unsigned char sequence, analog_ppg_sequence_config_t seq_cnfg);

/** \brief Reset Sequence.
 *
 * Resets the sequence, i.e. sets the state of the sequence from active to inactive and disables all inputs and outputs
 *
 * Important: Active sequences need to be consecutive, lowest inactive sequence determines end of active sequences. 
 *
 * \param sequence   Number of sequence to be reset, possible values: 0-4
 */
void analog_ppg_sequence_reset(unsigned char sequence);

/** \brief Get Active Sequences.
 *
 * Returns a bitfield with the state of all sequences, 1: active, 0: inactive
 *  - Bit0: sequence 0
 *  - Bit1: sequence 1
 *  - Bit2: sequence 2
 *  - Bit3: sequence 3
 *  - Bit4: sequence 4
 *
 * \return    State of sequences
 */
unsigned char analog_ppg_active_sequences_get(void);

/** \brief Set Optional Settings For Each Sequence.
 *
 * Configures optional settings for each sequence (see analog_ppg_sequence_config_optional_t for more information):
 *   - Inverse channels
 *   - Anode selection
 *
 * Note: these settings may vary from sequence to sequence and have to be set for all the sequences that should run
 *
 * Important: settings for active sequences are overwritten.
 *
 * \param sequence   Number of sequence to be changed, possible values: 0-4
 * \param flag       Flag to indicate which setting to change (bit0: in_ch / 1: in_inverse_ch / 2: out_anode_sel / 3: out_cathode_sel / 4: out_subchannel_sel)
 * \param seq_cnfg   Optional configuration of sequence (see analog_ppg_sequence_config_optional_t for more information)
 * \return 0 if properly initialized, 1 if sequences are already running
 */
void analog_ppg_sequence_optional_set(unsigned char sequence, unsigned char flag, analog_ppg_sequence_config_optional_t seq_cnfg);

/** \brief Set LED DAC Code For Each Sequence.
 *
 * Configures LED DAC code for subchannel given according to flag:
 *   - 0: none
 *   - 1: set VS to dac_code_vs
 *   - 2: set IR to dac_code_ir
 *   - 3: set VS to dac_code_vs & IR to dac_code_ir
 *   - 4: inc VS by dac_code_vs
 *   - 5: dec VS by dac_code_vs
 *   - 6: inc IR by dac_code_ir
 *   - 7: dec IR by dac_code_ir
 *
 * Note: these settings may vary from sequence to sequence and have to be set for all the sequences that should run
 *
 * Important: settings for active sequences are overwritten.
 *
 * \param sequence      Number of sequence to be changed, possible values: 0-4
 * \param dac_code_vs   LED DAC code for VS subchannel, can be NULL if flag = 2
 * \param dac_code_ir   LED DAC code for IR subchannel, can be NULL if flag = 1
 * \param flag      Flag to choose subchannel
 */
void analog_ppg_sequence_dac_code_mod(unsigned char sequence, unsigned short dac_code_vs, unsigned short dac_code_ir, unsigned char flag);

/** \brief Get LED DAC code.
 *
 * Returns LED DAC code for a given sequence and subchannel
 *
 * \param sequence       Number of sequence to get the LED DAC code, possible values: 0-4
 * \param flag           0: vs subchannel, 1: ir subchannel
 * \return LED DAC code.
 */
unsigned char analog_ppg_sequence_dac_code_get(unsigned char sequence, unsigned char flag);

/** \brief Initialize Automatic Gain Control (AGC).
 *
 * AGC can only be used in ANALOG_PPG_EDR mode, once the AGC is turned on the driver will automatically change to this mode
 * and change back after the AGC was turned off. 
 *  
 * Set target for acquired samples and tolerances around target. Standard tolerances is maximum allowed distance to target.
 * Fine tolerance is used after each time the AGC changed to LED current, in order to fine tune.
 *
 * Important: the AGC is done for all the active subchannels based on every sample
 *
 * \param target         Target for AGC
 * \param tolerance      Standard Tolerance
 * \param fine_tolerance Fine Tolerance
 */
void analog_ppg_agc_init(unsigned short target, unsigned short tolerance, unsigned short fine_tolerance);

/** \brief Turn On Automatic Gain Control (AGC).
 *
 * Driver will store current settings and change to ANALOG_PPG_EDR mode. The AGC will be started given to current LED settings.
 */
void analog_ppg_agc_on(void);

/** \brief Turn Off Automatic Gain Control (AGC).
 *
 * The AGC will be stopped and the driver will change back to the previous settings. 
 *
 * \return Pointer to buffer containing LED currents for each sub channel.
 */
unsigned char * analog_ppg_agc_off(void);

/** \brief Get status of Automatic Gain Control (AGC).
 *
 * Return the status of the AGC.
 *
 * \return 0: AGC off, 1: AGC on.
 */
unsigned char analog_ppg_agc_status_get(void);


/** \brief Initialize Sample Buffers For Sequences.
 *
 * Initializes the pointers to the sample buffers for a sequence. Each sequences needs to have a separate buffer for each sub-channel. The length of the buffer needs to be the same for all sequences
 *
 * Important: the user has to allocate the buffers. If no buffer is given for an active sequence the samples will be dropped within the driver.
 *
 * \param sequence      Number of sequence, possible values: 0-4
 * \param vs            Pointer to buffer for the VS sub-channel for the given sequence
 * \param ir            Pointer to buffer for the IR sub-channel for the given sequence, set to NULL when sequence is configured as single channel
 * \param dk          Pointer to buffer for the DK samples of the VS sub-channel for the given sequence, set to NULL when sampling mode of sequence is not EDR
 * \param buffer_length Length of buffers, value will be updated only, when no sequence was initialized prior, i.e. all initialized sequences need to have the same buffer length
 */
void analog_ppg_get_samples_init(unsigned char sequence, unsigned int* vs, unsigned int* ir, unsigned int* dk, unsigned short buffer_length);

/** \brief De-Initialize Sample Buffers For Sequences.
 *
 * De-Initializes the pointers to the sample buffers for a sequence, i.e. setting them to NULL.
 *
 * Note: Once the buffers of all sequences are de-initialized the buffer length can be changed again when initializing the next sequence 
 * 
 * Important: the user has to free the buffers.
 *
 * \param sequence      Number of sequence, possible values: 0-4
 */
void analog_ppg_get_samples_deinit(unsigned char sequence);

/** \brief Set Number of Samples to Ignore at Beginning of Readout.
 *
 * Allows to set the number of samples to be ignored for each sub-channel at the beginning of the readout. This can be usefull, as the first samples after enabling PPG are not properly defined due to different internal dealys
 *
 * Note: default value is 5
 *
 * \param value   number of samples to ignore
 */
void analog_ppg_ignore_init_samples_set(unsigned char value);

/** \brief Get Current Setting of Number of Samples to Ignore at Beginning of Readout.
 *
 * Returns the current setting of the number of samples to be ignored for each sub-channel at the beginning of the readout. 
 *
 * \return number of samples to ignore
 */
unsigned char analog_ppg_ignore_init_samples_get(void);

/** \brief Start Samples Readout.
 *
 * Starts the samples readout, i.e. sets up the uDMA task to read samples from the PPG ADC and starts filling buffer. Each time n_samples of samples are received the driver will allocate all the samples to the proper buffer and call the task provided by the application
 *
 * This function needs to be called only once. The task provided by the applicaiton will only be called if there are samples ready.
 *
 * The argument returned to the task provided by the application is the index for the provided sample buffers for which a valid sample is stored for every sub-channel. 
 *
 * Note: n_samples can be kept small in order to keep the buffers small. 2-4 samples per subchannel are sufficient
 *
 * Important: n_adc_samples is the number of samples regarding all active channels and not per channel
 *
 * \param n_adc_samples        number of samples to read out from ExG ADC at once
 * \param n_interrupt_samples  number of samples par channel after which interrupt to user is issued
 * \param task                 task provided by the application, will be called as soon as new samples are ready
 */
//void analog_ppg_get_samples_start(unsigned int n_adc_samples, unsigned int n_interrupt_samples, plp_task_t task);
void analog_ppg_get_samples_start(unsigned int n_adc_samples, unsigned int n_interrupt_samples, int task);


/** \brief Start Samples Readout to L2.
 *
 * Starts the samples readout, i.e. sets up the uDMA task to read samples from the PPG ADC into L2. Each time n_samples of samples are received the task provided by the application will be called
 *
 * This function needs to be called only once. The task provided by the applicaiton will only be called if there are samples ready.
 *
 * The argument returned to the task provided by the application is the index for the provided sample buffers for which a valid sample is stored for every sub-channel. 
 *
 * Note: n_samples can be kept small in order to keep the buffers small. 2-4 samples per subchannel are sufficient
 *       use this function if samples will just be transfered to another peripheral without being processed
 *
 * Important: n_samples is the number of samples regarding all active subchannels and not per subchannel
 *            no buffers need to be provided, to get the buffer use (int *)plp_periph_copy_get_fromId(periphCopy, buffer), where periphCopy is the return of this function and buffer is the argument of the user_task
 *            samples are written directly into L2 buffer
 *
 * \param n_samples   number of samples to read out from PPG ADC at once
 * \param task        task provided by the application, will be called as soon as new samples are ready
 * \return plp_copy_t including all information about the copy transfer
 */
//plp_copy_t * analog_ppg_get_samples_L2_start(unsigned int n_samples, plp_task_t task);
int * analog_ppg_get_samples_L2_start(unsigned int n_samples, int task);

//!@}

/**        
 * @} end of analog_ppg group        
 */


/// @cond IMPLEM

// Debug stuff -> no docu, will be deleted anyways
#if ANALOG_PPG_DEBUG > 0
void analog_ppg_dbg_calibration(unsigned char update_calib, unsigned char mu_w, unsigned char mu_d);
void analog_ppg_dbg_print_shadow_copies(void);
#endif

/// @endcond

#else
#error API file for VivoSoC/PPG already included
#endif    // __RT_RT_ANALOG_PPG_H__