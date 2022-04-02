/* 
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 *
 * Authors: Jonathan Boesser (jboesser@iis.ee.ethz.ch)
 */

#ifndef __ARCHI_ANALOG_BIOZ_H__
#define __ARCHI_ANALOG_BIOZ_H__

/*
 * Analog BIOZ ARCHI file for VivoSoC IP: BIOZ_IP
 * Use this file for BIOZ IP compliant to VivoSoC3
 *
 */

/*
 * BIOZ_IP: BioZ - AFE and SAR
 */

// Register defines, register number according to register offset in IP
#define BIOZ_ADC_CWR_0                				0x00	// rw
#define BIOZ_ADC_CWR_1                				0x01	// rw
#define BIOZ_ADC_CWR_2                				0x02	// rw
#define BIOZ_ADC_CWR_3                				0x03	// rw
#define BIOZ_ADC_CWR_4                				0x04	// rw
#define BIOZ_ADC_CWR_5                				0x05	// rw
#define BIOZ_ADC_CWR_6                				0x06	// rw
#define BIOZ_ADC_CWR_7                				0x07	// rw
#define BIOZ_ADC_CWR_8                				0x08	// rw
#define BIOZ_ADC_CWR_9                				0x09	// rw
#define BIOZ_ADC_CWR_10                				0x0A	// rw
#define BIOZ_ADC_CWR_11                				0x0B	// rw
#define BIOZ_ADC_CWR_12                				0x0C	// rw
#define BIOZ_ADC_CWR_13                				0x0D	// rw
#define BIOZ_ADC_CWR_14                				0x0E	// rw
#define BIOZ_ADC_CWR_15                				0x0F	// rw
#define BIOZ_ADC_CWR_16                				0x10	// rw
#define BIOZ_SAR_PCWR                				0x11	// rw
#define BIOZ_ADC_OSR                    			0x12	// rw
#define BIOZ_ADC_MFCR                				0x13	// rw
#define BIOZ_ADC_ASR                    			0x14	// rw
#define BIOZ_SAR_SGS                    			0x15	// rw
#define BIOZ_ADC_DSR                    			0x16	// rw
#define BIOZ_ADC_LCR                    			0x17	// rw
#define BIOZ_SAR_CC_0                				0x18	// rw
#define BIOZ_SAR_CC_1                				0x19	// rw
#define BIOZ_SAR_CC_2                				0x1A	// rw
#define BIOZ_SAR_CC_3                				0x1B	// rw
#define BIOZ_SAR_CC_4                				0x1C	// rw
#define BIOZ_SAR_CC_5                				0x1D	// rw
#define BIOZ_SAR_CC_6                				0x1E	// rw
#define BIOZ_SAR_CC_7                				0x1F	// rw
#define BIOZ_SAR_CC_8                				0x20	// rw
#define BIOZ_SAR_CC_9                				0x21	// rw
#define BIOZ_SAR_CC_10                				0x22	// rw
#define BIOZ_SAR_CC_11                				0x23	// rw
#define BIOZ_SAR_CC_12                				0x24	// rw
#define BIOZ_SAR_CC_13                				0x25	// rw
#define BIOZ_SAR_CC_14                				0x26	// rw
#define BIOZ_SAR_CC_15                				0x27	// rw
#define BIOZ_SAR_CC_16                				0x28	// rw
#define BIOZ_SAR_RC                   				0x29	// rw
#define BIOZ_SAR_CIC_0                    			0x2A	// rw
#define BIOZ_SAR_CIC_1                    			0x2B	// rw
#define BIOZ_0    	                    			0x2C	// rw
#define BIOZ_1  	                      			0x2D	// rw

// Bitfield defines

