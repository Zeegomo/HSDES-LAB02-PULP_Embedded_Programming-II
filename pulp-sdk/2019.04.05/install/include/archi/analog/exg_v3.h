/* 
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 *
 * Authors: Jonathan Boesser (jboesser@iis.ee.ethz.ch)
 */

#ifndef __ARCHI_ANALOG_EXG_H__
#define __ARCHI_ANALOG_EXG_H__

/*
 * Analog EXG ARCHI file for VivoSoC IP: EXG_CHANNELS, EXG_SAR_IP, EXG_EIM_IP
 * Use this file for EXG IPs compliant to VivoSoC3
 *
 */

/*
 * EXG_CH_IP: EXG Channels
 */

// Register defines, register number according to register offset in IP
#define EXG_CH_ENABLE                   			0x00	// r
#define EXG_CH_GAIN                        			0x01	// r
#define EXG_CH_DEODAC                    			0x02	// r
#define EXG_CH_PAODAC                    			0x03	// r

// ExG_Channel_Gain
#define EXG_CH_GAIN_OFFSET							0x00
#define EXG_CH_GAIN_NBITS							0x06

// ExG_Channel_DEODAC
#define EXG_CH_DEODAC_OFFSET						0x00
#define EXG_CH_DEODAC_NBITS							0x0E

// ExG_Channel_PAODAC
#define EXG_CH_PAODAC_BW_OFFSET 					0x00
#define EXG_CH_PAODAC_BW_NBITS 						0x02

#define EXG_CH_PAODAC_HPF_OFFSET 					0x02
#define EXG_CH_PAODAC_HPF_NBITS 					0x01

#define EXG_CH_PAODAC_OFFSET						0x03
#define EXG_CH_PAODAC_NBITS 						0x07


/*
 * EXG_SAR_IP: SAR Cerebro
 */

// Register defines, register number according to register offset in IP
#define EXG_ADC_CWR_0                				0x00	// rw
#define EXG_ADC_CWR_1                				0x01	// rw
#define EXG_ADC_CWR_2                				0x02	// rw
#define EXG_ADC_CWR_3                				0x03	// rw
#define EXG_ADC_CWR_4                				0x04	// rw
#define EXG_ADC_CWR_5                				0x05	// rw
#define EXG_ADC_CWR_6                				0x06	// rw
#define EXG_ADC_CWR_7                				0x07	// rw
#define EXG_ADC_CWR_8                				0x08	// rw
#define EXG_ADC_CWR_9                				0x09	// rw
#define EXG_ADC_CWR_10                				0x0A	// rw
#define EXG_ADC_CWR_11                				0x0B	// rw
#define EXG_ADC_CWR_12                				0x0C	// rw
#define EXG_ADC_CWR_13                				0x0D	// rw
#define EXG_ADC_CWR_14                				0x0E	// rw
#define EXG_ADC_CWR_15                				0x0F	// rw
#define EXG_ADC_CWR_16                				0x10	// rw
#define EXG_SAR_PCWR                				0x11	// rw
#define EXG_ADC_OSR                    				0x12	// rw
#define EXG_ADC_MFCR                				0x13	// rw
#define EXG_ADC_ASR                    				0x14	// rw
#define EXG_SAR_SGS                    				0x15	// rw
#define EXG_ADC_DSR                    				0x16	// rw
#define EXG_ADC_LCR                    				0x17	// rw
#define EXG_SAR_CC_0                				0x18	// rw
#define EXG_SAR_CC_1                				0x19	// rw
#define EXG_SAR_CC_2                				0x1A	// rw
#define EXG_SAR_CC_3                				0x1B	// rw
#define EXG_SAR_CC_4                				0x1C	// rw
#define EXG_SAR_CC_5                				0x1D	// rw
#define EXG_SAR_CC_6                				0x1E	// rw
#define EXG_SAR_CC_7                				0x1F	// rw
#define EXG_SAR_CC_8                				0x20	// rw
#define EXG_SAR_CC_9                				0x21	// rw
#define EXG_SAR_CC_10                				0x22	// rw
#define EXG_SAR_CC_11                				0x23	// rw
#define EXG_SAR_CC_12                				0x24	// rw
#define EXG_SAR_CC_13                				0x25	// rw
#define EXG_SAR_CC_14                				0x26	// rw
#define EXG_SAR_CC_15                				0x27	// rw
#define EXG_SAR_CC_16                				0x28	// rw
#define EXG_SAR_RC                   				0x29	// rw
#define EXG_SAR_CIC_0                    			0x2A	// rw
#define EXG_SAR_CIC_1                    			0x2B	// rw
#define EXG_SAR_CIC_2                    			0x2C	// rw
#define EXG_SAR_CIC_3                    			0x2D	// rw
#define EXG_SAR_CIC_4                    			0x2E	// rw
#define EXG_SAR_CIC_5                    			0x2F	// rw
#define EXG_SAR_CIC_6                    			0x30	// rw
#define EXG_SAR_CIC_7                    			0x31	// rw
#define EXG_SAR_CIC_8                    			0x32	// rw

