/*
 * arch/arm/mach-tegra/board-loki-pinmux-t12x.h
 *
 * Copyright (c) 2013, NVIDIA CORPORATION.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth floor, Boston, MA  02110-1301, USA
 */


/* DO NOT EDIT THIS FILE. THIS FILE IS AUTO GENERATED FROM T124_CUSTOMER_PINMUX.XLSM */


static __initdata struct tegra_pingroup_config loki_pinmux_common[] = {

	/* EXTPERIPH1 pinmux */
	DEFAULT_PINMUX(DAP_MCLK1,     EXTPERIPH1,  NORMAL,    NORMAL,   OUTPUT),

	/* I2S1 pinmux */
	DEFAULT_PINMUX(DAP2_DIN,      I2S1,        NORMAL,    TRISTATE,   INPUT),
	DEFAULT_PINMUX(DAP2_DOUT,     I2S1,        NORMAL,    NORMAL,   INPUT),
	DEFAULT_PINMUX(DAP2_FS,       I2S1,        NORMAL,    NORMAL,   INPUT),
	DEFAULT_PINMUX(DAP2_SCLK,     I2S1,        NORMAL,    NORMAL,   INPUT),

	/* CLDVFS pinmux */
	DEFAULT_PINMUX(DVFS_PWM,      CLDVFS,      NORMAL,    NORMAL,   OUTPUT),
	DEFAULT_PINMUX(DVFS_CLK,      CLDVFS,      NORMAL,    NORMAL,   OUTPUT),

	/* SPI1 pinmux */
	DEFAULT_PINMUX(ULPI_CLK,      SPI1,        NORMAL,    NORMAL,   OUTPUT),
	DEFAULT_PINMUX(ULPI_DIR,      SPI1,        NORMAL,    NORMAL,   INPUT),
	DEFAULT_PINMUX(ULPI_NXT,      SPI1,        NORMAL,    NORMAL,   OUTPUT),
	DEFAULT_PINMUX(ULPI_STP,      SPI1,        NORMAL,    NORMAL,   OUTPUT),

	/* I2C2 pinmux */
	I2C_PINMUX(GEN2_I2C_SCL, I2C2, NORMAL, NORMAL, INPUT, DISABLE, ENABLE),
	I2C_PINMUX(GEN2_I2C_SDA, I2C2, NORMAL, NORMAL, INPUT, DISABLE, ENABLE),

	/* I2C3 pinmux */
	I2C_PINMUX(CAM_I2C_SCL, I2C3, NORMAL, NORMAL, INPUT, DISABLE, ENABLE),
	I2C_PINMUX(CAM_I2C_SDA, I2C3, NORMAL, NORMAL, INPUT, DISABLE, ENABLE),

	/* UARTD pinmux */
	DEFAULT_PINMUX(GPIO_PJ7,      UARTD,       NORMAL,    NORMAL,   OUTPUT),
	DEFAULT_PINMUX(GPIO_PB0,      UARTD,       NORMAL,    NORMAL,   INPUT),
	DEFAULT_PINMUX(GPIO_PB1,      UARTD,       NORMAL,    NORMAL,   INPUT),
	DEFAULT_PINMUX(GPIO_PK7,      UARTD,       NORMAL,    NORMAL,   OUTPUT),

	/* SPI4 pinmux */
	DEFAULT_PINMUX(GPIO_PG4,      SPI4,        NORMAL,    NORMAL,   OUTPUT),
	DEFAULT_PINMUX(GPIO_PG5,      SPI4,        NORMAL,    NORMAL,   OUTPUT),
	DEFAULT_PINMUX(GPIO_PG6,      SPI4,        NORMAL,    NORMAL,   OUTPUT),
	DEFAULT_PINMUX(GPIO_PG7,      SPI4,        NORMAL,    NORMAL,   INPUT),

	/* PWM1 pinmux */
	DEFAULT_PINMUX(GPIO_PH1,      PWM1,        NORMAL,    NORMAL,   OUTPUT),

	/* EXTPERIPH2 pinmux */
	DEFAULT_PINMUX(CLK2_OUT,      EXTPERIPH2,  NORMAL,    NORMAL,   OUTPUT),

	/* SDMMC1 pinmux */
	DEFAULT_PINMUX(SDMMC1_CLK,    SDMMC1,      NORMAL,    NORMAL,   INPUT),
	DEFAULT_PINMUX(SDMMC1_CMD,    SDMMC1,      PULL_UP,   NORMAL,   INPUT),
	DEFAULT_PINMUX(SDMMC1_DAT0,   SDMMC1,      PULL_UP,   NORMAL,   INPUT),
	DEFAULT_PINMUX(SDMMC1_DAT1,   SDMMC1,      PULL_UP,   NORMAL,   INPUT),
	DEFAULT_PINMUX(SDMMC1_DAT2,   SDMMC1,      PULL_UP,   NORMAL,   INPUT),
	DEFAULT_PINMUX(SDMMC1_DAT3,   SDMMC1,      PULL_UP,   NORMAL,   INPUT),

	/* SDMMC3 pinmux */
	DEFAULT_PINMUX(SDMMC3_CLK,    SDMMC3,      NORMAL,    NORMAL,   OUTPUT),
	DEFAULT_PINMUX(SDMMC3_CMD,    SDMMC3,      PULL_UP,   NORMAL,   INPUT),
	DEFAULT_PINMUX(SDMMC3_DAT0,   SDMMC3,      PULL_UP,   NORMAL,   INPUT),
	DEFAULT_PINMUX(SDMMC3_DAT1,   SDMMC3,      PULL_UP,   NORMAL,   INPUT),
	DEFAULT_PINMUX(SDMMC3_DAT2,   SDMMC3,      PULL_UP,   NORMAL,   INPUT),
	DEFAULT_PINMUX(SDMMC3_DAT3,   SDMMC3,      PULL_UP,   NORMAL,   INPUT),
	DEFAULT_PINMUX(SDMMC3_CLK_LB_OUT, SDMMC3,  PULL_UP,   NORMAL,   INPUT),
	DEFAULT_PINMUX(SDMMC3_CLK_LB_IN, SDMMC3,   PULL_UP,   NORMAL,   INPUT),
	DEFAULT_PINMUX(SDMMC3_CD_N,   SDMMC3,      PULL_UP,   NORMAL,   INPUT),

	/* SDMMC4 pinmux */
	DEFAULT_PINMUX(SDMMC4_CLK,    SDMMC4,      NORMAL,    NORMAL,   INPUT),
	DEFAULT_PINMUX(SDMMC4_CMD,    SDMMC4,      PULL_UP,   NORMAL,   INPUT),
	DEFAULT_PINMUX(SDMMC4_DAT0,   SDMMC4,      PULL_UP,   NORMAL,   INPUT),
	DEFAULT_PINMUX(SDMMC4_DAT1,   SDMMC4,      PULL_UP,   NORMAL,   INPUT),
	DEFAULT_PINMUX(SDMMC4_DAT2,   SDMMC4,      PULL_UP,   NORMAL,   INPUT),
	DEFAULT_PINMUX(SDMMC4_DAT3,   SDMMC4,      PULL_UP,   NORMAL,   INPUT),
	DEFAULT_PINMUX(SDMMC4_DAT4,   SDMMC4,      PULL_UP,   NORMAL,   INPUT),
	DEFAULT_PINMUX(SDMMC4_DAT5,   SDMMC4,      PULL_UP,   NORMAL,   INPUT),
	DEFAULT_PINMUX(SDMMC4_DAT6,   SDMMC4,      PULL_UP,   NORMAL,   INPUT),
	DEFAULT_PINMUX(SDMMC4_DAT7,   SDMMC4,      PULL_UP,   NORMAL,   INPUT),

	/* PWM2 pinmux */
	DEFAULT_PINMUX(KB_COL3,       PWM2,        NORMAL,    NORMAL,   OUTPUT),

	/* BLINK pinmux */
	DEFAULT_PINMUX(CLK_32K_OUT,   BLINK,       NORMAL,    NORMAL,   OUTPUT),

	/* I2CPWR pinmux */
	I2C_PINMUX(PWR_I2C_SCL, I2CPWR, NORMAL, NORMAL, INPUT, DEFAULT, ENABLE),
	I2C_PINMUX(PWR_I2C_SDA, I2CPWR, NORMAL, NORMAL, INPUT, DEFAULT, ENABLE),

	/* RTCK pinmux */
	DEFAULT_PINMUX(JTAG_RTCK,     RTCK,        NORMAL,    NORMAL,   OUTPUT),

	/* CLK pinmux */
	DEFAULT_PINMUX(CLK_32K_IN,    CLK,         NORMAL,    NORMAL,   INPUT),

	/* PWRON pinmux */
	DEFAULT_PINMUX(CORE_PWR_REQ,  PWRON,       NORMAL,    NORMAL,   OUTPUT),

	/* CPU pinmux */
	DEFAULT_PINMUX(CPU_PWR_REQ,   CPU,         NORMAL,    NORMAL,   OUTPUT),

	/* PMI pinmux */
	DEFAULT_PINMUX(PWR_INT_N,     PMI,         NORMAL,    NORMAL,   INPUT),

	/* RESET_OUT_N pinmux */
	DEFAULT_PINMUX(RESET_OUT_N,   RESET_OUT_N, NORMAL,    NORMAL,   OUTPUT),

	/* I2S3 pinmux */
	DEFAULT_PINMUX(DAP4_DIN,      I2S3,        NORMAL,    NORMAL,   INPUT),
	DEFAULT_PINMUX(DAP4_DOUT,     I2S3,        NORMAL,    NORMAL,   OUTPUT),
	DEFAULT_PINMUX(DAP4_FS,       I2S3,        NORMAL,    NORMAL,   OUTPUT),
	DEFAULT_PINMUX(DAP4_SCLK,     I2S3,        NORMAL,    NORMAL,   OUTPUT),

	/* I2C1 pinmux */
	I2C_PINMUX(GEN1_I2C_SCL, I2C1, NORMAL, NORMAL, INPUT, DISABLE, DISABLE),
	I2C_PINMUX(GEN1_I2C_SDA, I2C1, NORMAL, NORMAL, INPUT, DISABLE, DISABLE),

	/* PWM0 pinmux */
	DEFAULT_PINMUX(GPIO_PU3,      PWM0,        NORMAL,    NORMAL,   OUTPUT),

	/* UARTB pinmux */
	DEFAULT_PINMUX(UART2_CTS_N,   UARTB,       NORMAL,    NORMAL,   INPUT),
	DEFAULT_PINMUX(UART2_RTS_N,   UARTB,       NORMAL,    NORMAL,   OUTPUT),

	/* IRDA pinmux */
	DEFAULT_PINMUX(UART2_RXD,     IRDA,        NORMAL,    NORMAL,   INPUT),
	DEFAULT_PINMUX(UART2_TXD,     IRDA,        NORMAL,    NORMAL,   OUTPUT),

	/* UARTC pinmux */
	DEFAULT_PINMUX(UART3_CTS_N,   UARTC,       NORMAL,    NORMAL,   INPUT),
	DEFAULT_PINMUX(UART3_RTS_N,   UARTC,       NORMAL,    NORMAL,   OUTPUT),
	DEFAULT_PINMUX(UART3_RXD,     UARTC,       NORMAL,    NORMAL,   INPUT),
	DEFAULT_PINMUX(UART3_TXD,     UARTC,       NORMAL,    NORMAL,   OUTPUT),

	/* CEC pinmux */
	CEC_PINMUX(HDMI_CEC, CEC, NORMAL, NORMAL, INPUT, DEFAULT, DISABLE),

	/* I2C4 pinmux */
	DDC_PINMUX(DDC_SCL, I2C4, NORMAL, NORMAL, INPUT, DEFAULT, NORMAL),
	DDC_PINMUX(DDC_SDA, I2C4, NORMAL, NORMAL, INPUT, DEFAULT, NORMAL),

	/* GPIO pinmux */
	GPIO_PINMUX(GPIO_X6_AUD, PULL_UP, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(GPIO_X7_AUD, PULL_DOWN, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(GPIO_W3_AUD, NORMAL, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(GPIO_X1_AUD, PULL_DOWN, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(GPIO_PG0, NORMAL, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(GPIO_PG1, NORMAL, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(GPIO_PH5, PULL_DOWN, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(GPIO_PH6, NORMAL, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(GPIO_PH7, NORMAL, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(GPIO_PG2, NORMAL, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(GPIO_PG3, NORMAL, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(GPIO_PH0, PULL_DOWN, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(GPIO_PK0, PULL_UP, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(GPIO_PK1, PULL_DOWN, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(GPIO_PJ0, PULL_UP, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(GPIO_PJ2, PULL_UP, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(GPIO_PK3, PULL_UP, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(GPIO_PK4, PULL_UP, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(GPIO_PK2, PULL_UP, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(GPIO_PI3, NORMAL, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(GPIO_PI6, PULL_UP, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(GPIO_PI5, PULL_UP, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(GPIO_PI1, NORMAL, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(GPIO_PI4, PULL_DOWN, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(GPIO_PI7, PULL_DOWN, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(GPIO_PC7, NORMAL, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(GPIO_PI0, NORMAL, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(CLK2_REQ, PULL_DOWN, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(SDMMC1_WP_N, PULL_DOWN, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(KB_COL0, PULL_UP, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(KB_COL2, NORMAL, NORMAL, OUTPUT, ENABLE),
	GPIO_PINMUX(KB_COL5, PULL_UP, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(KB_COL6, PULL_DOWN, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(KB_ROW0, PULL_DOWN, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(KB_ROW1, PULL_DOWN, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(KB_ROW12, NORMAL, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(KB_ROW13, PULL_DOWN, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(KB_ROW15, PULL_DOWN, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(KB_ROW2, PULL_UP, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(KB_ROW3, NORMAL, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(KB_ROW4, PULL_UP, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(KB_ROW5, PULL_UP, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(KB_ROW6, NORMAL, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(KB_ROW7, PULL_UP, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(KB_ROW8, PULL_UP, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(CLK3_REQ, PULL_DOWN, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(GPIO_PU1, PULL_DOWN, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(GPIO_PU2, NORMAL, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(GPIO_PU4, PULL_DOWN, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(GPIO_PU5, PULL_UP, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(GPIO_PU6, NORMAL, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(HDMI_INT, PULL_DOWN, NORMAL, INPUT, DISABLE),
	GPIO_PINMUX(SPDIF_OUT, PULL_DOWN, NORMAL, OUTPUT, DISABLE),
	GPIO_PINMUX(SPDIF_IN, PULL_DOWN, NORMAL, OUTPUT, DISABLE),
};

static __initdata struct tegra_pingroup_config unused_pins_lowpower[] = {
	UNUSED_PINMUX(DAP_MCLK1_REQ),
	UNUSED_PINMUX(DAP1_DIN),
	UNUSED_PINMUX(DAP1_DOUT),
	UNUSED_PINMUX(DAP1_FS),
	UNUSED_PINMUX(DAP1_SCLK),
	UNUSED_PINMUX(GPIO_X4_AUD),
	UNUSED_PINMUX(GPIO_X5_AUD),
	UNUSED_PINMUX(GPIO_W2_AUD),
	UNUSED_PINMUX(GPIO_X3_AUD),
	UNUSED_PINMUX(DAP3_DIN),
	UNUSED_PINMUX(DAP3_DOUT),
	UNUSED_PINMUX(DAP3_FS),
	UNUSED_PINMUX(DAP3_SCLK),
	UNUSED_PINMUX(GPIO_PV0),
	UNUSED_PINMUX(GPIO_PV1),
	UNUSED_PINMUX(ULPI_DATA0),
	UNUSED_PINMUX(ULPI_DATA1),
	UNUSED_PINMUX(ULPI_DATA2),
	UNUSED_PINMUX(ULPI_DATA3),
	UNUSED_PINMUX(ULPI_DATA5),
	UNUSED_PINMUX(ULPI_DATA6),
	UNUSED_PINMUX(ULPI_DATA7),
	VI_PINMUX(CAM_MCLK, VI_ALT3, NORMAL, NORMAL, OUTPUT, DEFAULT, DISABLE),
	UNUSED_PINMUX(GPIO_PBB0),
	UNUSED_PINMUX(GPIO_PBB3),
	UNUSED_PINMUX(GPIO_PBB4),
	UNUSED_PINMUX(GPIO_PBB5),
	UNUSED_PINMUX(GPIO_PBB6),
	UNUSED_PINMUX(GPIO_PBB7),
	UNUSED_PINMUX(GPIO_PCC1),
	UNUSED_PINMUX(GPIO_PCC2),
	UNUSED_PINMUX(GPIO_PH4),
	UNUSED_PINMUX(GPIO_PI2),
	UNUSED_PINMUX(PEX_L0_CLKREQ_N),
	UNUSED_PINMUX(PEX_L0_RST_N),
	UNUSED_PINMUX(PEX_L1_CLKREQ_N),
	UNUSED_PINMUX(PEX_L1_RST_N),
	UNUSED_PINMUX(PEX_WAKE_N),
	UNUSED_PINMUX(USB_VBUS_EN2),
	UNUSED_PINMUX(GPIO_PFF2),
	UNUSED_PINMUX(KB_COL1),
	UNUSED_PINMUX(KB_COL4),
	UNUSED_PINMUX(KB_COL7),
	UNUSED_PINMUX(KB_ROW11),
	UNUSED_PINMUX(KB_ROW14),
	UNUSED_PINMUX(KB_ROW16),
	UNUSED_PINMUX(KB_ROW17),
	UNUSED_PINMUX(KB_ROW9),
	UNUSED_PINMUX(CLK3_OUT),
	UNUSED_PINMUX(OWR),
	UNUSED_PINMUX(USB_VBUS_EN0),
	UNUSED_PINMUX(USB_VBUS_EN1),
};

static struct gpio_init_pin_info init_gpio_mode_loki_common[] = {
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PX6, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PX7, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PW3, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PX1, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PG0, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PG1, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PH2, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PH3, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PH5, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PH6, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PH7, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PG2, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PG3, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PH0, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PK0, false, 1),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PK1, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PJ0, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PJ2, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PK3, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PK4, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PK2, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PI3, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PI6, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PI5, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PI1, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PI4, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PI7, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PC7, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PI0, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PCC5, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PV3, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PQ0, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PQ5, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PQ6, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PR0, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PR1, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PS4, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PS5, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PS7, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PR2, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PR3, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PR4, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PR5, false, 1),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PR6, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PR7, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PEE1, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PU0, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PU1, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PU2, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PU4, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PU5, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PU6, false, 1),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PN7, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PK5, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PK6, false, 0),
};