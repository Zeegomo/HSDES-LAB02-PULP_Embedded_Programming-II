/* 
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 *
 * Authors: Jonathan Boesser (jboesser@iis.ee.ethz.ch)
 */

#ifndef __ARCHI_ANALOG_STIM_H__
#define __ARCHI_ANALOG_STIM_H__

/*
 * Analog STIM ARCHI file for VivoSoC IP: STIM_IP
 * Use this file for STIM IP compliant to VivoSoC3
 *
 */

/*
 * STIM_IP: Miur Nerve Stimulator and Blocker
 */

// Register defines, register number according to register offset in IP
#define STIM_GSA                        			0x00	// rw
#define STIM_TCAL                        			0x01	// rw
#define STIM_PSR_A_0_0                    			0x02	// rw
#define STIM_PSR_A_0_1                    			0x03	// rw
#define STIM_PSR_A_0_2                    			0x04	// rw
#define STIM_PSR_A_0_3                    			0x05	// rw
#define STIM_PSR_A_1_0                    			0x06	// rw
#define STIM_PSR_A_1_1                    			0x07	// rw
#define STIM_PSR_A_1_2                    			0x08	// rw
#define STIM_PSR_A_1_3                    			0x09	// rw
#define STIM_PSR_A_2_0                    			0x0A	// rw
#define STIM_PSR_A_2_1                    			0x0B	// rw
#define STIM_PSR_A_2_2                    			0x0C	// rw
#define STIM_PSR_A_2_3                    			0x0D	// rw
#define STIM_PSR_A_3_0                    			0x0E	// rw
#define STIM_PSR_A_3_1                    			0x0F	// rw
#define STIM_PSR_A_3_2                    			0x10	// rw
#define STIM_PSR_A_3_3                    			0x11	// rw
#define STIM_PSR_A_4_0                    			0x12	// rw
#define STIM_PSR_A_4_1                    			0x13	// rw
#define STIM_PSR_A_4_2                    			0x14	// rw
#define STIM_PSR_A_4_3                    			0x15	// rw
#define STIM_GSB                         			0x16	// rw
#define STIM_PSR_B_0_0                    			0x17	// rw
#define STIM_PSR_B_0_1                    			0x18	// rw
#define STIM_PSR_B_0_2                    			0x19	// rw
#define STIM_PSR_B_0_3                    			0x1A	// rw
#define STIM_PSR_B_1_0                    			0x1B	// rw
#define STIM_PSR_B_1_1                    			0x1C	// rw
#define STIM_PSR_B_1_2                    			0x1D	// rw
#define STIM_PSR_B_1_3                    			0x1E	// rw
#define STIM_PSR_B_2_0                    			0x1F	// rw
#define STIM_PSR_B_2_1                    			0x20	// rw
#define STIM_PSR_B_2_2                    			0x21	// rw
#define STIM_PSR_B_2_3                    			0x22	// rw
#define STIM_PSR_B_3_0                    			0x23	// rw
#define STIM_PSR_B_3_1                    			0x24	// rw
#define STIM_PSR_B_3_2                    			0x25	// rw
#define STIM_PSR_B_3_3                    			0x26	// rw
#define STIM_PSR_B_4_0                    			0x27	// rw
#define STIM_PSR_B_4_1                    			0x28	// rw
#define STIM_PSR_B_4_2                    			0x29	// rw
#define STIM_PSR_B_4_3                    			0x2A	// rw
#define STIM_BCR                         			0x2B	// rw
#define STIM_OR_0                         			0x2C	// w

// Bitfield defines

// stimGSA
#define STIM_GSA_MODE_OFFSET                     	0x00
#define STIM_GSA_MODE_NBITS                     	0x02

#define STIM_GSA_DRIV_AL_ON_OFFSET                  0x02
#define STIM_GSA_DRIV_AL_ON_NBITS                   0x01

#define STIM_GSA_DAC_AL_ON_OFFSET                   0x03
#define STIM_GSA_DAC_AL_ON_NBITS                    0x01

#define STIM_GSA_T_SHORT_OFFSET                     0x04
#define STIM_GSA_T_SHORT_NBITS                     	0x04