// Bitfield defines

// adcCWR
// 0
#define EXG_ADC_CWR_0_OFFSET                     	0x00
#define EXG_ADC_CWR_0_NBITS                     	0x1A
// 1
#define EXG_ADC_CWR_1_OFFSET                   		0x00
#define EXG_ADC_CWR_1_NBITS                   		0x1A
// 2
#define EXG_ADC_CWR_2_OFFSET                     	0x00
#define EXG_ADC_CWR_2_NBITS                     	0x1A
// 3
#define EXG_ADC_CWR_3_OFFSET                     	0x00
#define EXG_ADC_CWR_3_NBITS                     	0x19
// 4
#define EXG_ADC_CWR_4_OFFSET                     	0x00
#define EXG_ADC_CWR_4_NBITS                     	0x18
// 5
#define EXG_ADC_CWR_5_OFFSET                     	0x00
#define EXG_ADC_CWR_5_NBITS                     	0x17
// 6
#define EXG_ADC_CWR_6_OFFSET                     	0x00
#define EXG_ADC_CWR_6_NBITS                     	0x16
// 7
#define EXG_ADC_CWR_7_OFFSET                     	0x00
#define EXG_ADC_CWR_7_NBITS                     	0x15
// 8
#define EXG_ADC_CWR_8_OFFSET                     	0x00
#define EXG_ADC_CWR_8_NBITS                     	0x14
// 9
#define EXG_ADC_CWR_9_OFFSET                     	0x00
#define EXG_ADC_CWR_9_NBITS                     	0x13
// 10
#define EXG_ADC_CWR_10_OFFSET                     	0x00
#define EXG_ADC_CWR_10_NBITS                     	0x12
// 11
#define EXG_ADC_CWR_11_OFFSET                     	0x00
#define EXG_ADC_CWR_11_NBITS                     	0x12
// 12
#define EXG_ADC_CWR_12_OFFSET                     	0x00
#define EXG_ADC_CWR_12_NBITS                     	0x11
// 13
#define EXG_ADC_CWR_13_OFFSET                     	0x00
#define EXG_ADC_CWR_13_NBITS                     	0x10
// 14
#define EXG_ADC_CWR_14_OFFSET                     	0x00
#define EXG_ADC_CWR_14_NBITS                     	0x0F
// 15
#define EXG_ADC_CWR_15_OFFSET                     	0x00
#define EXG_ADC_CWR_15_NBITS                     	0x0E
// 16
#define EXG_ADC_CWR_16_OFFSET                     	0x00
#define EXG_ADC_CWR_16_NBITS                     	0x0E

// sarPCWR
#define EXG_SAR_PCWR_OFFSET                    	 	0x00
#define EXG_SAR_PCWR_NBITS                  	 	0x17

// adcOSR
#define EXG_ADC_OSR_OFFSET                			0x00
#define EXG_ADC_OSR_NBITS                			0x1A

// adcMFCR
#define EXG_ADC_MFCR_RESET_OFFSET     				0x00              
#define EXG_ADC_MFCR_RESET_NBITS                   	0x01

#define EXG_ADC_MFCR_UPDATE_CALIB_OFFSET            0x01       
#define EXG_ADC_MFCR_UPDATE_CALIB_NBITS             0x01      

#define EXG_ADC_MFCR_MUW_OFFSET                     0x02
#define EXG_ADC_MFCR_MUW_NBITS                      0x05

#define EXG_ADC_MFCR_MUD_OFFSET                     0x07
#define EXG_ADC_MFCR_MUD_NBITS                      0x05

#define EXG_ADC_MFCR_IN_DS_OFFSET                   0x0C 
#define EXG_ADC_MFCR_IN_DS_NBITS                    0x03

#define EXG_ADC_MFCR_SAMPLING_MODE_OFFSET           0x0F        
#define EXG_ADC_MFCR_SAMPLING_MODE_NBITS            0x02        

#define EXG_ADC_MFCR_SIG_GEN_OFFSET                 0x12  
#define EXG_ADC_MFCR_SIG_GEN_NBITS                  0x01  

#define EXG_ADC_MFCR_RAW_OUT_OFFSET                 0x13  
#define EXG_ADC_MFCR_RAW_OUT_NBITS                  0x01  

#define EXG_ADC_MFCR_LAST_CYCLE_OFFSET              0x14     
#define EXG_ADC_MFCR_LAST_CYCLE_NBITS               0x05    

// adcASR
#define EXG_ADC_ASR_COMP_SEL_OFFSET                 0x00    			
#define EXG_ADC_ASR_COMP_SEL_NBITS                  0x03   	

