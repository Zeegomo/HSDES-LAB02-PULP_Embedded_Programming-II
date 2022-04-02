/* 
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 *
 * Authors: Jonathan Boesser (jboesser@iis.ee.ethz.ch)
 */

#ifndef __ARCHI_ANALOG_PPG_H__
#define __ARCHI_ANALOG_PPG_H__

/*
 * Analog PPG ARCHI file for VivoSoC IP: PPG_IP
 * Use this file for PPG IP compliant to VivoSoC3
 *
 */

/*
 * PPG_IP: TMA-O
 */

// Register defines, register number according to register offset in IP
#define PPG_ADC_CWR_0                     			0x00	// w
#define PPG_ADC_CWR_1                     			0x01	// w
#define PPG_ADC_CWR_2                     			0x02	// w
#define PPG_ADC_CWR_3                     			0x03	// w
#define PPG_ADC_CWR_4                     			0x04	// w
#define PPG_ADC_CWR_5                     			0x05	// w
#define PPG_ADC_CWR_6                     			0x06	// w
#define PPG_ADC_CWR_7                     			0x07	// w
#define PPG_ADC_CWR_8                     			0x08	// w
#define PPG_ADC_CWR_9                     			0x09	// w
#define PPG_ADC_CWR_10                     			0x0A	// w
#define PPG_ADC_CWR_11                     			0x0B	// w
#define PPG_ADC_CWR_12                     			0x0C	// w
#define PPG_ADC_CWR_13                     			0x0D	// w
#define PPG_ADC_CWR_14                     			0x0E	// w
#define PPG_ADC_CWR_15                     			0x0F	// w
#define PPG_ADC_CWR_16                     			0x10	// w
#define PPG_SAR_PCWR                    	 		0x11	// w
#define PPG_ADC_OSR                     			0x1B	// rw
#define PPG_ADC_MFCR                     			0x1C	// rw
#define PPG_ADC_ASR                     			0x1D	// rw
#define PPG_SAR_SGS                     			0x1E	// rw
#define PPG_ADC_LCR                     			0x20	// rw
#define PPG_SAR_CC_0                      			0x21	// rw
#define PPG_SAR_CC_1                      			0x22	// rw
#define PPG_SAR_CC_2                      			0x23	// rw
#define PPG_SAR_CC_3                      			0x24	// rw
#define PPG_SAR_CC_4                      			0x25	// rw
#define PPG_SAR_CC_5                      			0x26	// rw
#define PPG_SAR_CC_6                      			0x27	// rw
#define PPG_SAR_CC_7                      			0x28	// rw
#define PPG_SAR_CC_8                      			0x29	// rw
#define PPG_SAR_CC_9                      			0x2A	// rw
#define PPG_SAR_CC_10                     			0x2B	// rw
#define PPG_SAR_CC_11                     			0x2C	// rw
#define PPG_SAR_CC_12                     			0x2D	// rw
#define PPG_SAR_CC_13                     			0x2E	// rw
#define PPG_SAR_CC_14                     			0x2F	// rw
#define PPG_SAR_CC_15                     			0x30	// rw
#define PPG_SAR_CC_16                     			0x31	// rw
#define PPG_SAR_RC                      			0x32	// rw
#define PPG_OXI_DTR_0                     			0x40	// rw
#define PPG_OXI_DDR_0                     			0x41	// rw
#define PPG_OXI_DTR_1                     			0x42	// rw
#define PPG_OXI_DTR_2                    			0x43	// rw
#define PPG_OXI_DDR_1                     			0x44	// rw
#define PPG_OXI_GCR                     			0x46	// rw
#define PPG_OXI_TCTIA_0                    			0x47	// rw
#define PPG_OXI_TCTIA_1                    			0x48	// rw
#define PPG_OXI_TCCAL                        		0x49	// rw
#define PPG_OXI_PSR_0_0                    			0x4A	// rw
#define PPG_OXI_PSR_0_1                    			0x4B	// rw
#define PPG_OXI_PSR_0_2                    			0x4C	// rw
#define PPG_OXI_PSR_0_3                    			0x4D	// rw
#define PPG_OXI_PSR_0_4                    			0x4E	// rw
#define PPG_OXI_PSR_1_0                    			0x4F	// rw
#define PPG_OXI_PSR_1_1                    			0x50	// rw
#define PPG_OXI_PSR_1_2                    			0x51	// rw
#define PPG_OXI_PSR_1_3                    			0x52	// rw
#define PPG_OXI_PSR_1_4                    			0x53	// rw
#define PPG_OXI_PSR_2_0                    			0x54	// rw
#define PPG_OXI_PSR_2_1                    			0x55	// rw
#define PPG_OXI_PSR_2_2                    			0x56	// rw
#define PPG_OXI_PSR_2_3                    			0x57	// rw
#define PPG_OXI_PSR_2_4                    			0x58	// rw
#define PPG_OXI_PSR_3_0                    			0x59	// rw
#define PPG_OXI_PSR_3_1                    			0x5A	// rw
#define PPG_OXI_PSR_3_2                    			0x5B	// rw
#define PPG_OXI_PSR_3_3                    			0x5C	// rw
#define PPG_OXI_PSR_3_4                    			0x5D	// rw
#define PPG_OXI_PSR_4_0                    			0x5E	// rw
#define PPG_OXI_PSR_4_1                    			0x5F	// rw
#define PPG_OXI_PSR_4_2                    			0x60	// rw
#define PPG_OXI_PSR_4_3                    			0x61	// rw
#define PPG_OXI_PSR_4_4                    			0x62	// rw
#define PPG_OXI_TCR                        			0x63	// rw
#define PPG_OXI_DCR_0                      			0x64	// rw
#define PPG_OXI_DCR_1                      			0x65	// rw
#define PPG_TMA_BCR                            		0x66	// rw
#define PPG_VIV_ICR                     			0x67	// rw
#define PPG_FF_ADC_CWR_0                     		0x68	// r
#define PPG_FF_ADC_CWR_1                     		0x69	// r
#define PPG_FF_ADC_CWR_2                     		0x6A	// r
#define PPG_FF_ADC_CWR_3                     		0x6B	// r
#define PPG_FF_ADC_CWR_4                     		0x6C	// r
#define PPG_FF_ADC_CWR_5                     		0x6D	// r
#define PPG_FF_ADC_CWR_6                     		0x6E	// r
#define PPG_FF_ADC_CWR_7                     		0x6F	// r
#define PPG_FF_ADC_CWR_8                     		0x70	// r
#define PPG_FF_ADC_CWR_9                     		0x71	// r
#define PPG_FF_ADC_CWR_10                     		0x72	// r
#define PPG_FF_ADC_CWR_11                     		0x73	// r
#define PPG_FF_ADC_CWR_12                     		0x74	// r
#define PPG_FF_ADC_CWR_13                     		0x75	// r
#define PPG_FF_ADC_CWR_14                     		0x76	// r
#define PPG_FF_ADC_CWR_15                     		0x77	// r
#define PPG_FF_ADC_CWR_16                     		0x78	// r
#define PPG_FF_SAR_PCWR                    	 		0x79	// r
#define PPG_SAR_OOR 								0x7A	// r
#define PPG_OXI_COR 								0x7B	// r

