/* 
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 *
 * Authors: Jonathan Boesser (jboesser@iis.ee.ethz.ch)
 */

#ifndef __RT_RT_ANALOG_EXG_H__
#define __RT_RT_ANALOG_EXG_H__

/**
 * @ingroup groupDriversAnalog
 */

/** @defgroup analog_exg ExG
 * The following API gives access to the driver for the ExG front-end of the analog part of VivoSoC (IP 1, IP 2, IP 5). It supports the following functionalities:
 *   - Initialize, enable and disable ExG circuitry of VivoSoC
 *   - Configure sampling frequency (2*bandwidth) of the sampling of the analog signals
 *    - 8kHz/16kHz/32kHz and possible decimation factors 1/2/4/5/8/10/16/20/25/32/40
 *   - Setup interrupt based readout of data from analog circuitry
 *    - data is sorted by channels and put into buffers provided by user 
 *   
 * The supported functionality covers the standard use-cases. Experienced users can still use the HAL functions for more advanced functionality, however they need to be carefull when interfering with the driver.
 *
 * NOTE: This file is ported from the old runtime and does not comply with the standards of the new runtime!
 */

/**        
 * @addtogroup analog_exg
 * @{        
 */

/**@{*/


/** \brief Debug Configuration for ExG driver. 
 *
 * This define sets the debug level for the analog ExG driver
 *   0 debug OFF
 *   1 debug with LEDs
 *   2 debug with printfs
 *   3 debug with LEDs & printfs
 */
#define ANALOG_EXG_DEBUG 0

/** \brief Base Sampling Frequency Configuration. 
 *
 * These defines let the user choose different base sampling frequencies. Given the setting the optimal configurations of the SAR ADC are set.
 * 
 * The base sampling frequency will be the same for all channels 
 *
 * \def   ANALOG_EXG_BASE_FREQ_8KHZ  
 * Analog bandwidth of 3.2kHz (sampling frequency = 8kHz), possible number of channels: 1-9, suited for EEG, EMG, EOG, ECG
 * \def   ANALOG_EXG_BASE_FREQ_16KHZ  
 * Analog bandwidth of 6.4Hz (sampling frequency = 16kHz), possible number of channels: 1-8, suited for applications with higher sampling rates needed
 * \def   ANALOG_EXG_BASE_FREQ_32KHZ  
 * Analog bandwidth of 12.8kHz (sampling frequency = 32kHz), possible number of channels: 1-8, suited for applications with high sampling rates needed
 */
#define ANALOG_EXG_BASE_FREQ_8KHZ   8
#define ANALOG_EXG_BASE_FREQ_16KHZ 16
#define ANALOG_EXG_BASE_FREQ_32KHZ 32

/** \brief Sampling Frequency Divider. 
 *
 * These defines let the user choose different sampling frequencies divider. According to the divider the CIC filters are set. Same divider for all channels 
 * 
 * The sampling frequency will be the same for all channels 
 *
 * \def   ANALOG_EXG_FS_DIVIDER_1  
 * Divide Sampling Frequency by 1 (default setting), achievable sampling rates: 8kHz, 16kHz, 32kHz, Gain: 1
 * \def   ANALOG_EXG_FS_DIVIDER_2  
 * Divide Sampling Frequency by 2 (default setting), achievable sampling rates: 4kHz, 8kHz, 16kHz, Gain: 0.5
 * \def   ANALOG_EXG_FS_DIVIDER_4  
 * Divide Sampling Frequency by 4 (default setting), achievable sampling rates: 2kHz, 4kHz, 8kHz, Gain: 0.5
 * \def   ANALOG_EXG_FS_DIVIDER_5  
 * Divide Sampling Frequency by 5 (default setting), achievable sampling rates: 1.6kHz, 3.2kHz, 6.4kHz, Gain: 0.488281250
 * \def   ANALOG_EXG_FS_DIVIDER_8  
 * Divide Sampling Frequency by 8 (default setting), achievable sampling rates: 1kHz, 2kHz, 4kHz, Gain: 0.5
 * \def   ANALOG_EXG_FS_DIVIDER_10  
 * Divide Sampling Frequency by 10 (default setting), achievable sampling rates: 800Hz, 1.6kHz, 3.2kHz, Gain: 0.488281250
 * \def   ANALOG_EXG_FS_DIVIDER_16  
 * Divide Sampling Frequency by 16 (default setting), achievable sampling rates: 500Hz, 1kHz, 2kHz, Gain: 0.5
 * \def   ANALOG_EXG_FS_DIVIDER_20  
 * Divide Sampling Frequency by 20 (default setting), achievable sampling rates: 400Hz, 800Hz, 1.6kHz, Gain: 0.488281250
 * \def   ANALOG_EXG_FS_DIVIDER_25  
 * Divide Sampling Frequency by 25 (default setting), achievable sampling rates: 320Hz, 640Hz, 1.28kHz, Gain: 0.476837158203125
 * \def   ANALOG_EXG_FS_DIVIDER_32  
 * Divide Sampling Frequency by 32 (default setting), achievable sampling rates: 250Hz, 500Hz, 1kHz, Gain: 0.5
 * \def   ANALOG_EXG_FS_DIVIDER_40  
 * Divide Sampling Frequency by 40 (default setting), achievable sampling rates: 200Hz, 400Hz, 800Hz, Gain: 0.488281250
 */
