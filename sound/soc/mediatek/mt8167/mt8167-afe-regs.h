/*
 * mt8167_afe_regs.h  --  Mediatek audio register definitions
 *
 * Copyright (c) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _MT8167_AFE_REGS_H_
#define _MT8167_AFE_REGS_H_

#include <linux/bitops.h>

/*****************************************************************************
 *                  R E G I S T E R       D E F I N I T I O N
 *****************************************************************************/
#define AUDIO_TOP_CON0		0x0000
#define AUDIO_TOP_CON1		0x0004
#define AUDIO_TOP_CON3		0x000c
#define AFE_DAC_CON0		0x0010
#define AFE_DAC_CON1		0x0014
#define AFE_I2S_CON		0x0018
#define AFE_I2S_CON1		0x0034
#define AFE_I2S_CON2		0x0038
#define AFE_I2S_CON3		0x004c
#define AFE_DAIBT_CON0          0x001c
#define AFE_MRGIF_CON           0x003c
#define AFE_CONN_24BIT		0x006c

#define AFE_CONN0		0x0020
#define AFE_CONN1		0x0024
#define AFE_CONN2		0x0028
#define AFE_CONN3		0x002C
#define AFE_CONN4		0x0030
#define AFE_CONN5		0x005C
#define AFE_HDMI_CONN0		0x0390
#define AFE_CONN_TDMIN_CON	0x039C

/* Memory interface */
#define AFE_DL1_BASE		0x0040
#define AFE_DL1_CUR		0x0044
#define AFE_DL1_END		0x0048
#define AFE_DL2_BASE		0x0050
#define AFE_DL2_CUR		0x0054
#define AFE_DL2_END             0x0058
#define AFE_AWB_BASE		0x0070
#define AFE_AWB_END             0x0078
#define AFE_AWB_CUR		0x007c
#define AFE_VUL_BASE		0x0080
#define AFE_VUL_CUR		0x008c
#define AFE_VUL_END		0x0088
#define AFE_DAI_BASE		0x0090
#define AFE_DAI_END		0x0098
#define AFE_DAI_CUR		0x009c
#define AFE_MOD_PCM_BASE	0x0330
#define AFE_MOD_PCM_END		0x0338
#define AFE_MOD_PCM_CUR		0x033c
#define AFE_HDMI_OUT_BASE	0x0374
#define AFE_HDMI_OUT_CUR	0x0378
#define AFE_HDMI_OUT_END	0x037c

#define AFE_MEMIF_MSB           0x00cc
#define AFE_MEMIF_MON0          0x00d0
#define AFE_MEMIF_MON1          0x00d4
#define AFE_MEMIF_MON2          0x00d8
#define AFE_MEMIF_MON3          0x00dc

#define AFE_ADDA_DL_SRC2_CON0   0x0108
#define AFE_ADDA_DL_SRC2_CON1   0x010c
#define AFE_ADDA_UL_SRC_CON0    0x0114
#define AFE_ADDA_UL_SRC_CON1    0x0118
#define AFE_ADDA_TOP_CON0	0x0120
#define AFE_ADDA_UL_DL_CON0     0x0124
#define AFE_ADDA_NEWIF_CFG0     0x0138
#define AFE_ADDA_NEWIF_CFG1     0x013c
#define AFE_ADDA_PREDIS_CON0    0x0260
#define AFE_ADDA_PREDIS_CON1    0x0264

#define AFE_SGEN_CON0		0x01f0
#define AFE_SINEGEN_CON_TDM	0x01f8
#define AFE_SINEGEN_CON_TDM_IN	0x01fc

