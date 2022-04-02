/* 
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 *
 * Authors: Jonathan Boesser (jboesser@iis.ee.ethz.ch)
 */

#ifndef __RT_RT_ANALOG_STIM_H__
#define __RT_RT_ANALOG_STIM_H__

/**
 * @ingroup groupDriversAnalog
 */

/** @defgroup analog_stim STIM
 * The following API gives access to the driver for the STIM front-end of the analog part of VivoSoC (IP 8). It supports the following functionalities:
 *   - Initialize, enable and disable STIM circuitry of VivoSoC
 *   - Configure stimulation/blocking pulses
 *   
 * The supported functionality covers the standard use-cases. Experienced users can still use the HAL functions for more advanced functionality, however they need to be carefull when interfering with the driver.
 *
 * NOTE: This file is ported from the old runtime and does not comply with the standards of the new runtime!
 */

/**        
 * @addtogroup analog_stim
 * @{        
 */

/**@{*/


/** \brief Debug Configuration for STIM driver. 
 *
 * This define sets the debug level for the analog STIM driver
 *   0 debug OFF
 */
#define ANALOG_STIM_DEBUG 0

/** \brief Selection for TAO Output of STIM Part. 
 *
 * These defines let the user connect different debug outputs to the TAO pin.
 *
 * \def   ANALOG_STIM_ANALOG_DEBUG_OUT_NONE  
 * Nothing connected
 * \def   ANALOG_STIM_ANALOG_DEBUG_OUT_COMP  
 * Negated comparator output connected, same comparator is used to calibrate both channels
 * \def   ANALOG_STIM_ANALOG_DEBUG_OUT_DAC  
 * DAC output voltage of channel A connected, channel B cannot be connected
 * \def   ANALOG_STIM_ANALOG_DEBUG_OUT_SENSE  
 * Sense voltage of channel A connected, channel B cannot be connected
 */
#define ANALOG_STIM_ANALOG_DEBUG_OUT_NONE	0
#define ANALOG_STIM_ANALOG_DEBUG_OUT_COMP	1
#define ANALOG_STIM_ANALOG_DEBUG_OUT_DAC	2
#define ANALOG_STIM_ANALOG_DEBUG_OUT_SENSE	4

/** \brief Sequence Selection of Channel A & B. 
 *
 * These defines let the user choose the correct sequence. 
 *
 * Note: bit[0:2]: sequence, bit3: channel
 *
 * \def   ANALOG_STIM_CH_A_SEQ_0  
 * Sequence 0 of channel A
 * \def   ANALOG_STIM_CH_A_SEQ_1  
 * Sequence 1 of channel A
 * \def   ANALOG_STIM_CH_A_SEQ_2  
 * Sequence 2 of channel A
 * \def   ANALOG_STIM_CH_A_SEQ_3  
 * Sequence 3 of channel A
 * \def   ANALOG_STIM_CH_A_SEQ_4  
 * Sequence 4 of channel A
 * \def   ANALOG_STIM_CH_B_SEQ_0  
 * Sequence 0 of channel B
 * \def   ANALOG_STIM_CH_B_SEQ_1  
 * Sequence 1 of channel B
 * \def   ANALOG_STIM_CH_B_SEQ_2  
 * Sequence 2 of channel B
 * \def   ANALOG_STIM_CH_B_SEQ_3  
 * Sequence 3 of channel B
 * \def   ANALOG_STIM_CH_B_SEQ_4  
 * Sequence 4 of channel B
 */
#define ANALOG_STIM_CH_A_SEQ_0 0	
#define ANALOG_STIM_CH_A_SEQ_1 1
#define ANALOG_STIM_CH_A_SEQ_2 2
#define ANALOG_STIM_CH_A_SEQ_3 3
#define ANALOG_STIM_CH_A_SEQ_4 4

#define ANALOG_STIM_CH_B_SEQ_0 8
#define ANALOG_STIM_CH_B_SEQ_1 9
#define ANALOG_STIM_CH_B_SEQ_2 10
#define ANALOG_STIM_CH_B_SEQ_3 11
#define ANALOG_STIM_CH_B_SEQ_4 12

/** \brief Physical Output Channel Selection of Channel A & B. 
 *
 * These defines let the user choose the correct output for each sequence. 
 *
 * Note: bit[0:2]: output, bit3: channel
 *
 * \def   ANALOG_STIM_CH_A_0  
 * Sequence 0 of channel A
 * \def   ANALOG_STIM_CH_A_1  
 * Sequence 1 of channel A
 * \def   ANALOG_STIM_CH_A_2  
 * Sequence 2 of channel A
 * \def   ANALOG_STIM_CH_B_0  
 * Sequence 0 of channel B
 * \def   ANALOG_STIM_CH_B_1  
 * Sequence 1 of channel B
 * \def   ANALOG_STIM_CH_B_2  
 * Sequence 2 of channel B
 */