#define ANALOG_EXG_FS_DIVIDER_1     1
#define ANALOG_EXG_FS_DIVIDER_2     2
#define ANALOG_EXG_FS_DIVIDER_4     4
#define ANALOG_EXG_FS_DIVIDER_5     5
#define ANALOG_EXG_FS_DIVIDER_8     8
#define ANALOG_EXG_FS_DIVIDER_10   10
#define ANALOG_EXG_FS_DIVIDER_16   16
#define ANALOG_EXG_FS_DIVIDER_20   20
#define ANALOG_EXG_FS_DIVIDER_25   25
#define ANALOG_EXG_FS_DIVIDER_32   32
#define ANALOG_EXG_FS_DIVIDER_40   40

/** \brief Enhanced CIC Settings Flag. 
 *
 * These defines let the user choose certain CIC settings to be changed individually for a given channel
 *
 * \def   ANALOG_EXG_ENHANCED_CIC_SETTING_RANGE_SHIFT  
 * Shift the range of the CIC filter output to the right
 */
#define ANALOG_EXG_ENHANCED_CIC_SETTING_RANGE_SHIFT 0

/** \brief Gain Setting. 
 *
 * These defines let the user choose different gain settings.
 * 
 * The gain setting may be different for each channel 
 *
 * \def   ANALOG_EXG_GAIN_128  
 * Set the gain of the channel to 128 -> pre-stage: 0b00 (8x) / post-stage: 0b0110 (16x)
 * \def   ANALOG_EXG_GAIN_256  
 * Set the gain of the channel to 256 -> pre-stage: 0b00 (8x) / post-stage: 0b1110 (32x)
 * \def   ANALOG_EXG_GAIN_512  
 * Set the gain of the channel to 512 -> pre-stage: 0b00 (8x) / post-stage: 0b1111 (64x)
 * \def   ANALOG_EXG_GAIN_1024  
 * Set the gain of the channel to 1024 -> pre-stage: 0b01 (16x) / post-stage: 0b1111 (64x)
 */
#define ANALOG_EXG_GAIN_128     0x06 
#define ANALOG_EXG_GAIN_256     0x0E 
#define ANALOG_EXG_GAIN_512     0x0F 
#define ANALOG_EXG_GAIN_1024    0x1F 

/** \brief DEO DAC Setting. 
 *
 * Initial values for the DEO DAC of the SAR, i.e. maximum, neutral and minimum
 * 
 * The DEO DAC Setting may be different for each channel
 *
 * \def   ANALOG_EXG_DEODAC_MAX  
 * Maximum value of DEO DAC range
 * \def   ANALOG_EXG_DEODAC_NEUTRAL  
 * Neutral position of DEO DAC, i.e. in the middle of the range
 * \def   ANALOG_EXG_DEODAC_MIN  
 * Minimum value of DEO DAC range
 */
#define ANALOG_EXG_DEODAC_MAX   0x3FFF
#define ANALOG_EXG_DEODAC_NEUTRAL 0x2000
#define ANALOG_EXG_DEODAC_MIN   0x0000