#define AFE_ADDA_UL_CF_CFG_02_01 0x2a4
#define AFE_ADDA_UL_CF_CFG_04_03 0x2a8
#define AFE_ADDA_UL_CF_CFG_06_05 0x2ac
#define AFE_ADDA_UL_CF_CFG_08_07 0x2b0
#define AFE_ADDA_UL_CF_CFG_10_09 0x2b4
#define AFE_ADDA_UL_CF_CFG_12_11 0x2b8
#define AFE_ADDA_UL_CF_CFG_14_13 0x2bc
#define AFE_ADDA_UL_CF_CFG_16_15 0x2c0
#define AFE_ADDA_UL_CF_CFG_18_17 0x2c4
#define AFE_ADDA_UL_CF_CFG_20_19 0x2c8
#define AFE_ADDA_UL_CF_CFG_22_21 0x2cc
#define AFE_ADDA_UL_CF_CFG_24_23 0x2d0
#define AFE_ADDA_UL_CF_CFG_26_25 0x2d4
#define AFE_ADDA_UL_CF_CFG_28_27 0x2d8
#define AFE_ADDA_UL_CF_CFG_30_29 0x2dc

#define AFE_HDMI_OUT_CON0	0x0370

#define AFE_IRQ_MCU_CON		0x03a0
#define AFE_IRQ_STATUS		0x03a4
#define AFE_IRQ_CLR		0x03a8
#define AFE_IRQ_CNT1		0x03ac
#define AFE_IRQ_CNT2		0x03b0
#define AFE_IRQ_MCU_EN		0x03b4
#define AFE_IRQ_CNT5		0x03bc
#define AFE_IRQ_CNT7		0x03dc
#define AFE_IRQ1_MCU_CNT_MON    0x03c0
#define AFE_IRQ2_MCU_CNT_MON    0x03c4
#define AFE_IRQ_MCU_CON2	0x03f8

#define AFE_MEMIF_PBUF_SIZE	0x03d8
#define AFE_MEMIF_PBUF2_SIZE	0x03ec

#define AFE_APLL1_TUNER_CFG	0x03f0
#define AFE_APLL2_TUNER_CFG	0x03f4
#define AFE_GAIN1_CON0      0x0410
#define AFE_GAIN1_CON1      0x0414
#define AFE_GAIN1_CONN      0x0420
#define AFE_GAIN1_CUR       0x0424
#define AFE_GAIN2_CON0      0x0428
#define AFE_GAIN2_CON1      0x042c
#define AFE_GAIN2_CUR       0x043C
#define AFE_GAIN1_CONN2     0x0448
#define MASK_ALL          (0xFFFFFFFF)


#define AFE_TDM_CON1		0x0548
#define AFE_TDM_CON2		0x054c

#define AFE_TDM_IN_CON1		0x0588

#define AFE_IRQ_CNT11		0x08b0
#define AFE_IRQ_CNT10		0x08dc
#define AFE_TSF_CON		0x08f0

#define AFE_SPDIFIN_CFG0	0x0900
#define AFE_SPDIFIN_CFG1	0x0904
#define AFE_SPDIFIN_CHSTS1	0x0908
#define AFE_SPDIFIN_CHSTS2	0x090c
#define AFE_SPDIFIN_CHSTS3	0x0910
#define AFE_SPDIFIN_CHSTS4	0x0914
#define AFE_SPDIFIN_CHSTS5	0x0918
#define AFE_SPDIFIN_CHSTS6	0x091c
#define AFE_SPDIFIN_DEBUG1	0x0920
#define AFE_SPDIFIN_DEBUG2	0x0924
#define AFE_SPDIFIN_DEBUG3	0x0928
#define AFE_SPDIFIN_DEBUG4	0x092c
#define AFE_SPDIFIN_EC		0x0930
#define AFE_SPDIFIN_CKLOCK_CFG	0x0934
#define AFE_SPDIFIN_BR		0x093c
#define AFE_SPDIFIN_INT_EXT	0x0948
#define AFE_SPDIFIN_INT_EXT2	0x094c

#define SPDIFIN_FREQ_INFO	0x0950
#define SPDIFIN_FREQ_INFO_2	0x0954
#define SPDIFIN_FREQ_INFO_3	0x0958
#define SPDIFIN_TYPE_DET	0x09B0