// Bitfield defines

// adcCWR
// 0
#define PPG_ADC_CWR_0_OFFSET                     	0x00
#define PPG_ADC_CWR_0_NBITS                     	0x1A
// 1
#define PPG_ADC_CWR_1_OFFSET                   		0x00
#define PPG_ADC_CWR_1_NBITS                   		0x1A
// 2
#define PPG_ADC_CWR_2_OFFSET                     	0x00
#define PPG_ADC_CWR_2_NBITS                     	0x1A
// 3
#define PPG_ADC_CWR_3_OFFSET                     	0x00
#define PPG_ADC_CWR_3_NBITS                     	0x19
// 4
#define PPG_ADC_CWR_4_OFFSET                     	0x00
#define PPG_ADC_CWR_4_NBITS                     	0x18
// 5
#define PPG_ADC_CWR_5_OFFSET                     	0x00
#define PPG_ADC_CWR_5_NBITS                     	0x17
// 6
#define PPG_ADC_CWR_6_OFFSET                     	0x00
#define PPG_ADC_CWR_6_NBITS                     	0x16
// 7
#define PPG_ADC_CWR_7_OFFSET                     	0x00
#define PPG_ADC_CWR_7_NBITS                     	0x15
// 8
#define PPG_ADC_CWR_8_OFFSET                     	0x00
#define PPG_ADC_CWR_8_NBITS                     	0x14
// 9
#define PPG_ADC_CWR_9_OFFSET                     	0x00
#define PPG_ADC_CWR_9_NBITS                     	0x13
// 10
#define PPG_ADC_CWR_10_OFFSET                     	0x00
#define PPG_ADC_CWR_10_NBITS                     	0x12
// 11
#define PPG_ADC_CWR_11_OFFSET                     	0x00
#define PPG_ADC_CWR_11_NBITS                     	0x12
// 12
#define PPG_ADC_CWR_12_OFFSET                     	0x00
#define PPG_ADC_CWR_12_NBITS                     	0x11
// 13
#define PPG_ADC_CWR_13_OFFSET                     	0x00
#define PPG_ADC_CWR_13_NBITS                     	0x10
// 14
#define PPG_ADC_CWR_14_OFFSET                     	0x00
#define PPG_ADC_CWR_14_NBITS                     	0x0F
// 15
#define PPG_ADC_CWR_15_OFFSET                     	0x00
#define PPG_ADC_CWR_15_NBITS                     	0x0E
// 16
#define PPG_ADC_CWR_16_OFFSET                     	0x00
#define PPG_ADC_CWR_16_NBITS                     	0x0E

// sarPCWR
#define PPG_SAR_PCWR_OFFSET                    	 	0x00
#define PPG_SAR_PCWR_NBITS                  	 	0x17

// adcOSR
#define PPG_ADC_OSR_OFFSET                			0x00
#define PPG_ADC_OSR_NBITS                			0x1A

// adcMFCR
#define PPG_ADC_MFCR_RESET_OFFSET     				0x00              
#define PPG_ADC_MFCR_RESET_NBITS                   	0x01

#define PPG_ADC_MFCR_UPDATE_CALIB_OFFSET            0x01       
#define PPG_ADC_MFCR_UPDATE_CALIB_NBITS             0x01      

#define PPG_ADC_MFCR_MUW_OFFSET                     0x02
#define PPG_ADC_MFCR_MUW_NBITS                      0x05

#define PPG_ADC_MFCR_MUD_OFFSET                     0x07
#define PPG_ADC_MFCR_MUD_NBITS                      0x05

#define PPG_ADC_MFCR_IN_DS_OFFSET                   0x0C 
#define PPG_ADC_MFCR_IN_DS_NBITS                    0x03

#define PPG_ADC_MFCR_SAMPLING_MODE_OFFSET           0x0F        
#define PPG_ADC_MFCR_SAMPLING_MODE_NBITS            0x02        

#define PPG_ADC_MFCR_SIG_GEN_OFFSET                 0x12  
#define PPG_ADC_MFCR_SIG_GEN_NBITS                  0x01  

#define PPG_ADC_MFCR_RAW_OUT_OFFSET                 0x13  
#define PPG_ADC_MFCR_RAW_OUT_NBITS                  0x01  

#define PPG_ADC_MFCR_LAST_CYCLE_OFFSET              0x14     
#define PPG_ADC_MFCR_LAST_CYCLE_NBITS               0x05    

// adcASR
#define PPG_ADC_ASR_COMP_SEL_OFFSET                 0x00    			
#define PPG_ADC_ASR_COMP_SEL_NBITS                  0x03   	

#define PPG_ADC_ASR_PERT_EN_OFFSET                  0x03   			
#define PPG_ADC_ASR_PERT_EN_NBITS                   0x01  	                    	

#define PPG_ADC_ASR_DITH_EN_OFFSET                  0x04   			
#define PPG_ADC_ASR_DITH_EN_NBITS                   0x10  	                    	

#define PPG_ADC_ASR_REF_CAP_OFFSET                  0x14   			
#define PPG_ADC_ASR_REF_CAP_NBITS                   0x01  	