/** \brief PAO DAC Setting. 
 *
 * Initial values for the PAO DAC of the SAR, i.e. maximum, neutral and minimum
 * 
 * The PAO DAC Setting may be different for each channel
 *
 * \def   ANALOG_EXG_PAODAC_MAX  
 * Maximum value of PAO DAC range
 * \def   ANALOG_EXG_PAODAC_NEUTRAL  
 * Neutral position of PAO DAC, i.e. in the middle of the range
 * \def   ANALOG_EXG_PAODAC_MIN  
 * Minimum value of PAO DAC range
 */
#define ANALOG_EXG_PAODAC_MAX   0x7F
#if (PULP_CHIP == CHIP_VIVOSOC2) || (PULP_CHIP == CHIP_VIVOSOC2_1)  
#define ANALOG_EXG_PAODAC_NEUTRAL 0x3F
#else
#define ANALOG_EXG_PAODAC_NEUTRAL 0x40
#endif
#define ANALOG_EXG_PAODAC_MIN   0x00

/** \struct   analog_exg_channel_config_t
 * \brief Channel Configuration. 
 *
 * This struct let the user set the configurations of the channels.
 *
 * The settings can be choosen individually for each channel 
 *  
 * Mandatory settings, all fields have to be set:
 * - setting: sampling frequency setting of the channel, including trade-off between power and accuracy
 * - gain: set gain of the channel. gain=gain_lo*gain_hi according to the following table:
 *   lower bits: gain_lo b3 b2 b1 b0
 *                   1    0  0  0  1
 *                   2    0  0  1  1
 *                   4    1  0  0  0
 *                  12    1  1  0  0
 *                  16    0  1  1  0
 *                  32    1  1  1  0
 *                  64    1  1  1  1
 *   upper bits: gain_hi b4 b5
 *           8    0  0
 *          16    0  1
 *          24    1  0
 *          32    1  1
 *   suggested value: 0x6 -> gain = 128=8*16                    
 * - DEODAC: set initial value of DEODAC, suggested value: 0x2000
 * - lpf_bw: set bandwidth of low-pass filter: 0x0: 3.2kHz, 0x1: 6.4kHz, 0x2: 9.6kHz, 0x3: 12.8kHz, suggested value is 0x0
 * - hpf_en: enble high-pass filter, if enabled turn off PAODAC, i.e. 0x00
 * - PAODAC: set initial value of PAODAC, suggested value: 0x40
 */
typedef struct {
  unsigned char gain:6;
  unsigned short DEODAC:14;
  unsigned char hpf_en:1;
  unsigned char PAODAC:7;
} analog_exg_channel_config_t;

/** \struct   analog_exg_adc_output_truncated_t
 * \brief Return Samples. 
 *
 * This structs lets the user convert the 32bit samples into the proper bitfields.
 * 
 * Truncated ADC data (default). ADC Data is truncated and additional information is added
 * - dummy: 15 unused bits
 * - jump: bit to indicate if jump happend due to change of DEODAC value
 * - adc_data: 16-bit truncated ADC data of current channel (2 lsbs are always 0)
 */
typedef struct {
    int16_t adc_data;
    uint16_t jump:1, dummy:15;
} analog_exg_adc_output_truncated_t; 

/** \brief ExG Initialization. 
 *
 * Initializes the analog sub-circuitry of the ExG part of VivoSoC:
 *   - Initializes SAR-ADC with proper values 
 *   - Initializes all channels (initially off)
 *   - Initializes all CIC-filters (initially bypassed)
 *
 * Note: this function has to be called first in order to set everything properly. Settings which were done before calling this function may be reset to initial values.
 *
 * Note: depending on the base sampling frequency setting the internal/external clks have to be altered
 *              
 *        8kHz VivoSoC2:     8MHz, 16MHz, 32MHz, 48MHz, 64MHz, 80MHz, 96MHz
 *             VivoSoC2.001: 8MHz, 16MHz, 32MHz, 64MHz
 *       16kHz VivoSoC2:     16MHz, 32MHz, 64MHz, 96MHz
 *             VivoSoC2.001: 16MHz, 32MHz, 64MHz 
 *       32kHz VivoSoC2:     32MHz, 64MHz
 *             VivoSoC2.001: 32MHz, 64MHz 
 *
 * \param   board_clk          Clock frequency of the clock which is provided to VivoSoC.
 * \param   binary_board_clk   1: input clk is multiple of 1.024MHz, 0: input clk is multiple of 1.0MHz
 * \param   setting        base sampling frequency setting
 * \return  0 if the given board_clk is supported, 1 if the given board_clk is not supported.
 */