// adcCWR
// 0
#define BIOZ_ADC_CWR_0_OFFSET                     	0x00
#define BIOZ_ADC_CWR_0_NBITS                     	0x1A
// 1
#define BIOZ_ADC_CWR_1_OFFSET                   	0x00
#define BIOZ_ADC_CWR_1_NBITS                   		0x1A
// 2
#define BIOZ_ADC_CWR_2_OFFSET                     	0x00
#define BIOZ_ADC_CWR_2_NBITS                     	0x1A
// 3
#define BIOZ_ADC_CWR_3_OFFSET                     	0x00
#define BIOZ_ADC_CWR_3_NBITS                     	0x19
// 4
#define BIOZ_ADC_CWR_4_OFFSET                     	0x00
#define BIOZ_ADC_CWR_4_NBITS                     	0x18
// 5
#define BIOZ_ADC_CWR_5_OFFSET                     	0x00
#define BIOZ_ADC_CWR_5_NBITS                     	0x17
// 6
#define BIOZ_ADC_CWR_6_OFFSET                     	0x00
#define BIOZ_ADC_CWR_6_NBITS                     	0x16
// 7
#define BIOZ_ADC_CWR_7_OFFSET                     	0x00
#define BIOZ_ADC_CWR_7_NBITS                     	0x15
// 8
#define BIOZ_ADC_CWR_8_OFFSET                     	0x00
#define BIOZ_ADC_CWR_8_NBITS                     	0x14
// 9
#define BIOZ_ADC_CWR_9_OFFSET                     	0x00
#define BIOZ_ADC_CWR_9_NBITS                     	0x13
// 10
#define BIOZ_ADC_CWR_10_OFFSET                     	0x00
#define BIOZ_ADC_CWR_10_NBITS                     	0x12
// 11
#define BIOZ_ADC_CWR_11_OFFSET                     	0x00
#define BIOZ_ADC_CWR_11_NBITS                     	0x12
// 12
#define BIOZ_ADC_CWR_12_OFFSET                     	0x00
#define BIOZ_ADC_CWR_12_NBITS                     	0x11
// 13
#define BIOZ_ADC_CWR_13_OFFSET                     	0x00
#define BIOZ_ADC_CWR_13_NBITS                     	0x10
// 14
#define BIOZ_ADC_CWR_14_OFFSET                     	0x00
#define BIOZ_ADC_CWR_14_NBITS                     	0x0F
// 15
#define BIOZ_ADC_CWR_15_OFFSET                     	0x00
#define BIOZ_ADC_CWR_15_NBITS                     	0x0E
// 16
#define BIOZ_ADC_CWR_16_OFFSET                     	0x00
#define BIOZ_ADC_CWR_16_NBITS                     	0x0E

// sarPCWR
#define BIOZ_SAR_PCWR_OFFSET                    	0x00
#define BIOZ_SAR_PCWR_NBITS                  	 	0x17

// adcOSR
#define BIOZ_ADC_OSR_OFFSET                			0x00
#define BIOZ_ADC_OSR_NBITS                			0x1A

// adcMFCR
#define BIOZ_ADC_MFCR_RESET_OFFSET     				0x00              
#define BIOZ_ADC_MFCR_RESET_NBITS                   0x01

#define BIOZ_ADC_MFCR_UPDATE_CALIB_OFFSET           0x01       
#define BIOZ_ADC_MFCR_UPDATE_CALIB_NBITS            0x01      

#define BIOZ_ADC_MFCR_MUW_OFFSET                    0x02
#define BIOZ_ADC_MFCR_MUW_NBITS                     0x05

#define BIOZ_ADC_MFCR_MUD_OFFSET                    0x07
#define BIOZ_ADC_MFCR_MUD_NBITS                     0x05

#define BIOZ_ADC_MFCR_IN_DS_OFFSET                  0x0C 
#define BIOZ_ADC_MFCR_IN_DS_NBITS                   0x03

#define BIOZ_ADC_MFCR_SAMPLING_MODE_OFFSET          0x0F        
#define BIOZ_ADC_MFCR_SAMPLING_MODE_NBITS           0x02        

#define BIOZ_ADC_MFCR_SIG_GEN_OFFSET                0x12  
#define BIOZ_ADC_MFCR_SIG_GEN_NBITS                 0x01  

#define BIOZ_ADC_MFCR_RAW_OUT_OFFSET                0x13  
#define BIOZ_ADC_MFCR_RAW_OUT_NBITS                 0x01  

#define BIOZ_ADC_MFCR_LAST_CYCLE_OFFSET             0x14     
#define BIOZ_ADC_MFCR_LAST_CYCLE_NBITS              0x05    

// adcASR
#define BIOZ_ADC_ASR_COMP_SEL_OFFSET                0x00    			
#define BIOZ_ADC_ASR_COMP_SEL_NBITS                 0x03   	

#define BIOZ_ADC_ASR_PERT_EN_OFFSET                 0x03   			
#define BIOZ_ADC_ASR_PERT_EN_NBITS                  0x01  	                    	

#define BIOZ_ADC_ASR_DITH_EN_OFFSET                 0x04   			
#define BIOZ_ADC_ASR_DITH_EN_NBITS                  0x10  	                    	

#define BIOZ_ADC_ASR_REF_CAP_OFFSET                 0x14   			
#define BIOZ_ADC_ASR_REF_CAP_NBITS                  0x01 

// sarSGS
#define BIOZ_SAR_SGS_SIG_GEN_LIM_LO_OFFSET			0x00
#define BIOZ_SAR_SGS_SIG_GEN_LIM_LO_NBITS			0x05    

#define BIOZ_SAR_SGS_SIG_GEN_LIM_HI_OFFSET			0x05
#define BIOZ_SAR_SGS_SIG_GEN_LIM_HI_NBITS			0x05 