#define AFE_HDMI_IN_2CH_CON0	0x09c0
#define AFE_HDMI_IN_2CH_BASE	0x09c4
#define AFE_HDMI_IN_2CH_END	0x09c8
#define AFE_HDMI_IN_2CH_CUR	0x09cc

#define AFE_MEMIF_MON15		0x0d7c
#define ABB_AFE_SDM_TEST	0x0f4c

#define AFE_IRQ_STATUS_BITS	GENMASK(14, 0)

/* AUDIO_TOP_CON0 (0x0000) */
#define AUD_TCON0_PDN_DAC_PREDIS	BIT(26)
#define AUD_TCON0_PDN_DAC		BIT(25)
#define AUD_TCON0_PDN_ADC		BIT(24)
#define AUD_TCON0_PDN_SPDF		BIT(21)
#define AUD_TCON0_PDN_HDMI		BIT(20)
#define AUD_TCON0_PDN_APLL_TUNER	BIT(19)
#define AUD_TCON0_PDN_APLL2_TUNER	BIT(18)
#define AUD_TCON0_PDN_INTDIR_CK		BIT(15)
#define AUD_TCON0_PDN_24M		BIT(9)
#define AUD_TCON0_PDN_22M		BIT(8)
#define AUD_TCON0_PDN_I2S		BIT(6)
#define AUD_TCON0_PDN_AFE		BIT(2)

/* AUDIO_TOP_CON3 (0x000C) */
#define AUD_TCON3_HDMI_BCK_INV		BIT(3)

/* AFE_I2S_CON (0x0018) */
#define AFE_I2S_CON_PHASE_SHIFT_FIX	BIT(31)
#define AFE_I2S_CON_FROM_IO_MUX		BIT(28)
#define AFE_I2S_CON_LOW_JITTER_CLK	BIT(12)
#define AFE_I2S_CON_FORMAT_I2S		BIT(3)
#define AFE_I2S_CON_WLEN_32BIT		BIT(1)
#define AFE_I2S_CON_EN			BIT(0)

/* AFE_DAIBT_CON0 (0x001c) */
#define AFE_DAIBT_CON0_USE_MRG_INPUT    BIT(12)
#define AFE_DAIBT_CON0_DATA_DRY         BIT(3)

/* AFE_CONN1 (0x0024) */
#define AFE_CONN1_I03_O03_S		BIT(19)
#define AFE_CONN1_I06_O02_R		BIT(13)
#define AFE_CONN1_I05_O02_R		BIT(12)

/* AFE_CONN2 (0x0028) */
#define AFE_CONN2_I04_O04_S		BIT(4)
#define AFE_CONN2_I03_O04_S		BIT(3)

/* AFE_I2S_CON1 (0x0034) */
#define AFE_I2S_CON1_I2S2_TO_PAD	(1 << 18)
#define AFE_I2S_CON1_TDMOUT_TO_PAD	(0 << 18)
#define AFE_I2S_CON1_TDMOUT_MUX_MASK	GENMASK(18, 18)
#define AFE_I2S_CON1_LOW_JITTER_CLK	BIT(12)
#define AFE_I2S_CON1_RATE(x)		(((x) & 0xf) << 8)
#define AFE_I2S_CON1_FORMAT_I2S		BIT(3)
#define AFE_I2S_CON1_WLEN_32BIT		BIT(1)
#define AFE_I2S_CON1_EN			BIT(0)

/* AFE_I2S_CON2 (0x0038) */
#define AFE_I2S_CON2_LOW_JITTER_CLK	BIT(12)
#define AFE_I2S_CON2_RATE(x)		(((x) & 0xf) << 8)
#define AFE_I2S_CON2_FORMAT_I2S		BIT(3)
#define AFE_I2S_CON2_WLEN_32BIT		BIT(1)
#define AFE_I2S_CON2_EN			BIT(0)