int analog_exg_init(unsigned char board_clk, _Bool binary_board_clk, unsigned char setting);

/** \brief Enable ExG.
 *
 * Enables the PGND buffer, the clocks and the LDOs and pulls the SAR-ADC FSM out of reset 
 *
 * \return 0 if the ExG is enabled properly
 */
int analog_exg_enable(void);

/** \brief Disable ExG.
 *
 * Pushes the SAR-ADC FSM into reset, disables the clocks and the LDOs and disables the PGND buffer. 
 *
 * Note: no settings are reset
 */
void analog_exg_disable(void);

/** \brief Set SAR-ADC FSM Reset.
 *
 * Allows to reset the SAR-ADC manually. Needs to be done after manual changes of the SAR-ADC settings
 *
 * \param value   0 to put SAR-ADC into reset, 1 to get SAR-ADC FSM out of reset.
 */
void analog_exg_adc_reset_set(unsigned short value);

/** \brief Set divider for base sampling frequency.
 *
 * Set the divider for the base sampling frequency, i.e. function configures CIC
 *
 * Note: The divider will be the same for all channels
 *
 * Important: CIC has a gain according to the following calculation: 
 *            (mult factor) = (setting)^3/2^(truncation)
 *    setting   truncation   mult factor
 *       1           0            1               (CIC not active)
 *       2           4            0.5
 *       4           7            0.5
 *       5           8            0.48828125
 *       8          10            0.5
 *      10          11            0.48828125
 *      16          13            0.5
 *      20          14            0.48828125
 *      25          15            0.476837158203125
 *      32          16            0.5
 *      40          17            0.48828125
 *
 * \param setting    Division factor, possible are: 1, 2, 4, 5, 8, 10, 16, 20, 25, 32, 40
 * \return 0 if properly initialized, 1 if channel number wrong
 */
int analog_exg_base_frequency_divider_set(unsigned char setting);

/** \brief Set divider for base sampling frequency (enhanced, should only be used by experienced users).
 * 
 * Set the divider for the base sampling frequency, i.e. function configures CIC
 *
 * Note: The divider will be the same for all channels, according to what was set by analog_exg_base_frequency_divider_set();
 *
 * Additionally some of the settings can be changed for a specific channel. Implemented are:
 *   - ANALOG_EXG_ENHANCED_CIC_SETTING_RANGE_SHIFT: shift the range of the result of the CIC filter to the right in order to keep more of the LSBs
 *
 * \param channel    Channel number, possible are 0-8
 * \param flag   Flag for setting to be changed for given channel
 * \param value      Value of setting to be changed for given channel
 * \return 0 if properly initialized, 1 if channel number wrong
 */
int analog_exg_enhanced_base_frequency_divider_set(unsigned char channel, unsigned char flag, unsigned char value);

/** \brief Get Current Sampling Frequency.
 *
 * Returns current sampling frequency of ExG. 
 *
 * \return Sampling frequency setting.
 */
unsigned int analog_exg_fs_get(void);

/** \brief Set settings of a specific channel.
 *
 * Configures the following settings of the givien channel:
 *   - gain         (6bit, 0x01: lowest (8x), 0x3F: highest (2048x), 0x06: recommended (128x))
 *   - DEODAC setting   (14bit, 0x0: off, 0x1: lowest, 0x3FFF: highest, 0x2000: recommended)
 *   - PAODAC setting   (7bit, 0x0: off, 0x1: lowest, 0x7F: highest, 0x40: recommended)
 *   - HPF setting    (1: enable, 0:disable(recommended))
 *   - LPF setting      (0b00: 3.2kHz (recommended), 0b01: 6.4kHz, 0b10: 9.6kHz, 0b11: 12.8kHz)
 *   - Sampling setting (sets sampling rate, including oversampling)
 *
 * Note: these settings may be different for each channel 
 *
 * Important: This function has to be called for each channel before enabling the channel -> enabling will not work
 *
 * \param channel    Channel to configure
 * \param ch_cnfg    Channel configurations
 * \return 0 if properly initialized, 1 if channel number wrong
 */