#define ANALOG_STIM_CH_A_0 1
#define ANALOG_STIM_CH_A_1 2
#define ANALOG_STIM_CH_A_2 4

#define ANALOG_STIM_CH_B_0 9
#define ANALOG_STIM_CH_B_1 10
#define ANALOG_STIM_CH_B_2 12

/** \brief Channel A and B. 
 *
 * These defines let the user choose the correct channel. 
 *
 * \def   ANALOG_STIM_CH_A  
 * Channel A
 * \def   ANALOG_STIM_CH_B  
 * Channel B
 */
#define ANALOG_STIM_CH_A 0
#define ANALOG_STIM_CH_B 1

/** \brief Supported Charge Balancing Factors. 
 *
 * These defines let the user choose the charge balancing factor between pulse A and B. 
 *
 * \def   ANALOG_STIM_CH_BAL_1_TO_1  
 * Current of pulse B equal to pulse A / duration of pulse B equal to pulse A
 * \def   ANALOG_STIM_CH_BAL_2_TO_1  
 * Current of pulse B equal to half of pulse A / duration of pulse B equal to double of pulse A
 * \def   ANALOG_STIM_CH_BAL_4_TO_1  
 * Current of pulse B equal to a quater of pulse A / duration of pulse B equal to four times pulse A
 * \def   ANALOG_STIM_CH_BAL_8_TO_1  
 * Current of pulse B equal to an eight of pulse A / duration of pulse B equal to eight times pulse A
 */
#define ANALOG_STIM_CH_BAL_1_TO_1 1
#define ANALOG_STIM_CH_BAL_2_TO_1 2
#define ANALOG_STIM_CH_BAL_4_TO_1 4
#define ANALOG_STIM_CH_BAL_8_TO_1 8

/** \struct   analog_stim_pulse_shape_config_t
 *\brief Pulse Waveform. 
 *
 * Struct including all settings for pulse waveform.
 * 
 * - mode: bit0: PulseMode, bit1: PulseToggle, bit2: PulsePolarity
 * - t_pulse: duration of pulse, in us
 * - i_pulse: current of pulse, in uA
 * - charge_balancing_factor: use define ANALOG_STIM_CH_BAL_x_TO_1
 */
typedef struct {
  unsigned char mode:3; 
  unsigned short t_pulse:11;	
  unsigned short i_pulse;		
  unsigned char charge_balancing_factor; 
} analog_stim_pulse_shape_config_t;

/** \struct   analog_stim_pulse_train_config_t
 * \brief Pulse Train. 
 * Struct including all settings for pulse train.
 *
 * - pulse_frequency: repetition frequency of pulses, in Hz
 * - stim_channel: channel used for sequence, use define ANALOG_STIM_CH_x_y
 * - stim_duration: duration of stimulation, in us, 0 -> infinite stimulation
 */
typedef struct {
  unsigned short pulse_frequency; 
  unsigned short stim_channel;		
  unsigned short stim_duration;		
} analog_stim_pulse_train_config_t;

/** \brief STIM Initialization. 
 *
 * Initializes the analog sub-circuitry of the STIM part of VivoSoC
 *
 * Note: this function has to be called first in order to set everything properly. Settings which were done before calling this function may be reset to initial values.
 *
 * \param   board_clk          Clock frequency of the clock which is provided to VivoSoC.
 * \param   binary_board_clk   1: input clk is multiple of 1.024MHz, 0: input clk is multiple of 1.0MHz
 * \return  0 if the given board_clk is supported, 1 if the given board_clk is not supported.
 */
int analog_stim_init(unsigned char board_clk, _Bool binary_board_clk);

/** \brief Enable STIM.
 *
 * Enables the clocks and the LDOs 
 *
 * \return 0 if the STIM is enabled properly
 */
int analog_stim_enable(void);

/** \brief Disable STIM.
 *
 * Disables the clocks and the LDOs
 *
 * Note: no settings are reset
 */
void analog_stim_disable(void);

/** \brief Set Prescaler.
 *
 * Sets prescaler for STIM front-end, is set to get clock of 1MHz as default
 *
 * \param value: new prescaler setting = 2^value.
 * \return 0: prescaler changed, 1: value out of range.
 */
int analog_stim_prescale_set(unsigned char value);

/** \brief Set Debug Out Pin Connection.
 *
 * Connects the TAO debug out pin to given setting
 *
 * \param setting: us define ANALOG_STIM_ANALOG_DEBUG_OUT_x.
 * \return 0: setting changed, 1: value out of range.
 */