// sarSGS
#define PPG_SAR_SGS_SIG_GEN_LIM_LO_OFFSET			0x00
#define PPG_SAR_SGS_SIG_GEN_LIM_LO_NBITS			0x05    

#define PPG_SAR_SGS_SIG_GEN_LIM_HI_OFFSET			0x05
#define PPG_SAR_SGS_SIG_GEN_LIM_HI_NBITS			0x05 

#define PPG_SAR_SGS_SIG_GEN_HI_OFFSET				0x0A
#define PPG_SAR_SGS_SIG_GEN_HI_NBITS				0x02 

#define PPG_SAR_SGS_SIG_GEN_LO_OFFSET				0x0C
#define PPG_SAR_SGS_SIG_GEN_LO_NBITS				0x03 

#define PPG_SAR_SGS_SIG_GEN_STEP_OFFSET				0x0F
#define PPG_SAR_SGS_SIG_GEN_STEP_NBITS				0x03                  			

// adcDSR 
#define PPG_ADC_DSR_EN_SAR_VREF_OFFSET        		0x00
#define PPG_ADC_DSR_EN_SAR_VREF_NBITS         		0x04

#define PPG_ADC_DSR_EN_SAR_VCM_OFFSET            	0x04
#define PPG_ADC_DSR_EN_SAR_VCM_NBITS             	0x04    

// adcLCR
#define PPG_ADC_LCR_EN_IDS_LIMCON_OFFSET            0x00
#define PPG_ADC_LCR_EN_IDS_LIMCON_NBITS             0x01     

#define PPG_ADC_LCR_IDS_LIMCON_CYCLES_OFFSET        0x01
#define PPG_ADC_LCR_IDS_LIMCON_CYCLES_NBITS         0x04    

#define PPG_ADC_LCR_LIMCON_CYCLES_OFFSET            0x05
#define PPG_ADC_LCR_LIMCON_CYCLES_NBITS             0x04        			

// SAR clocking cycles
#define PPG_SAR_CC_REG_CYC_EN_OFFSET				0x00
#define PPG_SAR_CC_REG_CYC_EN_NBITS					0x01

#define PPG_SAR_CC_REG_NUM_COMP_OFFSET				0x01
#define PPG_SAR_CC_REG_NUM_COMP_NBITS				0x05

#define PPG_SAR_CC_REG_SETTLING_CYC_OFFSET			0x06
#define PPG_SAR_CC_REG_SETTLING_CYC_NBITS			0x05

#define PPG_SAR_CC_REG_CAP_NO_OFFSET				0x0B
#define PPG_SAR_CC_REG_CAP_NO_NBITS					0x05

#define PPG_SAR_CC_REG_VREF_BIAS_CURR_OFFSET		0x10
#define PPG_SAR_CC_REG_VREF_BIAS_CURR_NBITS			0x04

#define PPG_SAR_CC_REG_CM_BIAS_CURR_OFFSET			0x14
#define PPG_SAR_CC_REG_CM_BIAS_CURR_NBITS			0x04

// SAR reset cycle
#define PPG_SAR_RC_REG_CYC_EN_OFFSET				0x00
#define PPG_SAR_RC_REG_CYC_EN_NBITS					0x01

#define PPG_SAR_RC_SETTLING_CYC_OFFSET				0x01
#define PPG_SAR_RC_SETTLING_CYC_NBITS				0x0A

#define PPG_SAR_RC_REG_CAP_NO_OFFSET				0x0B
#define PPG_SAR_RC_REG_CAP_NO_NBITS					0x05

#define PPG_SAR_RC_REG_VREF_BIAS_CURR_OFFSET		0x10
#define PPG_SAR_RC_REG_VREF_BIAS_CURR_NBITS			0x04

#define PPG_SAR_RC_REG_CM_BIAS_CURR_OFFSET			0x14
#define PPG_SAR_RC_REG_CM_BIAS_CURR_NBITS			0x04

// oxiDTR0
#define PPG_OXI_DTR_0_SW_IN_P_OFFSET                0x00
#define PPG_OXI_DTR_0_SW_IN_P_NBITS                 0x04  

#define PPG_OXI_DTR_0_SW_INV_IN_P_OFFSET            0x04
#define PPG_OXI_DTR_0_SW_INV_IN_P_NBITS             0x04  

#define PPG_OXI_DTR_0_SW_SHORT_OFFSET               0x08
#define PPG_OXI_DTR_0_SW_SHORT_NBITS                0x04  

#define PPG_OXI_DTR_0_SW_CM_P_OFFSET                0x0C
#define PPG_OXI_DTR_0_SW_CM_P_NBITS                 0x04 

#define PPG_OXI_DTR_0_SW_IN_M_OFFSET                0x10
#define PPG_OXI_DTR_0_SW_IN_M_NBITS                 0x04  

#define PPG_OXI_DTR_0_SW_INV_IN_M_OFFSET            0x14
#define PPG_OXI_DTR_0_SW_INV_IN_M_NBITS             0x04   

#define PPG_OXI_DTR_0_SW_CM_M_OFFSET                0x1C
#define PPG_OXI_DTR_0_SW_CM_M_NBITS                 0x04 

// oxiDTR1
#define PPG_OXI_DTR_1_SW_RST_OFFSET					0x00
#define PPG_OXI_DTR_1_SW_RST_NBITS                  0x01    				 			

#define PPG_OXI_DTR_1_SW_RF_OFFSET					0x01
#define PPG_OXI_DTR_1_SW_RF_NBITS                   0x01

#define PPG_OXI_DTR_1_N_SW_DCS_OFFSET				0x02
#define PPG_OXI_DTR_1_N_SW_DCS_NBITS                0x01

#define PPG_OXI_DTR_1_SW_COS_OFFSET					0x03
#define PPG_OXI_DTR_1_SW_COS_NBITS                  0x01

#define PPG_OXI_DTR_1_SW_CF_OFFSET					0x04
#define PPG_OXI_DTR_1_SW_CF_NBITS                   0x09