int analog_exg_channel_set(unsigned char channel, analog_exg_channel_config_t ch_cnfg);

/** \brief Set DEODAC Value.
 *
 * Set DEODAC value.
 * \param channel    Channel to configure
 * \param mode     0: set to given value, 1: increase by given value, 2: decrease by given value
 * \param value    Value to set DEODAC to, depending on mode
 */
void analog_exg_channel_deodac_set(unsigned char channel, unsigned char mode, unsigned int value);

/** \brief Set PAODAC Value.
 *
 * Set PAODAC value.
 * \param channel    Channel to configure
 * \param mode     0: set to given value, 1: increase by given value, 2: decrease by given value
 * \param value    Value to set PAODAC to, depending on mode
 */
void analog_exg_channel_paodac_set(unsigned char channel, unsigned char mode, unsigned int value);

/** \brief Enable/Disable Channel HPF.
 * 
 * Enable/Disable internal high-pass filter
  \param channel    Channel to configure
  \param enable     0: disable HPF, 1: enable HPF
  */
void analog_exg_channel_hpf_set(unsigned char channel, unsigned char enable);

/** \brief Set Channel LPF Bandwidth.
 *
 * Set bandwidth of low-pass filter for each channel
 * \param channel    Channel to configure
 * \param value    0: 3.2kHz, 1: 6.4kHz, 9.6kHz, 12.8kHz
 */
void analog_exg_channel_lpf_set(unsigned char channel, unsigned char value);

/** \brief Enable Channel.
 *
 * Function will check if channel number out of range, if channel settings not set, if buffer is not 
 * configured for given channel and if the channels is already enabled. Will return 0 if any of the 
 * above is true.
 * Enabled channels do not have to be in sequence, any channel may be enabled. The driver will take
 * care of configuring the AFE properly
 * Sampling frequency setting is automatically updated
 *
 * Note: 9 channels can only be enabled for 8kHz base sample frequency!!
 *
 * \param channel    Channel to enable
 * \return       0: channel enabled, 1: channel enabling failed.
 */
int analog_exg_channel_enable(unsigned char channel);

/** \brief Disable Channel.
 *
 * Function will check if channel number out of range and if the channels is not enabled. Will return 0 if any of the 
 * above is true.
 * Any of the channels may be disabled any time 
 * Sampling frequency setting is automatically updated
 * \param channel    Channel to enable
 * \return       0: channel enabled, 1: channel enabling failed.
 */
int analog_exg_channel_disable(unsigned char channel);


/** \brief Initialize Sample Buffers For Channels.
 *
 * Initializes the pointers to the sample buffers for a channel. The length of the buffer needs to be the same for all channels
 *
 * Important: the user has to allocate the buffers. If no buffer is given for an active channel the samples will be dropped within the driver.
 *
 * \param channel    Number of channel, possible values: 0-8
 * \param buffer     Pointer to buffer for the given channel
 * \param length   Length of buffers, value will be updated only, when no channel was initialized prior, i.e. all initialized channels need to have the same buffer length
 */
int analog_exg_get_samples_init(unsigned char channel, unsigned int* buffer, unsigned short length);

/** \brief De-Initialize Sample Buffers For Channels.
 *
 * De-Initializes the pointers to the sample buffers for a sequence, i.e. setting them to NULL.
 *
 * Note: Once the buffers of all sequences are de-initialized the buffer length can be changed again when initializing the next sequence 
 * 
 * Important: the user has to free the buffers.
 *
 * \param channel      Number of sequence, possible values: 0-4
 */
int analog_exg_get_samples_deinit(unsigned char channel);