#define STIM_GSA_T_OTA_EN_OFFSET                    0x08
#define STIM_GSA_T_OTA_EN_NBITS                     0x04

#define STIM_GSA_DAC_CNFG_RES_OFFSET                0x0C
#define STIM_GSA_DAC_CNFG_RES_NBITS                 0x03

#define STIM_GSA_DAC_REF_SEL_OFFSET                 0x0F
#define STIM_GSA_DAC_REF_SEL_NBITS                  0x01

#define STIM_GSA_ANALOG_DBG_OUT_OFFSET				0x10
#define STIM_GSA_ANALOG_DBG_OUT_NBITS				0x03

#define STIM_GSA_TAO_SEL_COMP_OFFSET                0x10
#define STIM_GSA_TAO_SEL_COMP_NBITS                 0x01

#define STIM_GSA_TAO_SEL_DAC_OFFSET                 0x11
#define STIM_GSA_TAO_SEL_DAC_NBITS                  0x01

#define STIM_GSA_TAO_SEL_SENSE_OFFSET               0x12
#define STIM_GSA_TAO_SEL_SENSE_NBITS                0x01

#define STIM_GSA_CAL_CH_SEL_OFFSET                  0x13
#define STIM_GSA_CAL_CH_SEL_NBITS                   0x01

#define STIM_GSA_CAL_S_CH_SEL_OFFSET                0x14
#define STIM_GSA_CAL_S_CH_SEL_NBITS                 0x02

#define STIM_GSA_CAL_NO_INT_RES_MODE_OFFSET         0x16
#define STIM_GSA_CAL_NO_INT_RES_MODE_NBITS          0x01

#define STIM_GSA_CH_SHORT_CH_BAL_A_OFFSET           0x17
#define STIM_GSA_CH_SHORT_CH_BAL_A_NBITS            0x01

#define STIM_GSA_CH_SHORT_CH_BAL_B_OFFSET           0x10
#define STIM_GSA_CH_SHORT_CH_BAL_B_NBITS            0x01

#define STIM_GSA_PRESCALE_OFFSET                    0x18
#define STIM_GSA_PRESCALE_NBITS                     0x03

#define STIM_GSA_EN_CON_PGND_A_OFFSET               0x1B
#define STIM_GSA_EN_CON_PGND_A_NBITS                0x01

#define STIM_GSA_EN_CON_PGND_B_OFFSET               0x11
#define STIM_GSA_EN_CON_PGND_B_NBITS                0x01

#define STIM_GSA_T_CAL_WAIT_OFFSET                  0x1C
#define STIM_GSA_T_CAL_WAIT_NBITS                   0x04

// stimTCAL
#define STIM_T_CAL_COMP_GATE_DEG_CNFG_OFFSET        0x00
#define STIM_T_CAL_DRIV_GATE_DEG_CNFG_NBITS         0x03

#define STIM_T_CAL_DRIV_START_OFFSET                0x04
#define STIM_T_CAL_DRIV_START_NBITS                 0x03

#define STIM_T_CAL_PULSE_OFFSET						0x08
#define STIM_T_CAL_PULSE_NBITS                     	0x03

#define STIM_T_CAL_COMP_OFFSET                     	0x0C
#define STIM_T_CAL_COMP_NBITS                     	0x02

#define STIM_T_CAL_EN_CURRENT_CHECK_OFFSET          0x0E
#define STIM_T_CAL_EN_CURRENT_CHECK_NBITS           0x02

#define STIM_T_CAL_I_REF_SETTLE_OFFSET              0x10
#define STIM_T_CAL_I_REF_SETTLE_NBITS               0x04

// Macro to calculate program sequence register
#define ANALOG_ARCHI_STIM_PSR(ch,seq,reg) ((STIM_PSR_A_0_0 + (ch<<4) + (ch<<2) + (ch<<0) + (seq<<2) + reg)<<2)

// stimPSR
// i_j_0
#define STIM_PSR_i_j_0 								0x00

#define STIM_PSR_i_j_0_CH_SEL_OFFSET 				0x00
#define STIM_PSR_i_j_0_CH_SEL_NBITS 				0x03