/* AFE_I2S_CON3 (0x004C) */
#define AFE_I2S_CON3_LOW_JITTER_CLK	BIT(12)
#define AFE_I2S_CON3_RATE(x)		(((x) & 0xf) << 8)
#define AFE_I2S_CON3_FORMAT_I2S		BIT(3)
#define AFE_I2S_CON3_WLEN_32BIT		BIT(1)
#define AFE_I2S_CON3_EN			BIT(0)

/* AFE_CONN_24BIT (0x006c) */
#define AFE_CONN_24BIT_O10		BIT(10)
#define AFE_CONN_24BIT_O09		BIT(9)
#define AFE_CONN_24BIT_O06		BIT(6)
#define AFE_CONN_24BIT_O05		BIT(5)
#define AFE_CONN_24BIT_O04		BIT(4)
#define AFE_CONN_24BIT_O03		BIT(3)
#define AFE_CONN_24BIT_O02		BIT(2)
#define AFE_CONN_24BIT_O01		BIT(1)
#define AFE_CONN_24BIT_O00		BIT(0)

/* AFE_ADDA_DL_SRC2_CON0 (0x0108) */
#define AFE_ADDA_DL_8X_UPSAMPLE		(BIT(25) | BIT(24))
#define AFE_ADDA_DL_MUTE_OFF		(BIT(12) | BIT(11))
#define AFE_ADDA_DL_VOICE_DATA		BIT(5)
#define AFE_ADDA_DL_DEGRADE_GAIN	BIT(1)

/* AFE_SINEGEN_CON_TDM (0x01f8) */
#define AFE_SINEGEN_CON_TDM_OUT_EN	BIT(28)

/* AFE_SINEGEN_CON_TDM_IN (0x01fc) */
#define AFE_SINEGEN_CON_TDM_IN_EN	BIT(28)

/* AFE_HDMI_OUT_CON0 (0x0370) */
#define AFE_HDMI_OUT_CON0_CH_MASK	GENMASK(7, 4)

/* AFE_HDMI_CONN0 (0x0390) */
#define AFE_HDMI_CONN0_O35_I35		(0x7 << 21)
#define AFE_HDMI_CONN0_O34_I34		(0x6 << 18)
#define AFE_HDMI_CONN0_O33_I33		(0x5 << 15)
#define AFE_HDMI_CONN0_O32_I32		(0x4 << 12)
#define AFE_HDMI_CONN0_O31_I30		(0x2 << 9)
#define AFE_HDMI_CONN0_O31_I31		(0x3 << 9)
#define AFE_HDMI_CONN0_O30_I31		(0x3 << 6)
#define AFE_HDMI_CONN0_O30_I30		(0x2 << 6)
#define AFE_HDMI_CONN0_O29_I29		(0x1 << 3)
#define AFE_HDMI_CONN0_O28_I28		(0x0 << 0)

/* AFE_CONN_TDMIN_CON (0x039c) */
#define AFE_CONN_TDMIN_O41_I41		(0x1 << 3)
#define AFE_CONN_TDMIN_O41_I40		(0x0 << 3)
#define AFE_CONN_TDMIN_O40_I41		(0x1 << 0)
#define AFE_CONN_TDMIN_O40_I40		(0x0 << 0)
#define AFE_CONN_TDMIN_CON0_MASK	GENMASK(5, 0)

/* AFE_APLL1_TUNER_CFG (0x03ec) */
#define AFE_APLL1_TUNER_CFG_MASK	GENMASK(15, 1)
#define AFE_APLL1_TUNER_CFG_EN_MASK	GENMASK(0, 0)

/* AFE_APLL2_TUNER_CFG (0x03f0) */
#define AFE_APLL2_TUNER_CFG_MASK	GENMASK(15, 1)
#define AFE_APLL2_TUNER_CFG_EN_MASK	GENMASK(0, 0)