#define EXG_ADC_ASR_PERT_EN_OFFSET                  0x03   			
#define EXG_ADC_ASR_PERT_EN_NBITS                   0x01  	                    	

#define EXG_ADC_ASR_DITH_EN_OFFSET                  0x04   			
#define EXG_ADC_ASR_DITH_EN_NBITS                   0x10  	                    	

#define EXG_ADC_ASR_REF_CAP_OFFSET                  0x14   			
#define EXG_ADC_ASR_REF_CAP_NBITS                   0x01 

// sarSGS
#define EXG_SAR_SGS_SIG_GEN_LIM_LO_OFFSET			0x00
#define EXG_SAR_SGS_SIG_GEN_LIM_LO_NBITS			0x05    

#define EXG_SAR_SGS_SIG_GEN_LIM_HI_OFFSET			0x05
#define EXG_SAR_SGS_SIG_GEN_LIM_HI_NBITS			0x05 

#define EXG_SAR_SGS_SIG_GEN_HI_OFFSET				0x0A
#define EXG_SAR_SGS_SIG_GEN_HI_NBITS				0x02 

#define EXG_SAR_SGS_SIG_GEN_LO_OFFSET				0x0C
#define EXG_SAR_SGS_SIG_GEN_LO_NBITS				0x03 

#define EXG_SAR_SGS_SIG_GEN_STEP_OFFSET				0x0F
#define EXG_SAR_SGS_SIG_GEN_STEP_NBITS				0x03 

#define EXG_SAR_SGS_SHIFT_VALID_OFFSET				0x12
#define EXG_SAR_SGS_SHIFT_VALID_NBITS				0x05 

#define EXG_SAR_SGS_VALID_WIDTH_OFFSET				0x17
#define EXG_SAR_SGS_VALID_WIDTH_NBITS				0x05 

#define EXG_SAR_SGS_BUFFER_ENABLE_OFFSET			0x1C
#define EXG_SAR_SGS_BUFFER_ENABLE_NBITS				0x01 

#define EXG_SAR_SGS_BUFFER_MODE_OFFSET				0x1D
#define EXG_SAR_SGS_BUFFER_MODE_NBITS				0x02 

#define EXG_SAR_SGS_READ_CALIB_OFFSET				0x1F
#define EXG_SAR_SGS_READ_CALIB_NBITS				0x01  

// adcDSR
#define EXG_ADC_DSR_SAR_VREF_EN_OFFSET				0x00
#define EXG_ADC_DSR_SAR_VREF_EN_NBITS				0x04

#define EXG_ADC_DSR_SAR_VCM_EN_OFFSET				0x04
#define EXG_ADC_DSR_SAR_VCM_EN_NBITS				0x04                			

// adcLCR
#define EXG_ADC_LCR_EN_IDS_LIMCON_OFFSET            0x00
#define EXG_ADC_LCR_EN_IDS_LIMCON_NBITS             0x01     

#define EXG_ADC_LCR_IDS_LIMCON_CYCLES_OFFSET        0x01
#define EXG_ADC_LCR_IDS_LIMCON_CYCLES_NBITS         0x04    

#define EXG_ADC_LCR_LIMCON_CYCLES_OFFSET            0x05
#define EXG_ADC_LCR_LIMCON_CYCLES_NBITS             0x04   

#define EXG_ADC_LCR_FRONT_BUFFER_RES_OFFSET         0x09
#define EXG_ADC_LCR_FRONT_BUFFER_RES_NBITS          0x07   

#define EXG_ADC_LCR_FRONT_BUFFER_CAP_OFFSET         0x10
#define EXG_ADC_LCR_FRONT_BUFFER_CAP_NBITS          0x04      			

// SAR clocking cycles
#define EXG_SAR_CC_REG_CYC_EN_OFFSET				0x00
#define EXG_SAR_CC_REG_CYC_EN_NBITS					0x01

#define EXG_SAR_CC_REG_NUM_COMP_OFFSET				0x01
#define EXG_SAR_CC_REG_NUM_COMP_NBITS				0x05

#define EXG_SAR_CC_REG_SETTLING_CYC_OFFSET			0x06
#define EXG_SAR_CC_REG_SETTLING_CYC_NBITS			0x05

#define EXG_SAR_CC_REG_CAP_NO_OFFSET				0x0B
#define EXG_SAR_CC_REG_CAP_NO_NBITS					0x05

#define EXG_SAR_CC_REG_VREF_BIAS_CURR_OFFSET		0x10
#define EXG_SAR_CC_REG_VREF_BIAS_CURR_NBITS			0x04

#define EXG_SAR_CC_REG_CM_BIAS_CURR_OFFSET			0x14
#define PPG_SAR_CC_REG_CM_BIAS_CURR_NBITS			0x04