#define PPG_OXI_DTR_1_SW_CS_OFFSET					0x0D
#define PPG_OXI_DTR_1_SW_CS_NBITS                   0x07

#define PPG_OXI_DTR_1_EN_OTA_OFFSET					0x14
#define PPG_OXI_DTR_1_EN_OTA_NBITS                  0x01

#define PPG_OXI_DTR_1_EN_DCS_OFFSET					0x15
#define PPG_OXI_DTR_1_EN_DCS_NBITS                  0x01

#define PPG_OXI_DTR_1_CF_CNFG_OFFSET				0x1B
#define PPG_OXI_DTR_1_CF_CNFG_NBITS                 0x05

// oxiDTR2
#define PPG_OXI_DTR_2_RF_CNFG_OFFSET				0x00
#define PPG_OXI_DTR_2_RF_CNFG_NBITS 				0x09

#define PPG_OXI_DTR_2_DCS_CNFG_OFFSET				0x10
#define PPG_OXI_DTR_2_DCS_CNFG_NBITS 				0x08                    			

// oxiDDR
// 0
#define PPG_OXI_DDR_0_DRIV_SEL_CH_OFFSET			0x00
#define PPG_OXI_DDR_0_DRIV_SEL_CH_NBITS 			0x04 

#define PPG_OXI_DDR_0_DRIV_SENS_SEL_OFFSET			0x04
#define PPG_OXI_DDR_0_DRIV_SENS_SEL_NBITS 			0x04 

#define PPG_OXI_DDR_0_DRIV_SEL_IR_OFFSET			0x08
#define PPG_OXI_DDR_0_DRIV_SEL_IR_NBITS 			0x04 

#define PPG_OXI_DDR_0_DRIV_SEL_RED_OFFSET			0x0C
#define PPG_OXI_DDR_0_DRIV_SEL_RED_NBITS 			0x04 

#define PPG_OXI_DDR_0_MUX_IRH_OFFSET				0x10
#define PPG_OXI_DDR_0_MUX_IRH_NBITS 				0x04 

#define PPG_OXI_DDR_0_MUX_RH_OFFSET					0x14
#define PPG_OXI_DDR_0_MUX_RH_NBITS 					0x04 

#define PPG_OXI_DDR_0_MUX_RESH_OFFSET				0x18
#define PPG_OXI_DDR_0_MUX_RESH_NBITS 				0x04 

#define PPG_OXI_DDR_0_MUX_RESL_OFFSET				0x1C
#define PPG_OXI_DDR_0_MUX_RESL_NBITS 				0x04                     			
// 1
#define PPG_OXI_DDR_1_LD_CAL_CH_SEL_OFFSET			0x00
#define PPG_OXI_DDR_1_LD_CAL_CH_SEL_NBITS			0x04

#define PPG_OXI_DDR_1_LD_CAL_EN_OFFSET				0x04
#define PPG_OXI_DDR_1_LD_CAL_EN_NBITS				0x01

#define PPG_OXI_DDR_1_COMP_EN_OFFSET				0x07
#define PPG_OXI_DDR_1_COMP_EN_NBITS					0x01

#define PPG_OXI_DDR_1_COMP_RST_OFFSET				0x08
#define PPG_OXI_DDR_1_COMP_RST_NBITS				0x01

#define PPG_OXI_DDR_1_COMP_TRACK_OFFSET				0x09
#define PPG_OXI_DDR_1_COMP_TRACK_NBITS				0x01

#define PPG_OXI_DDR_1_DAC_EN06_OFFSET				0x0A
#define PPG_OXI_DDR_1_DAC_EN06_NBITS				0x01

#define PPG_OXI_DDR_1_N_DAC_EN12_OFFSET				0x0B
#define PPG_OXI_DDR_1_N_DAC_EN12_NBITS				0x01

#define PPG_OXI_DDR_1_DRIV_EN_OFFSET				0x0C
#define PPG_OXI_DDR_1_DRIV_EN_NBITS					0x01

#define PPG_OXI_DDR_1_DRIV_PULSE_OFFSET				0x0D
#define PPG_OXI_DDR_1_DRIV_PULSE_NBITS				0x01

#define PPG_OXI_DDR_1_ADC_CM_BUF_CNFG_OFFSET		0x0E
#define PPG_OXI_DDR_1_ADC_CM_BUF_CNFG_NBITS			0x04

#define PPG_OXI_DDR_1_ADC_REF_BUF_CNFG_OFFSET		0x12
#define PPG_OXI_DDR_1_ADC_REF_BUF_CNFG_NBITS		0x04

#define PPG_OXI_DDR_1_REF_BUF_EN_OFFSET				0x16
#define PPG_OXI_DDR_1_REF_BUF_EN_NBITS				0x01

#define PPG_OXI_DDR_1_ADC_SAMPLE_OFFSET				0x17
#define PPG_OXI_DDR_1_ADC_SAMPLE_NBITS				0x01

#define PPG_OXI_DDR_1_ADC_TRACK_OFFSET				0x18
#define PPG_OXI_DDR_1_ADC_TRACK_NBITS				0x01

#define PPG_OXI_DDR_1_ADC_LIM_CONV_OFFSET			0x19
#define PPG_OXI_DDR_1_ADC_LIM_CONV_NBITS			0x01  

#define PPG_OXI_DDR_1_COMP_SEL_IN_OFFSET			0x1A
#define PPG_OXI_DDR_1_COMP_SEL_IN_NBITS				0x01                     			

// oxiGCR
#define PPG_OXI_GCR_MODE_OFFSET  					0x00
#define PPG_OXI_GCR_MODE_NBITS  					0x02                     			

#define PPG_OXI_GCR_SYNC_MODE_OFFSET 				0x02
#define PPG_OXI_GCR_SYNC_MODE_NBITS  				0x03

#define PPG_OXI_GCR_DUTY_CYCLING_ON_OFFSET			0x05
#define PPG_OXI_GCR_DUTY_CYCLING_ON_NBITS 			0x06

#define PPG_OXI_GCR_TIA_OTA_AL_ON_OFFSET			0x05
#define PPG_OXI_GCR_TIA_OTA_AL_ON_NBITS 			0x01

