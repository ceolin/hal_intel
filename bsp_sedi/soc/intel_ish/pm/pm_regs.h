/*
 * Copyright (c) 2023 Intel Corporation
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _PM_REGS_H_
#define _PM_REGS_H_

#include "sedi_soc_regs.h"

#ifndef BIT
#define BIT(x)	(1U << (x))
#endif

/* PMU Registers */
#define PMU_SRAM_PG_EN			(SEDI_PMU_BASE + 0x0)
#define PMU_PMC_HOST_RST_CTL		(SEDI_PMU_BASE + 0xF20)
#define PMU_SW_PG_REQ			(SEDI_PMU_BASE + 0xF14)
#define PMU_PMC_PG_WAKE			(SEDI_PMU_BASE + 0xF18)
#define PMU_INTERNAL_PCE		(SEDI_PMU_BASE + 0xF30)
#define PMU_D3_STATUS			(SEDI_PMU_BASE + 0x100)
#define PMU_GPIO_WAKE_MASK0		(SEDI_PMU_BASE + 0x250)
#define PMU_GPIO_WAKE_MASK1		(SEDI_PMU_BASE + 0x254)
#define PMU_HOST_RST_B			BIT(0)
#define PMU_PCE_SHADOW_MASK		0x1F
#define PMU_PCE_PG_ALLOWED		BIT(4)
#define PMU_PCE_CHANGE_MASK		BIT(9)
#define PMU_PCE_CHANGE_DETECTED		BIT(8)
#define PMU_PCE_PMCRE			BIT(0)
#define PMU_SW_PG_REQ_B_VAL		BIT(0)
#define PMU_SW_PG_REQ_B_RISE		BIT(1)
#define PMU_SW_PG_REQ_B_FALL		BIT(2)
#define PMU_PMC_PG_WAKE_VAL		BIT(0)
#define PMU_PMC_PG_WAKE_RISE		BIT(1)
#define PMU_PMC_PG_WAKE_FALL		BIT(2)
#define PMU_PCE_PG_ALLOWED		BIT(4)
#define PMU_D0I3_ENABLE_MASK		BIT(23)
#define PMU_D3_BIT_SET			BIT(16)
#define PMU_D3_BIT_RISING_EDGE_STATUS	BIT(17)
#define PMU_D3_BIT_FALLING_EDGE_STATUS	BIT(18)
#define PMU_D3_BIT_RISING_EDGE_MASK	BIT(19)
#define PMU_D3_BIT_FALLING_EDGE_MASK	BIT(20)
#define PMU_BME_BIT_SET			BIT(24)
#define PMU_BME_BIT_RISING_EDGE_STATUS	BIT(25)
#define PMU_BME_BIT_FALLING_EDGE_STATUS	BIT(26)
#define PMU_BME_BIT_RISING_EDGE_MASK	BIT(27)
#define PMU_BME_BIT_FALLING_EDGE_MASK	BIT(28)

#define PMU_ISH_FABRIC_CNT		(SEDI_PMU_BASE + 0x18)
#define PMU_PGCB_CLKGATE_CTRL		(SEDI_PMU_BASE + 0x54)

#define PMU_VNN_REQ			(SEDI_PMU_BASE + 0x3c)
#define VNN_REQ_IPC_HOST_WRITE		BIT(3)

#define PMU_VNN_REQ_ACK			(SEDI_PMU_BASE + 0x40)
#define PMU_VNN_REQ_ACK_STATUS		BIT(0)

#define PMU_VNNAON_RED			(SEDI_PMU_BASE + 0x58)

#define PMU_RST_PREP			(SEDI_PMU_BASE + 0x5c)
#define PMU_RST_PREP_GET		BIT(0)
#define PMU_RST_PREP_AVAIL		BIT(1)
#define PMU_RST_PREP_INT_MASK		BIT(31)

#define VNN_ID_DMA0			4
#define VNN_ID_DMA(chan)		(VNN_ID_DMA0 + chan)

#define PMU_MASK_EVENT			(SEDI_PMU_BASE + 0x10)
#define PMU_MASK_EVENT_BIT_GPIO(pin)	BIT(pin)
#define PMU_MASK_EVENT_BIT_HPET		BIT(16)
#define PMU_MASK_EVENT_BIT_IPC		BIT(17)
#define PMU_MASK_EVENT_BIT_D3		BIT(18)
#define PMU_MASK_EVENT_BIT_DMA		BIT(19)
#define PMU_MASK_EVENT_BIT_I2C0		BIT(20)
#define PMU_MASK_EVENT_BIT_I2C1		BIT(21)
#define PMU_MASK_EVENT_BIT_SPI		BIT(22)
#define PMU_MASK_EVENT_BIT_UART		BIT(23)
#define PMU_MASK_EVENT_BIT_ALL		(0xffffffff)

#define PMU_RF_ROM_PWR_CTRL		(SEDI_PMU_BASE + 0x30)

