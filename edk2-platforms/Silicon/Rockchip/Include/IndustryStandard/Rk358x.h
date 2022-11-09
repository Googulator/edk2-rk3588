/** @file
 *
 *  Copyright (c) 2021, Jared McNeill <jmcneill@invisible.ca>
 *
 *  SPDX-License-Identifier: BSD-2-Clause-Patent
 *
 **/

#ifndef RK358X_H__
#define RK358X_H__

/* Reference clock rate */
#define CRU_CLKREF_RATE     24000000UL

/* Register base addresses */
#define PMU0_GRF            0xFD588000UL
#define PMU1_GRF            0xFD58A000UL
#define BIGCORE0_GRF        0xFD590000UL
#define BIGCORE1_GRF        0xFD592000UL
#define LITCORE_GRF         0xFD594000UL
//#define PIPE_GRF            0xFDC50000UL
#define SYS_GRF             0xFD58C000UL
#define PIPE_PHY_GRF(n)     (0xFD5BC000UL + (n) * 0x4000)
#define SYSTEM_SRAM         0xFD600000UL
#define PMUCRU_BASE         0xFD7F0000UL
//#define PMU2CRU_BASE        0xFD7F0000UL
//#define CRU_BASE            0xFD7C0000UL // duplicated in RK3588.h
#define I2C0_BASE           0xFD880000UL
#define UART_BASE(n)        ((n) == 0 ? 0xFD890000UL : (0xFEA90000UL + ((n) - 1) * 0x10000))
#define GPIO_BASE(n)        ((n) == 0 ? 0xFD8A0000UL : (0xFEC20000UL + ((n) - 1) * 0x10000))
#define PMU_BASE            0xFD8D0000UL
#define GMAC0_BASE          0xFE1B0000UL
#define GMAC1_BASE          0xFE1C0000UL
#define VOP_BASE            0xFDD90000UL
#define HDMI0_BASE          0xFDE80000UL
#define HDMI1_BASE          0xFDEA0000UL
//#define PCIE2X1_APB_BASE    0xFE260000UL
#define TRNG_BASE           0xFE378000UL
#define OTP_BASE            0xFECC0000UL
#define TSADC_BASE          0xFEC00000UL
#define PIPE_PHY(n)         (0xFEE00000UL + (n) * 0x10000)
//#define PCIE2X1_S_BASE      0x300000000UL
//#define PCIE2X1_DBI_BASE    0x3C0000000UL

#endif /* RK358X_H__ */
