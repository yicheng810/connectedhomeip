/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.4.0.5972
* 30739A0 CSP 
* personalities 1.0.0.31
* udd 3.0.0.2103
*
********************************************************************************
* Copyright 2022 Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "wiced_platform.h"
#include "cycfg_routing.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define amplifiers_0_ENABLED 1U
#define bluetooth_0_ENABLED 1U
#define i2c_0_ENABLED 1U
#define ioss_0_ENABLED 1U
#define WICED_GET_PIN_FOR_LED(idx) (*(platform_led[(idx)].gpio))
#define WICED_GET_PIN_FOR_BUTTON(idx) (*(platform_button[(idx)].gpio))
#define WICED_GET_PIN_FOR_IO(idx) (*(platform_gpio[(idx)].gpio))
#define GPIO01_IO7_P0_ENABLED 1U
#define GPIO01_IO7_P0 WICED_P00
#define PUART_TXD_IO10_P10_ENABLED 1U
#define PUART_TXD_IO10_P10 WICED_P10
#define I2C_SDA_SDA_P11_ENABLED 1U
#define I2C_SDA_SDA_P11 WICED_P11
#define I2C_SCL_SCL_P12_ENABLED 1U
#define I2C_SCL_SCL_P12 WICED_P12
#define GPIO06_IO9_P13_ENABLED 1U
#define GPIO06_IO9_P13 WICED_P13
#define GPIO07_A2_P16_ENABLED 1U
#define GPIO07_A2_P16 WICED_P16
#define USER_BUTTON_RSVD_1_P17_ENABLED 1U
#define USER_BUTTON_RSVD_1_P17 WICED_P17
#define GPIO08_RSVD_2_P18_ENABLED 1U
#define GPIO08_RSVD_2_P18 WICED_P18
#define GPIO02_IO2_P1_ENABLED 1U
#define GPIO02_IO2_P1 WICED_P01
#define ARDUINO_RESET_ARD_RST_N_P21_ENABLED 1U
#define ARDUINO_RESET_ARD_RST_N_P21 WICED_P21
#define GPIO09_RSVD_5_P22_ENABLED 1U
#define GPIO09_RSVD_5_P22 WICED_P22
#define MOSI_RSVD_6_P23_ENABLED 1U
#define MOSI_RSVD_6_P23 WICED_P23
#define MISO_RSVD_7_P24_ENABLED 1U
#define MISO_RSVD_7_P24 WICED_P24
#define GPIO10_A5_P25_ENABLED 1U
#define GPIO10_A5_P25 WICED_P25
#define LED1_LED1_N_P26_ENABLED 1U
#define LED1_LED1_N_P26 WICED_P26
#define LED2_LED2_N_P27_ENABLED 1U
#define LED2_LED2_N_P27 WICED_P27
#define GPIO11_A3_P28_ENABLED 1U
#define GPIO11_A3_P28 WICED_P28
#define GPIO12_A4_P29_ENABLED 1U
#define GPIO12_A4_P29 WICED_P29
#define GPIO03_IO3_P2_ENABLED 1U
#define GPIO03_IO3_P2 WICED_P02
#define CS_RSVD_9_P30_ENABLED 1U
#define CS_RSVD_9_P30 WICED_P30
#define SCLK_RSVD_10_P31_ENABLED 1U
#define SCLK_RSVD_10_P31 WICED_P31
#define GPIO13_DEBUG_UART_TXD_IO1_P33_ENABLED 1U
#define GPIO13_DEBUG_UART_TXD_IO1_P33 WICED_P33
#define TX_PU_CTX_P35_ENABLED 1U
#define TX_PU_CTX_P35 WICED_P35
#define RX_PU_CRX_P36_ENABLED 1U
#define RX_PU_CRX_P36 WICED_P36
#define LightSensor_INT_RSVD_8_P37_ENABLED 1U
#define LightSensor_INT_RSVD_8_P37 WICED_P37
#define GPIO14_IO8_P38_ENABLED 1U
#define GPIO14_IO8_P38 WICED_P38
#define PWM0_IO12_P4_ENABLED 1U
#define PWM0_IO12_P4 WICED_P04
#define PUART_RXD_IO11_P6_ENABLED 1U
#define PUART_RXD_IO11_P6 WICED_P06
#define GPIO04_IO13_P7_ENABLED 1U
#define GPIO04_IO13_P7 WICED_P07
#define GPIO05_A1_P9_ENABLED 1U
#define GPIO05_A1_P9 WICED_P09
#define pwm_0_ENABLED 1U
#define spi_1_ENABLED 1U
#define uart_1_ENABLED 1U

extern const wiced_platform_gpio_t platform_gpio_pins[];
extern const size_t platform_gpio_pin_count;
extern const wiced_platform_led_config_t platform_led[];
extern const size_t led_count;
extern const wiced_platform_button_config_t platform_button[];
extern const size_t button_count;
extern const wiced_platform_gpio_config_t platform_gpio[];
extern const size_t gpio_count;


#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