#define STIM_PSR_i_j_0_PULSE_SETTING_OFFSET			0x03
#define STIM_PSR_i_j_0_PULSE_SETTING_NBITS			0x03

#define STIM_PSR_i_j_0_PULSE_MODE_OFFSET 			0x03
#define STIM_PSR_i_j_0_PULSE_MODE_NBITS 			0x01

#define STIM_PSR_i_j_0_PULSE_TOGGLE_OFFSET 			0x04
#define STIM_PSR_i_j_0_PULSE_TOGGLE_NBITS 			0x01

#define STIM_PSR_i_j_0_PULSE_POLARITY_OFFSET 		0x05
#define STIM_PSR_i_j_0_PULSE_POLARITY_NBITS 		0x01

#define STIM_PSR_i_j_0_T_DEAD_OFFSET 				0x06
#define STIM_PSR_i_j_0_T_DEAD_NBITS 				0x06

#define STIM_PSR_i_j_0_T_IDLE_OFFSET 				0x10
#define STIM_PSR_i_j_0_T_IDLE_NBITS 				0x0E
// i_j_1
#define STIM_PSR_i_j_1 								0x01

#define STIM_PSR_i_j_1_DURATION_OFFSET 				0x00
#define STIM_PSR_i_j_1_DURATION_NBITS 				0x0F
// i_j_2
#define STIM_PSR_i_j_2  							0x02	

#define STIM_PSR_i_j_2_DAC_CODE_A_OFFSET 			0x00
#define STIM_PSR_i_j_2_DAC_CODE_A_NBITS 			0x07

#define STIM_PSR_i_j_2_R_SENSE_A_OFFSET 			0x08
#define STIM_PSR_i_j_2_R_SENSE_A_NBITS 				0x04

#define STIM_PSR_i_j_2_T_PULSE_A_OFFSET 			0x10
#define STIM_PSR_i_j_2_T_PULSE_A_NBITS 				0x0B

#define STIM_PSR_i_j_2_EN_MATRIX_OFFSET 			0x1B
#define STIM_PSR_i_j_2_EN_MATRIX_NBITS 				0x01

#define STIM_PSR_i_j_2_ALT_POS_PIN_OFFSET 			0x1C
#define STIM_PSR_i_j_2_ALT_POS_PIN_NBITS 			0x02
// i_j_3
#define STIM_PSR_i_j_3  							0x03	

#define STIM_PSR_i_j_2_DAC_CODE_B_OFFSET 			0x00
#define STIM_PSR_i_j_2_DAC_CODE_B_NBITS 			0x07

#define STIM_PSR_i_j_2_R_SENSE_B_OFFSET 			0x08
#define STIM_PSR_i_j_2_R_SENSE_B_NBITS 				0x04

#define STIM_PSR_i_j_2_T_PULSE_B_OFFSET 			0x10
#define STIM_PSR_i_j_2_T_PULSE_B_NBITS 				0x0B
// i_j_2 & i_j_3
#define STIM_PSR_i_j_2_3_DAC_CODE_OFFSET 			0x00
#define STIM_PSR_i_j_2_3_DAC_CODE_NBITS 			0x07

#define STIM_PSR_i_j_2_3_R_SENSE_OFFSET 			0x08
#define STIM_PSR_i_j_2_3_R_SENSE_NBITS 				0x03

#define STIM_PSR_i_j_2_3_T_PULSE_OFFSET 			0x10
#define STIM_PSR_i_j_2_3_T_PULSE_NBITS 				0x0B

// stimGSB
#define STIM_GSB_MODE_OFFSET 						0x00
#define STIM_GSB_MODE_NBITS 						0x02

#define STIM_GSB_DRIV_AL_ON_OFFSET 					0x02
#define STIM_GSB_DRIV_AL_ON_NBITS 					0x01

#define STIM_GSB_DAC_AL_ON_OFFSET 					0x03
#define STIM_GSB_DAC_AL_ON_NBITS 					0x01

#define STIM_GSB_T_SHORT_OFFSET 					0x04
#define STIM_GSB_T_SHORT_NBITS 						0x04

#define STIM_GSB_T_OTA_EN_OFFSET 					0x08
#define STIM_GSB_T_OTA_EN_NBITS 					0x04