#define BIOZ_SAR_SGS_SIG_GEN_HI_OFFSET				0x0A
#define BIOZ_SAR_SGS_SIG_GEN_HI_NBITS				0x02 

#define BIOZ_SAR_SGS_SIG_GEN_LO_OFFSET				0x0C
#define BIOZ_SAR_SGS_SIG_GEN_LO_NBITS				0x03 

#define BIOZ_SAR_SGS_SIG_GEN_STEP_OFFSET			0x0F
#define BIOZ_SAR_SGS_SIG_GEN_STEP_NBITS				0x03 

#define BIOZ_SAR_SGS_SHIFT_VALID_OFFSET				0x12
#define BIOZ_SAR_SGS_SHIFT_VALID_NBITS				0x05 

#define BIOZ_SAR_SGS_VALID_WIDTH_OFFSET				0x17
#define BIOZ_SAR_SGS_VALID_WIDTH_NBITS				0x05 

#define BIOZ_SAR_SGS_BUFFER_ENABLE_OFFSET			0x1C
#define BIOZ_SAR_SGS_BUFFER_ENABLE_NBITS			0x01 

#define BIOZ_SAR_SGS_BUFFER_MODE_OFFSET				0x1D
#define BIOZ_SAR_SGS_BUFFER_MODE_NBITS				0x02 

#define BIOZ_SAR_SGS_READ_CALIB_OFFSET				0x1F
#define BIOZ_SAR_SGS_READ_CALIB_NBITS				0x01  

// adcDSR
#define BIOZ_ADC_DSR_VALUE_OFFSET					0x00
#define BIOZ_ADC_DSR_VALUE_NBITS					0x20              			

// adcLCR
#define BIOZ_ADC_LCR_EN_IDS_LIMCON_OFFSET           0x00
#define BIOZ_ADC_LCR_EN_IDS_LIMCON_NBITS            0x01     

#define BIOZ_ADC_LCR_IDS_LIMCON_CYCLES_OFFSET       0x01
#define BIOZ_ADC_LCR_IDS_LIMCON_CYCLES_NBITS        0x04    

#define BIOZ_ADC_LCR_LIMCON_CYCLES_OFFSET           0x05
#define BIOZ_ADC_LCR_LIMCON_CYCLES_NBITS            0x04      			

// SAR clocking cycles
#define BIOZ_SAR_CC_REG_CYC_EN_OFFSET				0x00
#define BIOZ_SAR_CC_REG_CYC_EN_NBITS				0x01

#define BIOZ_SAR_CC_REG_NUM_COMP_OFFSET				0x01
#define BIOZ_SAR_CC_REG_NUM_COMP_NBITS				0x05

#define BIOZ_SAR_CC_REG_SETTLING_CYC_OFFSET			0x06
#define BIOZ_SAR_CC_REG_SETTLING_CYC_NBITS			0x05

#define BIOZ_SAR_CC_REG_CAP_NO_OFFSET				0x0B
#define BIOZ_SAR_CC_REG_CAP_NO_NBITS				0x05

#define BIOZ_SAR_CC_REG_VREF_BIAS_CURR_OFFSET		0x10
#define BIOZ_SAR_CC_REG_VREF_BIAS_CURR_NBITS		0x04

#define BIOZ_SAR_CC_REG_CM_BIAS_CURR_OFFSET			0x14
#define PPG_SAR_CC_REG_CM_BIAS_CURR_NBITS			0x04			

// CIC filter
#define BIOZ_SAR_CIC_REG_K_1_OFFSET					0x00
#define BIOZ_SAR_CIC_REG_K_1_NBITS					0x04

#define BIOZ_SAR_CIC_REG_K_2_OFFSET					0x04
#define BIOZ_SAR_CIC_REG_K_2_NBITS					0x03

#define BIOZ_SAR_CIC_REG_MODE_OFFSET				0x07
#define BIOZ_SAR_CIC_REG_MODE_NBITS					0x02

#define BIOZ_SAR_CIC_REG_TRUNK_OFFSET				0x09
#define BIOZ_SAR_CIC_REG_TRUNK_NBITS				0x05

#define BIOZ_SAR_CIC_REG_BYPASS_OFFSET				0x0E
#define BIOZ_SAR_CIC_REG_BYPASS_NBITS				0x01

// BioZ
//0
#define BIOZ_0_VCM_BUF_IBX_OFFSET        			0x00
#define BIOZ_0_VCM_BUF_IBX_NBITS         			0x02

#define BIOZ_0_BIAS_EN_OFFSET        				0x02
#define BIOZ_0_BIAS_EN_NBITS         				0x01

#define BIOZ_0_GEN_SIN_OFFSET        				0x03
#define BIOZ_0_GEN_SIN_NBITS         				0x01