#define PMU_LDO_CTRL			(SEDI_PMU_BASE + 0x44)
#define PMU_LDO_ENABLE_BIT		BIT(0)
#define PMU_LDO_RETENTION_BIT		BIT(1)
#define PMU_LDO_CALIBRATION_BIT		BIT(2)
#define PMU_LDO_READY_BIT		BIT(3)

/* CCU Registers */
#define CCU_TCG_EN			(SEDI_CCU_BASE + 0x0)
#define CCU_BCG_EN			(SEDI_CCU_BASE + 0x4)
#define CCU_WDT_CD			(SEDI_CCU_BASE + 0x7c)
#define CCU_RST_HST			(SEDI_CCU_BASE + 0x3c)
#define CCU_TCG_ENABLE			(SEDI_CCU_BASE + 0x40)
#define CCU_BCG_ENABLE			(SEDI_CCU_BASE + 0x44)
#define CCU_BCG_MIA			(SEDI_CCU_BASE + 0x4)
#define CCU_BCG_UART			(SEDI_CCU_BASE + 0x8)
#define CCU_BCG_I2C			(SEDI_CCU_BASE + 0xc)
#define CCU_BCG_SPI			(SEDI_CCU_BASE + 0x10)
#define CCU_BCG_GPIO			(SEDI_CCU_BASE + 0x14)
#define CCU_BCG_DMA			(SEDI_CCU_BASE + 0x28)
#define CCU_AONCG_EN			(SEDI_CCU_BASE + 0xdc)
#define CCU_BCG_BIT_MIA			BIT(0)
#define CCU_BCG_BIT_DMA			BIT(1)
#define CCU_BCG_BIT_I2C0		BIT(2)
#define CCU_BCG_BIT_I2C1		BIT(3)
#define CCU_BCG_BIT_SPI			BIT(4)
#define CCU_BCG_BIT_SRAM		BIT(5)
#define CCU_BCG_BIT_HPET		BIT(6)
#define CCU_BCG_BIT_UART		BIT(7)
#define CCU_BCG_BIT_GPIO		BIT(8)
#define CCU_BCG_BIT_I2C2		BIT(9)
#define CCU_BCG_BIT_SPI2		BIT(10)
#define CCU_BCG_BIT_ALL			(0x7ff)

#define CCU_SW_RST			BIT(0)
#define CCU_WDT_RST			BIT(1)
#define CCU_MIASS_RST			BIT(2)
#define CCU_SRECC_RST			BIT(3)

/* MISC registers */
#define MISC_REG_BASE			SEDI_MISC_BASE
#define DMA_REG_BASE			SEDI_DMA_0_REG_BASE
#define DMA_MISC_OFFSET			0x1000
#define DMA_MISC_BASE			(DMA_REG_BASE + DMA_MISC_OFFSET)
#define MISC_CHID_CFG_REG		(DMA_MISC_BASE + 0x400)
#define MISC_DMA_CTL_REG(ch)		(DMA_MISC_BASE + (4 * (ch)))
#define MISC_SRC_FILLIN_DMA(ch)		(DMA_MISC_BASE + 0x100 + (4 * (ch)))
#define MISC_DST_FILLIN_DMA(ch)		(DMA_MISC_BASE + 0x200 + (4 * (ch)))
#define MISC_ISH_ECC_ERR_SRESP		(DMA_MISC_BASE + 0x404)
#define MISC_ISH_RTC_COUNTER0		(MISC_REG_BASE + 0x70)
#define MISC_ISH_RTC_COUNTER1		(MISC_REG_BASE + 0x74)

/* DMA registers */
#define DMA_CH_REGS_SIZE		0x58
#define DMA_CLR_BLOCK_REG		(DMA_REG_BASE + 0x340)
#define DMA_CLR_ERR_REG			(DMA_REG_BASE + 0x358)
#define DMA_EN_REG_ADDR			(DMA_REG_BASE + 0x3A0)
#define DMA_EN_REG			(DMA_EN_REG_ADDR)
#define DMA_CFG_REG			(DMA_REG_BASE + 0x398)
#define DMA_PSIZE_01			(DMA_REG_BASE + 0x400)
#define DMA_PSIZE_CHAN0_SIZE		512
#define DMA_PSIZE_CHAN0_OFFSET		0
#define DMA_PSIZE_CHAN1_SIZE		128
#define DMA_PSIZE_CHAN1_OFFSET		13
#define DMA_PSIZE_UPDATE		BIT(26)
#define DMA_MAX_CHANNEL			4
#define DMA_SAR(chan)			(chan + 0x000)
#define DMA_DAR(chan)			(chan + 0x008)
#define DMA_LLP(chan)			(chan + 0x010)
#define DMA_CTL_LOW(chan)		(chan + 0x018)
#define DMA_CTL_HIGH(chan)		(chan + 0x018 + 0x4)
#define DMA_CTL_INT_ENABLE		BIT(0)
#define DMA_CTL_DST_TR_WIDTH_SHIFT	1
#define DMA_CTL_SRC_TR_WIDTH_SHIFT	4
#define DMA_CTL_DINC_SHIFT		7
#define DMA_CTL_SINC_SHIFT		9
#define DMA_CTL_ADDR_INC		0
#define DMA_CTL_DEST_MSIZE_SHIFT	11
#define DMA_CTL_SRC_MSIZE_SHIFT		14
#define DMA_CTL_TT_FC_SHIFT		20
#define DMA_CTL_TT_FC_M2M_DMAC		0
#define DMA_ENABLE			BIT(0)
#define DMA_CH_EN_BIT(n)		BIT(n)
#define DMA_CH_EN_WE_BIT(n)		BIT(8 + (n))
#define DMA_MAX_BLOCK_SIZE		(4096)
#define SRC_TR_WIDTH			2
#define SRC_BURST_SIZE			3
#define DEST_TR_WIDTH			2
#define DEST_BURST_SIZE			3