#define STIM_GSB_DAC_CNFG_RES_OFFSET 				0x0C
#define STIM_GSB_DAC_CNFG_RES_NBITS 				0x03

#define STIM_GSB_DAC_REF_SEL_OFFSET 				0x0F
#define STIM_GSB_DAC_REF_SEL_NBITS 					0x01

#define STIM_GSB_CH_SHORT_CH_BAL_OFFSET 			0x10
#define STIM_GSB_CH_SHORT_CH_BAL_NBITS 				0x01

// stimBCR
#define STIM_BCR_EN_BIAS_OFFSET 					0x00
#define STIM_BCR_EN_BIAS_NBITS 						0x07

#define STIM_BCR_EN_GLOBAL_BIAS_OFFSET 				0x00
#define STIM_BCR_EN_GLOBAL_BIAS_NBITS 				0x01

#define STIM_BCR_EN_COMP_OFFSET 					0x01
#define STIM_BCR_EN_COMP_NBITS 						0x01

#define STIM_BCR_EN_DRIV_A_OFFSET 					0x02
#define STIM_BCR_EN_DRIV_A_NBITS 					0x01

#define STIM_BCR_EN_DAC_A_OFFSET 					0x03
#define STIM_BCR_EN_DAC_A_NBITS 					0x01

#define STIM_BCR_EN_DRIV_B_OFFSET 					0x04
#define STIM_BCR_EN_DRIV_B_NBITS 					0x01

#define STIM_BCR_EN_DAC_B_OFFSET 					0x05
#define STIM_BCR_EN_DAC_B_NBITS 					0x01

#define STIM_BCR_EN_CAL_OFFSET 						0x06
#define STIM_BCR_EN_CAL_NBITS 						0x01

#define STIM_BCR_HI_COMP_OFFSET 					0x07
#define STIM_BCR_HI_COMP_NBITS 						0x01

#define STIM_BCR_HI_DRIV_A_OFFSET 					0x08
#define STIM_BCR_HI_DRIV_A_NBITS 					0x02

#define STIM_BCR_HI_DAC_A_OFFSET 					0x0A
#define STIM_BCR_HI_DAC_A_NBITS 					0x02

#define STIM_BCR_HI_DAC_B_OFFSET 					0x0C
#define STIM_BCR_HI_DAC_B_NBITS 					0x02

#define STIM_BCR_HI_CAL_OFFSET 						0x0E
#define STIM_BCR_HI_CAL_NBITS 						0x01

#define STIM_BCR_DAC_BIAS_CNFG_A_OFFSET 			0x10
#define STIM_BCR_DAC_BIAS_CNFG_A_NBITS 				0x02

#define STIM_BCR_DAC_BIAS_CNFG_B_OFFSET 			0x12
#define STIM_BCR_DAC_BIAS_CNFG_B_NBITS 				0x02

// stimOR0
#define STIM_OR_0_DAC_CALIB_VALUE_OFFSET 			0x00
#define STIM_OR_0_DAC_CALIB_VALUE_NBITS 			0x06

#define STIM_OR_0_CAL_EOC_OFFSET		 			0x08
#define STIM_OR_0_CAL_EOC_NBITS 					0x01

#define STIM_OR_0_CH_A_CURRENT_CHECK_A_OFFSET		0x0B
#define STIM_OR_0_CH_A_CURRENT_CHECK_A_NBITS 		0x05

#define STIM_OR_0_CH_A_CURRENT_CHECK_B_OFFSET 		0x10
#define STIM_OR_0_CH_A_CURRENT_CHECK_B_NBITS 		0x05

#define STIM_OR_0_CH_B_CURRENT_CHECK_A_OFFSET 		0x15
#define STIM_OR_0_CH_B_CURRENT_CHECK_A_NBITS 		0x05

#define STIM_OR_0_CH_B_CURRENT_CHECK_B_OFFSET 		0x1A
#define STIM_OR_0_CH_B_CURRENT_CHECK_B_NBITS 		0x05

#else
#error Archi file for VivoSoC/Stim already included
#endif		// __ARCHI_ANALOG_STIM_H__