#define BIOZ_0_INP_STAGE_LOW_IB_OFFSET 				0x04
#define BIOZ_0_INP_STAGE_LOW_IB_NBITS        		0x01

#define BIOZ_0_INP_STAGE_IB_OFFSET        			0x05
#define BIOZ_0_INP_STAGE_IB_NBITS         			0x02

#define BIOZ_0_INP_STAGE_GAIN_SEL_OFFSET      	  	0x07
#define BIOZ_0_INP_STAGE_GAIN_SEL_NBITS         	0x02

#define BIOZ_0_TIA_INT_FB_LOW_IB_OFFSET        		0x09
#define BIOZ_0_TIA_INT_FB_LOW_IB_NBITS         		0x01

#define BIOZ_0_TIA_INT_FB_IB_OFFSET        			0x0A
#define BIOZ_0_TIA_INT_FB_IB_NBITS         			0x02

#define BIOZ_0_TIA_LOW_IB_OFFSET        			0x0C
#define BIOZ_0_TIA_LOW_IB_NBITS         			0x01

#define BIOZ_0_TIA_IB_OFFSET        				0x0D
#define BIOZ_0_TIA_IB_NBITS         				0x02

#define BIOZ_0_TIA_GAIN_SEL_OFFSET        			0x0F
#define BIOZ_0_TIA_GAIN_SEL_NBITS         			0x03

#define BIOZ_0_TIA_BW_SEL_OFFSET        			0x12
#define BIOZ_0_TIA_BW_SEL_NBITS         			0x02

#define BIOZ_0_TIA_COMP_LOW_OFFSET        			0x14
#define BIOZ_0_TIA_COMP_LOW_NBITS         			0x01

#define BIOZ_0_LPF_LOW_IB_OFFSET        			0x15
#define BIOZ_0_LPF_LOW_IB_NBITS         			0x01

#define BIOZ_0_LPF_GAIN_6_DB_OFFSET        			0x16
#define BIOZ_0_LPF_GAIN_6_DB_NBITS         			0x01

#define BIOZ_0_LPF_BW_SEL_OFFSET        			0x17
#define BIOZ_0_LPF_BW_SEL_NBITS         			0x02

#define BIOZ_0_LPF_AMP_2_OFFSET        				0x19
#define BIOZ_0_LPF_AMP_2_NBITS         				0x02

#define BIOZ_0_LPF_AMP_1_OFFSET        				0x1B
#define BIOZ_0_LPF_AMP_1_NBITS         				0x02

#define BIOZ_0_DEMOD_EN_OFFSET        				0x1D
#define BIOZ_0_DEMOD_EN_NBITS         				0x01

#define BIOZ_0_GEN_I_X2_OFFSET        				0x1E
#define BIOZ_0_GEN_I_X2_NBITS         				0x01

#define BIOZ_0_GEN_I_X4_OFFSET        				0x1F
#define BIOZ_0_GEN_I_X4_NBITS         				0x01
//1

#define BIOZ_1_GEN_I_X8_OFFSET        				0x00
#define BIOZ_1_GEN_I_X8_NBITS         				0x01

#define BIOZ_1_GEN_FC_X2_OFFSET        				0x01
#define BIOZ_1_GEN_FC_X2_NBITS         				0x01

#define BIOZ_1_GEN_FC_X4_OFFSET        				0x02
#define BIOZ_1_GEN_FC_X4_NBITS         				0x01

#define BIOZ_1_GEN_NO_LP_OFFSET        				0x03
#define BIOZ_1_GEN_NO_LP_NBITS         				0x01

#define BIOZ_1_DAC_IB_OFFSET        				0x04
#define BIOZ_1_DAC_IB_NBITS         				0x02

#define BIOZ_1_GEN_TIA_IB_OFFSET        			0x06
#define BIOZ_1_GEN_TIA_IB_NBITS         			0x02

#define BIOZ_1_GEN_TIA_LOW_IB_OFFSET        		0x08
#define BIOZ_1_GEN_TIA_LOW_IB_NBITS         		0x01

#define BIOZ_1_GEN_INT_FB_OFFSET        			0x09
#define BIOZ_1_GEN_INT_FB_NBITS         			0x02

#define BIOZ_1_GEN_INT_FB_LOW_IB_OFFSET        		0x0B
#define BIOZ_1_GEN_INT_FB_LOW_IB_NBITS         		0x01

#define BIOZ_1_GEN_INT_FB_EN_OFFSET        			0x0C
#define BIOZ_1_GEN_INT_FB_EN_NBITS         			0x01

#else
#error Archi file for VivoSoC/BioZ already included
#endif		// __ARCHI_ANALOG_BIOZ_H__