int analog_stim_analog_debug_out_set(unsigned char setting);

/** \brief Set Bias Configuration.
 *
 * Sets bias configuration of STIM front-end
 *
 * enable_flag:     Bit 0:    enable global bias
 *                      1:    enable comparator
 *                      2:    enable driver channel A
 *                      3:    enable DAC channel A
 *                      4:    enable driver channel B
 *                      5:    enable DAC channel B
 *                      6:    enable calibration
 * hi_setting_flag: Bit 0:    high comparator bias
 *                  Bit 2-1:  high driver channel A bias
 *                  Bit 4-3:  high DAC channel A bias
 *                  Bit 6-5:  high DAC channel B bias
 *                  Bit 7:    high calibration bias  
 * dac_buf_flag:    Bit 1-0:  DAC buffer channel A bias configuration
 *                  Bit 3-2:  DAC buffer channel B bias configuration                      
 *
 * \param enable_flag: enable/disable various bias currents.
 * \param hi_setting_flag: enhance various bias currents.
 * \param dac_buf_flag: configure DAC buffer bias currents.
 */
void analog_stim_bias_configuration_set(unsigned char enable_flag, unsigned char hi_setting_flag, unsigned char dac_buf_flag);

/** \brief Start Stimulation.
 *
 * Start stiumlation with settings set bevorhand. Channel A and channel B can be started separately
 *
 * Note: as long as duration is not 0 the stimulation will stop after the specified length
 *
 * Important: call analog_stim_pulse_shape_set() & analog_stim_pulse_train_set() for the given sequence(s) first
 *
 * \param channel: which channel to start, us define ANALOG_STIM_CH_x.
 * \return 0: stimulation started, 1: value out of range.
 */
int analog_stim_start_stimulation(unsigned char channel);

/** \brief Stop Stimulation.
 *
 * Manually stop stiumlation. Channel A and channel B can be started separately
 *
 * Note: as long as duration is not 0 the stimulation will stop after the specified length
 *
 * \param channel: which channel to stop, us define ANALOG_STIM_CH_x.
 * \return 0: stimulation stopped, 1: value out of range.
 */
int analog_stim_stop_stimulation(unsigned char channel);

/** \brief Configure Passive Charge Balancing.
 *
 * Lets the user configure the passive charge balancing, i.e. short the outputs inbetween pulses. Can be set for channel A and B separately
 *
 * \param channel: which channel to stop, us define ANALOG_STIM_CH_x.
 * \param value: 0: disable passive charge balancing, 1: enable passive charge balancing.
 * \return 0: configuration done, 1: channel out of range.
 */
int analog_stim_passive_charge_balancing_set(unsigned char channel, unsigned char value);

/** \brief Configure Pulse Shape.
 *
 * Lets the user configure the pulse shape of a given sequence
 *
 * Pulse shape includes pulse mode, pulse duration, pulse current and charge balancing factor
 *
 * \param sequence: which sequence to configure, us define ANALOG_STIM_CH_x_SEQ_y.
 * \param setting: setting of pulse shape.
 * \return 0: configuration done, 1: sequence out of range.
 */
int analog_stim_pulse_shape_set(unsigned char sequence, analog_stim_pulse_shape_config_t setting);

/** \brief Configure Charge Balancing Pulse Separation.
 *
 * Lets the user configure the separation of the two charge balancing pulses A and B.
 *
 * \param sequence: which sequence to configure, us define ANALOG_STIM_CH_x_SEQ_y.
 * \param value: separation of charge balancing pulses in us
 * \return 0: configuration done, 1: sequence out of range.
 */
int analog_stim_charge_balancing_pulse_separation_set(unsigned char sequence, unsigned char value);

/** \brief Configure Pulse Train.
 *
 * Lets the user configure the pulse train of a given sequence
 *
 * Important: in order to set the pulse repetition frequency properly call analog_stim_pulse_shape_set() and analog_stim_charge_balancing_pulse_separation_set() first!
 *
 * Pulse train includes pulse repetition frequency, stiumalation duration and stimulation channel
 *
 * \param sequence: which sequence to configure, us define ANALOG_STIM_CH_x_SEQ_y.
 * \param setting: setting of pulse train.
 * \return 0: configuration done, 1: sequence out of range.
 */
int analog_stim_pulse_train_set(unsigned char sequence, analog_stim_pulse_train_config_t setting);

//!@}

/**        
 * @} end of analog_stim group        
 */

#else
#error API file for VivoSoC/Stim already included
#endif    // __RT_RT_ANALOG_STIM_H__