/* AFE_GAIN1_CON0 (0x0410) */
#define AFE_GAIN1_CON0_EN_MASK		GENMASK(0, 0)
#define AFE_GAIN1_CON0_MODE_MASK	GENMASK(7, 4)
#define AFE_GAIN1_CON0_SAMPLE_PER_STEP_MASK		GENMASK(15, 8)

/* AFE_GAIN1_CON1 (0x0414) */
#define AFE_GAIN1_CON1_MASK		GENMASK(19, 0)

/* AFE_GAIN1_CUR (0x0424) */
#define AFE_GAIN1_CUR_MASK		GENMASK(19, 0)

/* AFE_TDM_CON1 (0x0548) */
#define AFE_TDM_CON1_LRCK_WIDTH(x)	(((x) - 1) << 24)
#define AFE_TDM_CON1_32_BCK_CYCLES	(0x2 << 12)
#define AFE_TDM_CON1_16_BCK_CYCLES	(0x0 << 12)
#define AFE_TDM_CON1_8CH_PER_SDATA	(0x2 << 10)
#define AFE_TDM_CON1_4CH_PER_SDATA	(0x1 << 10)
#define AFE_TDM_CON1_2CH_PER_SDATA	(0x0 << 10)
#define AFE_TDM_CON1_WLEN_32BIT		BIT(9)
#define AFE_TDM_CON1_WLEN_16BIT		BIT(8)
#define AFE_TDM_CON1_MSB_ALIGNED	BIT(4)
#define AFE_TDM_CON1_1_BCK_DELAY	BIT(3)
#define AFE_TDM_CON1_LRCK_INV		BIT(2)
#define AFE_TDM_CON1_EN			BIT(0)

/* AFE_TDM_CON2 (0x054c) */
#define AFE_TDM_CON2_SOUT_MASK		GENMASK(14, 0)

/* AFE_TDM_IN_CON1 (0x0588) */
#define AFE_TDM_IN_CON1_LRCK_WIDTH(x)		(((x) - 1) << 24)
#define AFE_TDM_IN_CON1_DISABLE_CH67		BIT(19)
#define AFE_TDM_IN_CON1_DISABLE_CH01		BIT(18)
#define AFE_TDM_IN_CON1_DISABLE_CH23		BIT(17)
#define AFE_TDM_IN_CON1_DISABLE_CH45		BIT(16)
#define AFE_TDM_IN_CON1_FAST_LRCK_CYCLE_32BCK	(0x2 << 12)
#define AFE_TDM_IN_CON1_FAST_LRCK_CYCLE_16BCK	(0x0 << 12)
#define AFE_TDM_IN_CON1_8CH_PER_SDATA		(0x2 << 10)
#define AFE_TDM_IN_CON1_4CH_PER_SDATA		(0x1 << 10)
#define AFE_TDM_IN_CON1_2CH_PER_SDATA		(0x0 << 10)
#define AFE_TDM_IN_CON1_WLEN_32BIT		(0x3 << 8)
#define AFE_TDM_IN_CON1_WLEN_24BIT		(0x2 << 8)
#define AFE_TDM_IN_CON1_WLEN_16BIT		(0x1 << 8)
#define AFE_TDM_IN_CON1_I2S			BIT(3)
#define AFE_TDM_IN_CON1_LRCK_INV		BIT(2)
#define AFE_TDM_IN_CON1_BCK_INV			BIT(1)
#define AFE_TDM_IN_CON1_EN			BIT(0)

/* AFE_TSF_CON (0x08f0) */
#define AFE_TSF_CON_HDMIOUT_AUTO_EN		BIT(21)
#define AFE_TSF_CON_HDMIOUT_HW_DIS		BIT(20)
#define AFE_TSF_CON_DL2_AUTO_EN			BIT(17)
#define AFE_TSF_CON_DL1_AUTO_EN			BIT(16)
#define AFE_TSF_CON_DL_HW_DIS			BIT(4)