#define PPG_OXI_GCR_DCS_AL_ON_OFFSET				0x06
#define PPG_OXI_GCR_DCS_AL_ON_NBITS 				0x01

#define PPG_OXI_GCR_DAC_AL_ON_OFFSET				0x07
#define PPG_OXI_GCR_DAC_AL_ON_NBITS 				0x01

#define PPG_OXI_GCR_DRIV_AL_ON_OFFSET  				0x08
#define PPG_OXI_GCR_DRIV_AL_ON_NBITS  				0x01

#define PPG_OXI_GCR_TIA_REF_BUF_AL_ON_OFFSET  		0x09
#define PPG_OXI_GCR_TIA_REF_BUF_AL_ON_NBITS  		0x01

#define PPG_OXI_GCR_ADC_REF_BUF_AL_ON_OFFSET  		0x0A
#define PPG_OXI_GCR_ADC_REF_BUF_AL_ON_NBITS  		0x01

#define PPG_OXI_GCR_ADC_FSM_SAVE_SYNC_OFFSET  		0x0B
#define PPG_OXI_GCR_ADC_FSM_SAVE_SYNC_NBITS  		0x01

#define PPG_OXI_GCR_ADD_RST_CYCLE_PRE_OFFSET  		0x0C
#define PPG_OXI_GCR_ADD_RST_CYCLE_PRE_NBITS  		0x01

#define PPG_OXI_GCR_LIM_NO_PROG_SEQ_OFFSET  		0x0D
#define PPG_OXI_GCR_LIM_NO_PROG_SEQ_NBITS  			0x01

#define PPG_OXI_GCR_CAL_NO_INT_RES_MODE_OFFSET  	0x0E
#define PPG_OXI_GCR_CAL_NO_INT_RES_MODE_NBITS  		0x01

#define PPG_OXI_GCR_DAC_REF_SEL_OFFSET  			0x0F
#define PPG_OXI_GCR_DAC_REF_SEL_NBITS  				0x01

#define PPG_OXI_GCR_CAL_CH_SEL_OFFSET  				0x13
#define PPG_OXI_GCR_CAL_CH_SEL_NBITS  				0x02

#define PPG_OXI_GCR_PRE_SCALE_CNFG_OFFSET  			0x15
#define PPG_OXI_GCR_PRE_SCALE_CNFG_NBITS  			0x03

#define PPG_OXI_GCR_WATCH_DOG_EN_OFFSET  			0x18
#define PPG_OXI_GCR_WATCH_DOG_EN_NBITS  			0x01

#define PPG_OXI_GCR_ADC_FULLW_OFFSET  				0x19
#define PPG_OXI_GCR_ADC_FULLW_NBITS  				0x01

#define PPG_OXI_GCR_EN_CURRENT_CHECK_OFFSET  		0x1A
#define PPG_OXI_GCR_EN_CURRENT_CHECK_NBITS  		0x01

#define PPG_OXI_GCR_CAHTODE_ONLY_OFFSET  			0x1C
#define PPG_OXI_GCR_CAHTODE_ONLY_NBITS  			0x04

// oxiTCTIA
// 0
#define PPG_OXI_TCTIA_0_T_IDLE_OFFSET               0x00
#define PPG_OXI_TCTIA_0_T_IDLE_NBITS                0x10

#define PPG_OXI_TCTIA_0_T_OTA_EN_OFFSET             0x10
#define PPG_OXI_TCTIA_0_T_OTA_EN_NBITS              0x03

#define PPG_OXI_TCTIA_0_T_OSS_OFFSET                0x13
#define PPG_OXI_TCTIA_0_T_OSS_NBITS                 0x04

#define PPG_OXI_TCTIA_0_T_RST_CF_OFFSET             0x17
#define PPG_OXI_TCTIA_0_T_RST_CF_NBITS              0x04

#define PPG_OXI_TCTIA_0_T_PRECHARGE_OFFSET          0x1B
#define PPG_OXI_TCTIA_0_T_PRECHARGE_NBITS           0x05  			
// 1
#define PPG_OXI_TCTIA_1_T_INT_OFFSET		        0x00
#define PPG_OXI_TCTIA_1_T_INT_NBITS 		        0x06  

#define PPG_OXI_TCTIA_1_T_ADC_TRACK_OFFSET		    0x06
#define PPG_OXI_TCTIA_1_T_ADC_TRACK_NBITS 		    0x05  

#define PPG_OXI_TCTIA_1_T_ADC_SAMPLE_OFFSET		    0x0B
#define PPG_OXI_TCTIA_1_T_ADC_SAMPLE_NBITS 		    0x03  

#define PPG_OXI_TCTIA_1_T_INTER_CH_RST_OFFSET		0x10
#define PPG_OXI_TCTIA_1_T_INTER_CH_RST_NBITS 		0x04  

#define PPG_OXI_TCTIA_1_T_SCYCLE_OFFSET		        0x14
#define PPG_OXI_TCTIA_1_T_SCYCLE_NBITS 		        0x04                     			

// oxiTCCAL
#define PPG_OXI_TCCAL_T_CAL_IREF_SETTLE_OFFSET		0x03
#define PPG_OXI_TCCAL_T_CAL_IREF_SETTLE_NBITS		0x04  

#define PPG_OXI_TCCAL_T_CAL_DRIV_START_OFFSET		0x07
#define PPG_OXI_TCCAL_T_CAL_DRIV_START_NBITS		0x03  

#define PPG_OXI_TCCAL_T_CAL_PULSE_OFFSET	    	0x0A
#define PPG_OXI_TCCAL_T_CAL_PULSE_NBITS		    	0x03                             			

#define PPG_OXI_TCCAL_T_CAL_COMP_OFFSET		        0x0D
#define PPG_OXI_TCCAL_T_CAL_COMP_NBITS			    0x02  

#define PPG_OXI_TCCAL_T_CAL_WAIT_OFFSET				0x10
#define PPG_OXI_TCCAL_T_CAL_WAIT_NBITS				0x04  

// Macro to calculate program sequence register
#define ANALOG_ARCHI_PPG_PSR(seq,reg) ((PPG_OXI_PSR_0_0 + (seq<<2) + seq + reg)<<2)