#define EXG_SAR_CC_REG_FRONT_BUFFER_EN_OFFSET		0x18
#define PPG_SAR_CC_REG_FRONT_BUFFER_EN_NBITS		0x01

#define EXG_SAR_CC_REG_CM_FRONT_BUFFER_BIAS_OFFSET	0x19
#define PPG_SAR_CC_REG_CM_FRONT_BUFFER_BIAS_NBITS	0x05 			

// CIC filter
#define EXG_SAR_CIC_REG_K_1_OFFSET					0x00
#define EXG_SAR_CIC_REG_K_1_NBITS					0x04

#define EXG_SAR_CIC_REG_K_2_OFFSET					0x04
#define EXG_SAR_CIC_REG_K_2_NBITS					0x03

#define EXG_SAR_CIC_REG_MODE_OFFSET					0x07
#define EXG_SAR_CIC_REG_MODE_NBITS					0x02

#define EXG_SAR_CIC_REG_TRUNK_OFFSET				0x09
#define EXG_SAR_CIC_REG_TRUNK_NBITS					0x05

#define EXG_SAR_CIC_REG_BYPASS_OFFSET				0x0E
#define EXG_SAR_CIC_REG_BYPASS_NBITS				0x01


/*
 * EXG_EIM_IP: Electrode Impedance Measurement
 */

// Register defines, register number according to register offset in IP
#define EXG_EIM_IP_ENABLE                    		0x00	// w
#define EXG_EIM_CON_H_RES                     		0x01	// w
#define EXG_EIM_CON_L_RES                     		0x02	// w
#define EXG_EIM_CS_SEL_CH_0                    		0x03	// w
#define EXG_EIM_CS_SEL_CH_1                    		0x04	// w
#define EXG_EIM_CS_SEL_CH_2                    		0x05	// w
#define EXG_EIM_CS_SEL_CH_3                    		0x06	// w
#define EXG_EIM_CS_SEL_CH_4                    		0x07	// w
#define EXG_EIM_CS_SEL_CH_5                    		0x08	// w
#define EXG_EIM_CS_SEL_CH_6                    		0x09	// w
#define EXG_EIM_CS_SEL_CH_7                    		0x0A	// w
#define EXG_EIM_EN_NEG                         		0x0B	// w
#define EXG_EIM_EN_POS                         		0x0C	// w
#define EXG_EIM_CLK_SET                        		0x0D	// w

// Bitfield defines

// EXG_EIM_CS_SEL_REG
#define EXG_EIM_CS_SEL_CH_0_OFFSET                  0x00
#define EXG_EIM_CS_SEL_CH_0_NBITS                   0x03

#define EXG_EIM_CS_SEL_CH_1_OFFSET                  0x03
#define EXG_EIM_CS_SEL_CH_1_NBITS                   0x03

#define EXG_EIM_CS_SEL_CH_2_OFFSET                  0x06
#define EXG_EIM_CS_SEL_CH_2_NBITS                   0x03

#define EXG_EIM_CS_SEL_CH_3_OFFSET                  0x09
#define EXG_EIM_CS_SEL_CH_3_NBITS                   0x03

#define EXG_EIM_CS_SEL_CH_4_OFFSET                  0x0C
#define EXG_EIM_CS_SEL_CH_4_NBITS                   0x03

#define EXG_EIM_CS_SEL_CH_5_OFFSET                  0x0F
#define EXG_EIM_CS_SEL_CH_5_NBITS                   0x03

#define EXG_EIM_CS_SEL_CH_6_OFFSET                  0x12
#define EXG_EIM_CS_SEL_CH_6_NBITS                   0x03

#define EXG_EIM_CS_SEL_CH_7_OFFSET                  0x15
#define EXG_EIM_CS_SEL_CH_7_NBITS                   0x03

// EXG_EIM_CNTRL_REG
#define EXG_EIM_IP_EN_OFFSET    	                0x00
#define EXG_EIM_IP_EN_NBITS  	                  	0x01

#define EXG_EIM_CON_H_RES_OFFSET                    0x01
#define EXG_EIM_CON_H_RES_NBITS                     0x01

#define EXG_EIM_CON_L_ERS_OFFSET                    0x02
#define EXG_EIM_CON_L_ERS_NBITS                     0x01

#define EXG_EIM_EN_NEG_OFFSET                       0x03
#define EXG_EIM_EN_NEG_NBITS                        0x01

#define EXG_EIM_EN_POS_OFFSET                       0x04
#define EXG_EIM_EN_POS_NBITS                        0x01

#define EXG_EIM_CLK_SET_OFFSET                      0x08
#define EXG_EIM_CLK_SET_NBITS                       0x04

#else
#error Archi file for VivoSoC/ExG already included
#endif		// __ARCHI_ANALOG_EXG_H__