/* AFE_SPDIFIN_CFG0	0x0900 */
#define AFE_SPDIFIN_CFG0_SET_MASK		(0xffff7a)
#define AFE_SPDIFIN_CFG0_MAX_LEN_NUM(x)		(((x) & 0xff) << 16)
#define AFE_SPDIFIN_CFG0_GMAT_BC_256_CYCLES	(3 << 24)
#define AFE_SPDIFIN_CFG0_DE_SEL_3_SAMPLES	(0 << 13)
#define AFE_SPDIFIN_CFG0_DE_SEL_14_SAMPLES	(1 << 13)
#define AFE_SPDIFIN_CFG0_DE_SEL_30_SAMPLES	(2 << 13)
#define AFE_SPDIFIN_CFG0_DE_SEL_CNT		(3 << 13)
#define AFE_SPDIFIN_CFG0_DE_CNT(x)		(((x) & 0x1f) << 8)
#define AFE_SPDIFIN_CFG0_INT_EN			BIT(6)
#define AFE_SPDIFIN_CFG0_DERR2IDLE_EN		(BIT(5)|BIT(4))
#define AFE_SPDIFIN_CFG0_DPERR2IDLE_EN		BIT(3)
#define AFE_SPDIFIN_CFG0_FLIP			BIT(1)
#define AFE_SPDIFIN_CFG0_EN			BIT(0)

/* AFE_SPDIFIN_CFG1	0x0904 */
#define AFE_SPDIFIN_CFG1_SET_MASK		(0xfff10070)
#define AFE_SPDIFIN_CFG1_FIFOSTART_MASK		GENMASK(6, 4)
#define AFE_SPDIFIN_CFG1_CHSTS_INT		BIT(30)
#define AFE_SPDIFIN_CFG1_CHSTS_CHANGE_INT	BIT(29)
#define AFE_SPDIFIN_CFG1_TIMEOUT_INT		BIT(28)
#define AFE_SPDIFIN_CFG1_PREAMBLE_ERR		BIT(20)
#define AFE_SPDIFIN_CFG1_SEL_BCK_SPDIFIN	(0x1 << 16)
#define AFE_SPDIFIN_CFG1_FIFOSTART_5POINTS	(0x1 << 4)
#define AFE_SPDIFIN_CFG1_INT_BITS		(0x7f1 << 20)

/* AFE_SPDIFIN_DEBUG1	0x0920 */
#define AFE_SPDIFIN_DEBUG1_DATALAT_ERR		BIT(10)
#define AFE_SPDIFIN_DEBUG1_CS_MASK		GENMASK(28, 24)

/* AFE_SPDIFIN_DEBUG2	0x0924 */
#define AFE_SPDIFIN_DEBUG2_FIFO_ERR		(BIT(31)|BIT(30))
#define AFE_SPDIFIN_DEBUG2_CHSTS_INT_FLAG	BIT(26)
#define AFE_SPDIFIN_DEBUG2_PERR_9TIMES_FLAG	BIT(25)

/* AFE_SPDIFIN_DEBUG3	0x0928 */
#define AFE_SPDIFIN_DEBUG3_ALL_ERR			GENMASK(6, 0)
#define AFE_SPDIFIN_DEBUG3_PRE_ERR_NON_STS		BIT(0)
#define AFE_SPDIFIN_DEBUG3_PRE_ERR_B_STS		BIT(1)
#define AFE_SPDIFIN_DEBUG3_PRE_ERR_M_STS		BIT(2)
#define AFE_SPDIFIN_DEBUG3_PRE_ERR_W_STS		BIT(3)
#define AFE_SPDIFIN_DEBUG3_PRE_ERR_BITCNT_STS		BIT(4)
#define AFE_SPDIFIN_DEBUG3_PRE_ERR_PARITY_STS		BIT(5)
#define AFE_SPDIFIN_DEBUG3_TIMEOUT_ERR_STS		BIT(6)
#define AFE_SPDIFIN_DEBUG3_CHSTS_PREAMPHASIS_STS	BIT(7)