// oxiPSR
// i_0
#define PPG_OXI_PSR_i_0 							0x00

#define PPG_OXI_PSR_i_0_CH_OUT_OFFSET				0x00
#define PPG_OXI_PSR_i_0_CH_OUT_NBITS				0x04  

#define PPG_OXI_PSR_i_0_CH_IN_OFFSET				0x04
#define PPG_OXI_PSR_i_0_CH_IN_NBITS					0x04  

#define PPG_OXI_PSR_i_0_INV_INPUT_MODE_OFFSET		0x08
#define PPG_OXI_PSR_i_0_INV_INPUT_MODE_NBITS		0x04  

#define PPG_OXI_PSR_i_0_NO_PRECHG_MODE_OFFSET		0x0C
#define PPG_OXI_PSR_i_0_NO_PRECHG_MODE_NBITS		0x01  

#define PPG_OXI_PSR_i_0_CTIA_ALL_CF_OFFSET			0x0D
#define PPG_OXI_PSR_i_0_CTIA_ALL_CF_NBITS			0x01  

#define PPG_OXI_PSR_i_0_DIRCET_SAMPLE_MODE_OFFSET	0x0E
#define PPG_OXI_PSR_i_0_DIRCET_SAMPLE_MODE_NBITS	0x01  

#define PPG_OXI_PSR_i_0_NO_DCS_MODE_OFFSET			0x0F
#define PPG_OXI_PSR_i_0_NO_DCS_MODE_NBITS			0x01  

#define PPG_OXI_PSR_i_0_SINGLE_CH_MODE_OFFSET		0x10
#define PPG_OXI_PSR_i_0_SINGLE_CH_MODE_NBITS		0x01  

#define PPG_OXI_PSR_i_0_CDS_MODE_OFFSET				0x11
#define PPG_OXI_PSR_i_0_CDS_MODE_NBITS				0x02  

#define PPG_OXI_PSR_i_0_OS_SHORT_PULSE_OFFSET		0x13
#define PPG_OXI_PSR_i_0_OS_SHORT_PULSE_NBITS		0x01  

#define PPG_OXI_PSR_i_0_OS_CNFG_OFFSET				0x14
#define PPG_OXI_PSR_i_0_OS_CNFG_NBITS				0x03  

#define PPG_OXI_PSR_i_0_LIM_OS_OFFSET				0x17
#define PPG_OXI_PSR_i_0_LIM_OS_NBITS				0x01  

#define PPG_OXI_PSR_i_0_DCS_CNFG_DK_OFFSET			0x18
#define PPG_OXI_PSR_i_0_DCS_CNFG_DK_NBITS			0x08  
// i_1
#define PPG_OXI_PSR_i_1 							0x01

#define PPG_PSR_i_1_RF_CNFG_RED_OFFSET				0x00
#define PPG_PSR_i_1_RF_CNFG_RED_NBITS				0x09 

#define PPG_PSR_i_1_CF_CNFG_RED_OFFSET				0x09
#define PPG_PSR_i_1_CF_CNFG_RED_NBITS				0x05 

#define PPG_PSR_i_1_EN_SUBSAMPLE_RED_OFFSET			0x0E
#define PPG_PSR_i_1_EN_SUBSAMPLE_RED_NBITS			0x01 

#define PPG_PSR_i_1_EN_SUBSAMPLE_IR_OFFSET			0x0F
#define PPG_PSR_i_1_EN_SUBSAMPLE_IR_NBITS			0x01 

#define PPG_PSR_i_1_RF_CNFG_IR_OFFSET				0x10
#define PPG_PSR_i_1_RF_CNFG_IR_NBITS				0x09 

#define PPG_PSR_i_1_CF_CNFG_IR_OFFSET				0x19
#define PPG_PSR_i_1_CF_CNFG_IR_NBITS				0x05  

#define PPG_PSR_i_1_IR_SUB_CH_ONLY_OFFSET			0x1F
#define PPG_PSR_i_1_IR_SUB_CH_ONLY_NBITS			0x01                        			
// i_2
#define PPG_OXI_PSR_i_2 							0x02

#define PPG_PSR_i_2_DAC_CODE_RED_OFFSET				0x00
#define PPG_PSR_i_2_DAC_CODE_RED_NBITS				0x08

#define PPG_PSR_i_2_DCS_CNFG_RED_OFFSET				0x08
#define PPG_PSR_i_2_DCS_CNFG_RED_NBITS				0x08

#define PPG_PSR_i_2_DAC_CODE_IR_OFFSET				0x10
#define PPG_PSR_i_2_DAC_CODE_IR_NBITS				0x08

#define PPG_PSR_i_2_DCS_CNFG_IR_OFFSET				0x18
#define PPG_PSR_i_2_DCS_CNFG_IR_NBITS				0x08
// i_3
#define PPG_OXI_PSR_i_3 							0x03

#define PPG_PSR_i_3_T_TRACK_RED_OFFSET    			0x00
#define PPG_PSR_i_3_T_TRACK_RED_NBITS    			0x0B

#define PPG_PSR_i_3_EN_PD_MATRIX_OFFSET    			0x0B
#define PPG_PSR_i_3_EN_PD_MATRIX_NBITS    			0x01

#define PPG_PSR_i_3_PD_M_SEL_OFFSET    				0x0C
#define PPG_PSR_i_3_PD_M_SEL_NBITS    				0x04

#define PPG_PSR_i_3_T_TRACK_IR_OFFSET    			0x10
#define PPG_PSR_i_3_T_TRACK_IR_NBITS    			0x0B

#define PPG_PSR_i_3_NO_DK_OUT_OFFSET    			0x1B
#define PPG_PSR_i_3_NO_DK_OUT_NBITS    				0x01

#define PPG_PSR_i_3_SUB_SAMPLING_OFFSET    			0x1C
#define PPG_PSR_i_3_SUB_SAMPLING_NBITS    			0x04
// i_4
#define PPG_OXI_PSR_i_4 							0x04

#define PPG_PSR_i_4_T_TRACK_DK_RED_OFFSET			0x00
#define PPG_PSR_i_4_T_TRACK_DK_RED_NBITS			0x0B