/** \brief Set Number of Samples to Ignore at Beginning of Readout.
 *
 * Allows to set the number of samples to be ignored for each sub-channel at the beginning of the readout. This can be usefull, as the first samples after enabling ExG are not properly defined due to different internal dealys
 *
 * Note: default value is 5
 *
 * \param value   number of samples to ignore
 */
void analog_exg_ignore_init_samples_set(unsigned char value);

/** \brief Get Current Setting of Number of Samples to Ignore at Beginning of Readout.
 *
 * Returns the current setting of the number of samples to be ignored for each sub-channel at the beginning of the readout. 
 *
 * \return number of samples to ignore
 */
unsigned char analog_exg_ignore_init_samples_get(void);

/** \brief Start Samples Readout.
 *
 * Starts the samples readout, i.e. sets up the uDMA task to read samples from the ExG ADC and starts filling buffer. Each time n_samples of samples are received the driver will allocate all the samples to the proper buffer and call the task provided by the application
 *
 * This function needs to be called only once. The task provided by the applicaiton will only be called if there are samples ready.
 *
 * The argument returned to the task provided by the application is the index for the provided sample buffers for which a valid sample is stored for every channel. 
 *
 * Important: n_adc_samples is the number of samples regarding all active channels and not per channel
 *
 * \param n_adc_samples        number of samples to read out from ExG ADC at once
 * \param n_interrupt_samples  number of samples par channel after which interrupt to user is issued
 * \param task                 task provided by the application, will be called as soon as new samples are ready
 */
//void analog_exg_get_samples_start(unsigned int n_adc_samples, unsigned int n_interrupt_samples, plp_task_t task);
void analog_exg_get_samples_start(unsigned int n_adc_samples, unsigned int n_interrupt_samples, int task);

/** \brief Start Samples Readout to L2.
 *
 * Starts the samples readout, i.e. sets up the uDMA task to read samples from the ExG ADC into L2. Each time n_samples of samples are received the task provided by the application will be called
 *
 * This function needs to be called only once. The task provided by the applicaiton will only be called if there are samples ready.
 *
 * The argument returned to the task provided by the application is the index for the provided sample buffers for which a valid sample is stored for every channel. 
 *
 * Important: n_adc_samples is the number of samples regarding all active subchannels and not per subchannel
 *            no buffers need to be provided, to get the buffer use (int *)plp_periph_copy_get_fromId(periphCopy, buffer), where periphCopy is the return of this function and buffer is the argument of the user_task
 *            samples are written directly into L2 buffer
 *
 * \param n_adc_samples number of samples to read out from ExG ADC at once
 * \param task          task provided by the application, will be called as soon as new samples are ready
 * \return plp_copy_t   including all information about the copy transfer
 */
//plp_copy_t * analog_exg_get_samples_L2_start(unsigned int n_adc_samples, plp_task_t task);
int * analog_exg_get_samples_L2_start(unsigned int n_adc_samples, int task);

/** \brief Start Samples Readout to L1.
 *
 * Starts the samples readout, i.e. sets up the uDMA task to read samples from the ExG ADC into L1. Each time n_samples of samples are received the task provided by the application will be called
 *
 * This function needs to be called only once. The task provided by the applicaiton will only be called if there are samples ready.
 *
 * The argument returned to the task provided by the application is the index for the provided sample buffers for which a valid sample is stored for every channel. 
 *
 * Important: n_adc_samples is the number of samples regarding all active subchannels and not per subchannel
 *            no buffers need to be provided, to get the buffer use (int *)plp_periph_copy_get_fromId(periphCopy, buffer), where periphCopy is the return of this function and buffer is the argument of the user_task
 *            samples are written directly into L2 buffer
 *
 * \param n_adc_samples number of samples to read out from ExG ADC at once
 * \param task          task provided by the application, will be called as soon as new samples are ready
 * \return plp_copy_t   including all information about the copy transfer
 */
//plp_copy_t * analog_exg_get_samples_L1_start(unsigned int n_adc_samples, plp_task_t task);
int * analog_exg_get_samples_L1_start(unsigned int n_adc_samples, int task);

//!@}

/**        
 * @} end of analog_exg group        
 */

#else
#error API file for VivoSoC/ExG already included
#endif    // __RT_RT_ANALOG_EXG_H__