/* GPIO Registers */
#define ISH_GPIO_BASE			SEDI_GPIO_0_REG_BASE
#define ISH_GPIO_GCCR			(ISH_GPIO_BASE + 0x000)
#define ISH_GPIO_GPLR			(ISH_GPIO_BASE + 0x004)
#define ISH_GPIO_GPDR			(ISH_GPIO_BASE + 0x01C)
#define ISH_GPIO_GPSR			(ISH_GPIO_BASE + 0x034)
#define ISH_GPIO_GPCR			(ISH_GPIO_BASE + 0x04C)
#define ISH_GPIO_GRER			(ISH_GPIO_BASE + 0x064)
#define ISH_GPIO_GFER			(ISH_GPIO_BASE + 0x07C)
#define ISH_GPIO_GFBR			(ISH_GPIO_BASE + 0x094)
#define ISH_GPIO_GIMR			(ISH_GPIO_BASE + 0x0AC)
#define ISH_GPIO_GISR			(ISH_GPIO_BASE + 0x0C4)
#define ISH_GPIO_GWMR			(ISH_GPIO_BASE + 0x100)
#define ISH_GPIO_GWSR			(ISH_GPIO_BASE + 0x118)
#define ISH_GPIO_GSEC			(ISH_GPIO_BASE + 0x130)

/* SRAM control registers */
#define ISH_SRAM_CTRL_BASE		0x10500000
#define ISH_SRAM_CTRL_CSFGR		(ISH_SRAM_CTRL_BASE + 0x00)
#define ISH_SRAM_CTRL_INTR		(ISH_SRAM_CTRL_BASE + 0x04)
#define ISH_SRAM_CTRL_INTR_MASK		(ISH_SRAM_CTRL_BASE + 0x08)
#define ISH_SRAM_CTRL_ERASE_CTRL	(ISH_SRAM_CTRL_BASE + 0x0c)
#define ISH_SRAM_CTRL_ERASE_ADDR	(ISH_SRAM_CTRL_BASE + 0x10)
#define ISH_SRAM_CTRL_BANK_STATUS	(ISH_SRAM_CTRL_BASE + 0x2c)

/* WDT (Watchdog Timer) Registers */
#define ISH_WDT_BASE			SEDI_WATCHDOG_0_REG_BASE
#define WDT_CONTROL			(ISH_WDT_BASE + 0x0)
#define WDT_RELOAD			(ISH_WDT_BASE + 0x4)
#define WDT_VALUES			(ISH_WDT_BASE + 0x8)
#define WDT_CONTROL_ENABLE_BIT		BIT(17)

#define ISH_RST_REG			(IPC_HOST_BASE + 0x10000 + 0x44)
#define IPC_PIMR_CIM_SEC		(IPC_HOST_BASE + 0x10000 + 0x10)
#define IPC_UMA_RANGE_LOWER_1		(IPC_HOST_BASE + 0x384)
#define IPC_ISH2HOST_DOORBELL_ADDR	(IPC_HOST_BASE + 0x54)

#define LAPIC_SPUR			(SEDI_LAPIC_BASE + 0x00F0)
#define LAPIC_EOI			(SEDI_LAPIC_BASE + 0x00B0)
#define LAPIC_SPUR_RESET		0xFF
#define LAPIC_ENABLE			0x100

#define IOAPIC_NUM_RTES 64

#define SEDI_VEC_RESET_PREP		64
#define SEDI_VEC_PMU2IOAPIC		65
#define SEDI_VEC_PCIEDEV		66

/* SRAM memory definitions */
#define CONFIG_RAM_BASE			0xFF200000
#define CONFIG_RAM_SIZE			0x000A0000
#define CONFIG_RAM_BANK_SIZE		0x00010000
#define CONFIG_RAM_BANKS		(CONFIG_RAM_SIZE / CONFIG_RAM_BANK_SIZE)

#define AON_SP_RESERVED (8)

/* AON memory definitions */
#define CONFIG_AON_RAM_BASE		0xFF800000
#define CONFIG_AON_RAM_SIZE		0x00002000
#define CONFIG_AON_PERSISTENT_SIZE	0x180
#define CONFIG_AON_PERSISTENT_BASE	(CONFIG_AON_RAM_BASE    \
					 + CONFIG_AON_RAM_SIZE  \
					 - CONFIG_AON_PERSISTENT_SIZE)

#endif