#define PPG_PSR_i_4_EN_ANODE_MUX_OFFSET				0x0B
#define PPG_PSR_i_4_EN_ANODE_MUX_NBITS				0x01

#define PPG_PSR_i_4_ANODE_SEL_OFFSET	        	0x0C
#define PPG_PSR_i_4_ANODE_SEL_NBITS		        	0x04

#define PPG_PSR_i_4_T_TRACK_DK_IR_OFFSET	    	0x10
#define PPG_PSR_i_4_T_TRACK_DK_IR_NBITS		    	0x0B

#define PPG_PSR_i_4_CF_CNFG_DK_OFFSET				0x1B
#define PPG_PSR_i_4_CF_CNFG_DK_NBITS				0x05    

// oxiTCR
#define PPG_OXI_TCR_RS_1_SHORT_OFFSET			    0x00
#define PPG_OXI_TCR_RS_1_SHORT_NBITS				0x01

#define PPG_OXI_TCR_RS_1_CNFG_OFFSET				0x01
#define PPG_OXI_TCR_RS_1_CNFG_NBITS				    0x03

#define PPG_OXI_TCR_RS_2_SHORT_OFFSET				0x04
#define PPG_OXI_TCR_RS_2_SHORT_NBITS				0x01

#define PPG_OXI_TCR_RS_2_CNFG_OFFSET				0x05
#define PPG_OXI_TCR_RS_2_CNFG_NBITS					0x02

#define PPG_OXI_TCR_RS_ADC_SHORT_OFFSET				0x07
#define PPG_OXI_TCR_RS_ADC_SHORT_NBITS				0x01

#define PPG_OXI_TCR_RS_ADC_CNFG_OFFSET				0x08
#define PPG_OXI_TCR_RS_ADC_CNFG_NBITS				0x02

#define PPG_OXI_TCR_RS_SOS_SHORT_OFFSET				0x0A
#define PPG_OXI_TCR_RS_SOS_SHORT_NBITS				0x01

#define PPG_OXI_TCR_RS_SOS_CNFG_OFFSET				0x0B
#define PPG_OXI_TCR_RS_SOS_CNFG_NBITS				0x02

#define PPG_OXI_TCR_R_PRE_SHORT_OFFSET				0x0D
#define PPG_OXI_TCR_R_PRE_SHORT_NBITS				0x01

#define PPG_OXI_TCR_R_PRE_CNFG_OFFSET				0x0E
#define PPG_OXI_TCR_R_PRE_CNFG_NBITS				0x03

#define PPG_OXI_TCR_EN_REF_LADDER_OFFSET			0x11
#define PPG_OXI_TCR_EN_REF_LADDER_NBITS				0x01

#define PPG_OXI_TCR_CNFG_REF_ADC_OFFSET				0x12
#define PPG_OXI_TCR_CNFG_REF_ADC_NBITS				0x04

#define PPG_OXI_TCR_CNFG_REF_TIA_OFFSET				0x16
#define PPG_OXI_TCR_CNFG_REF_TIA_NBITS				0x04

#define PPG_OXI_TCR_TAO_SEL_OTA_OFFSET				0x1A
#define PPG_OXI_TCR_TAO_SEL_OTA_NBITS				0x01

#define PPG_OXI_TCR_TAO_SEL_REF_OFFSET				0x1B
#define PPG_OXI_TCR_TAO_SEL_REF_NBITS				0x01

#define PPG_OXI_TCR_EN_INP_CH3_OFFSET				0x1C
#define PPG_OXI_TCR_EN_INP_CH3_NBITS				0x01

// oxiDCR
// 0
#define PPG_OXI_DCR_0_DAC_CNFG_RES_OFFSET			0x00
#define PPG_OXI_DCR_0_DAC_CNFG_RES_NBITS			0x04   

#define PPG_OXI_DCR_0_DAC_BUF_BIAS_OFFSET			0x04
#define PPG_OXI_DCR_0_DAC_BUF_BIAS_NBITS			0x02   

#define PPG_OXI_DCR_0_TAO_SEL_COMP_OFFSET			0x06
#define PPG_OXI_DCR_0_TAO_SEL_COMP_NBITS			0x01   

#define PPG_OXI_DCR_0_TAO_SEL_DAC_OFFSET			0x07
#define PPG_OXI_DCR_0_TAO_SEL_DAC_NBITS				0x01   

#define PPG_OXI_DCR_0_TAO_SEL_LED_SENSE_OFFSET		0x08
#define PPG_OXI_DCR_0_TAO_SEL_LED_SENSE_NBITS		0x01   

#define PPG_OXI_DCR_0_EN_BIAS_LD_CAL_OFFSET			0x09
#define PPG_OXI_DCR_0_EN_BIAS_LD_CAL_NBITS			0x01   

#define PPG_OXI_DCR_0_HI_BIAS_LD_CAL_OFFSET			0x0A
#define PPG_OXI_DCR_0_HI_BIAS_LD_CAL_NBITS			0x01   

#define PPG_OXI_DCR_0_COMP_DEG_CONFIG_OFFSET		0x0B
#define PPG_OXI_DCR_0_COMP_DEG_CONFIGE_NBITS		0x03   

#define PPG_OXI_DCR_0_EN_RSVD_ISO_BUF_OFFSET		0x0E
#define PPG_OXI_DCR_0_EN_RSVD_ISO_BUF_NBITS			0x01   

#define PPG_OXI_DCR_0_EN_OUTER_ISO_BUF_OFFSET		0x0F
#define PPG_OXI_DCR_0_EN_OUTER_ISO_BUF_NBITS		0x01   

#define PPG_OXI_DCR_0_NUM_SEQ_REP_OFFSET			0x10
#define PPG_OXI_DCR_0_NUM_SEQ_REP_NBITS				0x0F                        			
// 1
#define PPG_OXI_DCR_1_PG_OVERWRITE_DISABLE_OFFSET	0x00
#define PPG_OXI_DCR_1_PG_OVERWRITE_DISABLE_NBITS	0x01