/* AFE_SPDIFIN_EC	0x0930 */
#define AFE_SPDIFIN_EC_CLEAR_ALL		(0x30fff)
#define AFE_SPDIFIN_EC_PRE_ERR_CLEAR		BIT(0)
#define AFE_SPDIFIN_EC_PRE_ERR_B_CLEAR		BIT(1)
#define AFE_SPDIFIN_EC_PRE_ERR_M_CLEAR		BIT(2)
#define AFE_SPDIFIN_EC_PRE_ERR_W_CLEAR		BIT(3)
#define AFE_SPDIFIN_EC_PRE_ERR_BITCNT_CLEAR	BIT(4)
#define AFE_SPDIFIN_EC_PRE_ERR_PARITY_CLEAR	BIT(5)
#define AFE_SPDIFIN_EC_FIFO_ERR_CLEAR		(BIT(7)|BIT(6))
#define AFE_SPDIFIN_EC_TIMEOUT_INT_CLEAR	BIT(8)
#define AFE_SPDIFIN_EC_CHSTS_PREAMPHASIS_CLEAR	BIT(9)
#define AFE_SPDIFIN_EC_USECODE_COLLECTION_CLEAR	BIT(10)
#define AFE_SPDIFIN_EC_CHSTS_COLLECTION_CLEAR	BIT(11)
#define AFE_SPDIFIN_EC_DATA_LRCK_CHANGE_CLEAR	BIT(16)
#define AFE_SPDIFIN_EC_DATA_LATCH_CLEAR	    	BIT(17)

/* AFE_SPDIFIN_INT_EXT	0x0948 */
#define AFE_SPDIFIN_INT_EXT_INPUT_SEL_MASK	GENMASK(15, 14)
#define AFE_SPDIFIN_INT_EXT_SET_MASK		(0xeff00)
#define AFE_SPDIFIN_INT_EXT_DATALAT_ERR_EN	BIT(17)
#define AFE_SPDIFIN_INT_EXT_SEL_OPTICAL		(0 << 14)
#define AFE_SPDIFIN_INT_EXT_SEL_COAXIAL		(1 << 14)
#define AFE_SPDIFIN_INT_EXT_SEL_ARC		(2 << 14)
#define AFE_SPDIFIN_INT_EXT_SEL_TIED_LOW	(3 << 14)

/* AFE_SPDIFIN_INT_EXT2	0x094C */
#define AFE_SPDIFIN_INT_EXT2_ROUGH_FS_MASK	GENMASK(31, 28)
#define AFE_SPDIFIN_INT_EXT2_FS_NOT_DEFINED	(0 << 28)
#define AFE_SPDIFIN_INT_EXT2_FS_32K		(1 << 28)
#define AFE_SPDIFIN_INT_EXT2_FS_44D1K		(2 << 28)
#define AFE_SPDIFIN_INT_EXT2_FS_48K		(3 << 28)
#define AFE_SPDIFIN_INT_EXT2_FS_64K		(4 << 28)
#define AFE_SPDIFIN_INT_EXT2_FS_88D2K		(5 << 28)
#define AFE_SPDIFIN_INT_EXT2_FS_96K		(6 << 28)
#define AFE_SPDIFIN_INT_EXT2_FS_128K		(7 << 28)
#define AFE_SPDIFIN_INT_EXT2_FS_144K		(8 << 28)
#define AFE_SPDIFIN_INT_EXT2_FS_176D4K		(9 << 28)
#define AFE_SPDIFIN_INT_EXT2_FS_192K		(10 << 28)
#define AFE_SPDIFIN_INT_EXT2_LRCK_CHANGE	BIT(27)
#define SPDIFIN_594MODE_MASK			(1 << 17)
#define SPDIFIN_594MODE_EN			(1 << 17)

#endif