#define PPG_OXI_DCR_1_PG_OVERWRITE_EN_OFFSET		0x01
#define PPG_OXI_DCR_1_PG_OVERWRITE_EN_NBITS			0x01 

// tmaBCR  
#define PPG_TMA_BCR_EN_BIAS_GLOBAL_OFFSET			0x00
#define PPG_TMA_BCR_EN_BIAS_GLOBAL_NBITS			0x01 

#define PPG_TMA_BCR_EN_BIAS_LD_DRIV_OFFSET			0x01
#define PPG_TMA_BCR_EN_BIAS_LD_DRIV_NBITS			0x01 

#define PPG_TMA_BCR_EN_BIAS_TIA_REF_M_OFFSET		0x02
#define PPG_TMA_BCR_EN_BIAS_TIA_REF_M_NBITS			0x01 

#define PPG_TMA_BCR_EN_BIAS_TIA_CM_OFFSET			0x03
#define PPG_TMA_BCR_EN_BIAS_TIA_CM_NBITS			0x01 

#define PPG_TMA_BCR_EN_BIAS_TIA_REF_P_OFFSET		0x04
#define PPG_TMA_BCR_EN_BIAS_TIA_REF_P_NBITS			0x01 

#define PPG_TMA_BCR_EN_BIAS_LD_DAC_OFFSET			0x05
#define PPG_TMA_BCR_EN_BIAS_LD_DAC_NBITS			0x01 

#define PPG_TMA_BCR_EN_BIAS_TIA_DCS_OFFSET			0x06
#define PPG_TMA_BCR_EN_BIAS_TIA_DCS_NBITS			0x01 

#define PPG_TMA_BCR_EN_BIAS_TIA_OTA_OFFSET			0x07
#define PPG_TMA_BCR_EN_BIAS_TIA_OTA_NBITS			0x01 

#define PPG_TMA_BCR_EN_BIAS_LD_COMP_OFFSET			0x08
#define PPG_TMA_BCR_EN_BIAS_LD_COMP_NBITS			0x01 

#define PPG_TMA_BCR_EN_BIAS_ADC_REF_OFFSET			0x09
#define PPG_TMA_BCR_EN_BIAS_ADC_REF_NBITS			0x01 

#define PPG_TMA_BCR_EN_BIAS_ADC_CM_OFFSET			0x0A
#define PPG_TMA_BCR_EN_BIAS_ADC_CM_NBITS			0x01 

#define PPG_TMA_BCR_HI_BIAS_LD_DRIV_OFFSET			0x0B
#define PPG_TMA_BCR_HI_BIAS_LD_DRIV_NBITS			0x02 

#define PPG_TMA_BCR_HI_BIAS_TIA_OTA_OFFSET			0x0D
#define PPG_TMA_BCR_HI_BIAS_TIA_OTA_NBITS			0x02 

#define PPG_TMA_BCR_HI_BIAS_LD_COMP_OFFSET			0x0F
#define PPG_TMA_BCR_HI_BIAS_LD_COMP_NBITS			0x01 

#define PPG_TMA_BCR_HI_BIAS_TIA_REF_M_OFFSET		0x10
#define PPG_TMA_BCR_HI_BIAS_TIA_REF_M_NBITS			0x01 

#define PPG_TMA_BCR_HI_BIAS_TIA_CM_OFFSET			0x11
#define PPG_TMA_BCR_HI_BIAS_TIA_CM_NBITS			0x01 

#define PPG_TMA_BCR_HI_BIAS_TIA_REF_P_OFFSET		0x12
#define PPG_TMA_BCR_HI_BIAS_TIA_REF_P_NBITS			0x02 

#define PPG_TMA_BCR_HI_BIAS_LD_DAC_OFFSET			0x14
#define PPG_TMA_BCR_HI_BIAS_LD_DAC_NBITS			0x02 

#define PPG_TMA_BCR_HI_BIAS_TIA_DCS_OFFSET			0x16
#define PPG_TMA_BCR_HI_BIAS_TIA_DCS_NBITS			0x01 

#define PPG_TMA_BCR_N_EN_VREF12_BUF_BIAS_OFFSET		0x17
#define PPG_TMA_BCR_N_EN_VREF12_BUF_BIAS_NBITS		0x01 

#define PPG_TMA_BCR_ADC_CM_BUF_CNFG_OFFSET			0x18
#define PPG_TMA_BCR_ADC_CM_BUF_CNFG_NBITS			0x04 

#define PPG_TMA_BCR_ADC_REF_BUF_CNFG_OFFSET			0x1C
#define PPG_TMA_BCR_ADC_REF_BUF_CNFG_NBITS			0x04 

// vivICR
#define PPG_VIV_ICR_VALID_DELAY_OFFSET				0x00
#define PPG_VIV_ICR_VALID_DELAY_NBITS				0x05

#define PPG_VIV_ICR_VALID_DURATION_OFFSET			0x05
#define PPG_VIV_ICR_VALID_DURATION_NBITS			0x05

#define PPG_VIV_ICR_OUT_BUS_MUX_OFFSET				0x0A
#define PPG_VIV_ICR_OUT_BUS_MUX_NBITS				0x02

// sarOOR
#define PPG_SAR_OOR_READY_OFFSET					0x00
#define PPG_SAR_OOR_READY_NBITS						0x01

#define PPG_SAR_OOR_EOC_OFFSET						0x01
#define PPG_SAR_OOR_EOC_NBITS						0x01

#define PPG_SAR_OOR_PG_V33_LED_OFFSET				0x04
#define PPG_SAR_OOR_PG_V33_LED_NBITS				0x01

#define PPG_SAR_OOR_CURRENT_CHECK_OFFSET			0x10
#define PPG_SAR_OOR_CURRENT_CHECK_NBITS				0x0A

// oxiCOR
#define PPG_SAR_COR_CAL_DAC_CODE_OFFSET				0x00
#define PPG_SAR_COR_CAL_DAC_CODE_NBITS				0x08

#define PPG_SAR_COR_CAL_VALID_OFFSET				0x08
#define PPG_SAR_COR_CAL_VALID_NBITS					0x01

#else
#error Archi file for VivoSoC/PPG already included
#endif		// __ARCHI_ANALOG_PPG_H__
