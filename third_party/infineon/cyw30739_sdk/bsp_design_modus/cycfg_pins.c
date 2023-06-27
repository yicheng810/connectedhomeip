/*******************************************************************************
* File Name: cycfg_pins.c
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

#include "cycfg_pins.h"

#define GPIO01_IO7_P0_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_0].gpio_pin, \
    .config = GPIO_INPUT_ENABLE | GPIO_PULL_UP_DOWN_NONE, \
    .default_state = GPIO_PIN_OUTPUT_LOW, \
 }
#define GPIO06_IO9_P13_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_10].gpio_pin, \
    .config = GPIO_INPUT_ENABLE | GPIO_PULL_UP_DOWN_NONE, \
    .default_state = GPIO_PIN_OUTPUT_LOW, \
 }
#define GPIO07_A2_P16_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_11].gpio_pin, \
    .config = GPIO_INPUT_ENABLE | GPIO_PULL_UP_DOWN_NONE, \
    .default_state = GPIO_PIN_OUTPUT_LOW, \
 }
#define USER_BUTTON_RSVD_1_P17_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_12].gpio_pin, \
    .config = GPIO_INPUT_ENABLE | GPIO_PULL_UP, \
    .default_state = GPIO_PIN_OUTPUT_HIGH, \
    .button_pressed_value = GPIO_PIN_OUTPUT_LOW, \
}
#define GPIO08_RSVD_2_P18_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_13].gpio_pin, \
    .config = GPIO_INPUT_ENABLE | GPIO_PULL_UP_DOWN_NONE, \
    .default_state = GPIO_PIN_OUTPUT_LOW, \
 }
#define GPIO02_IO2_P1_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_1].gpio_pin, \
    .config = GPIO_INPUT_ENABLE | GPIO_PULL_UP_DOWN_NONE, \
    .default_state = GPIO_PIN_OUTPUT_LOW, \
 }
#define ARDUINO_RESET_ARD_RST_N_P21_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_14].gpio_pin, \
    .config = GPIO_OUTPUT_ENABLE | GPIO_PULL_UP, \
    .default_state = GPIO_PIN_OUTPUT_HIGH, \
 }
#define GPIO09_RSVD_5_P22_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_15].gpio_pin, \
    .config = GPIO_INPUT_ENABLE | GPIO_PULL_UP_DOWN_NONE, \
    .default_state = GPIO_PIN_OUTPUT_LOW, \
 }
#define GPIO10_A5_P25_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_18].gpio_pin, \
    .config = GPIO_INPUT_ENABLE | GPIO_PULL_UP_DOWN_NONE, \
    .default_state = GPIO_PIN_OUTPUT_LOW, \
 }
#define LED1_LED1_N_P26_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_19].gpio_pin, \
    .config = GPIO_OUTPUT_ENABLE | GPIO_PULL_UP, \
    .default_state = GPIO_PIN_OUTPUT_HIGH, \
 }
#define LED2_LED2_N_P27_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_20].gpio_pin, \
    .config = GPIO_OUTPUT_ENABLE | GPIO_PULL_UP, \
    .default_state = GPIO_PIN_OUTPUT_HIGH, \
 }
#define GPIO11_A3_P28_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_21].gpio_pin, \
    .config = GPIO_INPUT_ENABLE | GPIO_PULL_UP_DOWN_NONE, \
    .default_state = GPIO_PIN_OUTPUT_LOW, \
 }
#define GPIO12_A4_P29_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_22].gpio_pin, \
    .config = GPIO_INPUT_ENABLE | GPIO_PULL_UP_DOWN_NONE, \
    .default_state = GPIO_PIN_OUTPUT_LOW, \
 }
#define GPIO03_IO3_P2_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_2].gpio_pin, \
    .config = GPIO_INPUT_ENABLE | GPIO_PULL_UP_DOWN_NONE, \
    .default_state = GPIO_PIN_OUTPUT_LOW, \
 }
#define GPIO13_DEBUG_UART_TXD_IO1_P33_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_25].gpio_pin, \
    .config = GPIO_INPUT_ENABLE | GPIO_PULL_UP_DOWN_NONE, \
    .default_state = GPIO_PIN_OUTPUT_LOW, \
 }
#define LightSensor_INT_RSVD_8_P37_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_28].gpio_pin, \
    .config = GPIO_INPUT_ENABLE | GPIO_PULL_UP_DOWN_NONE | GPIO_INTERRUPT_ENABLE | GPIO_EN_INT_RISING_EDGE, \
    .default_state = GPIO_PIN_OUTPUT_LOW, \
 }
#define GPIO14_IO8_P38_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_29].gpio_pin, \
    .config = GPIO_INPUT_ENABLE | GPIO_PULL_UP_DOWN_NONE, \
    .default_state = GPIO_PIN_OUTPUT_LOW, \
 }
#define GPIO04_IO13_P7_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_5].gpio_pin, \
    .config = GPIO_INPUT_ENABLE | GPIO_PULL_UP_DOWN_NONE, \
    .default_state = GPIO_PIN_OUTPUT_LOW, \
 }
#define GPIO05_A1_P9_config \
{\
    .gpio = (wiced_bt_gpio_numbers_t*)&platform_gpio_pins[PLATFORM_GPIO_6].gpio_pin, \
    .config = GPIO_INPUT_ENABLE | GPIO_PULL_UP_DOWN_NONE, \
    .default_state = GPIO_PIN_OUTPUT_LOW, \
 }

const wiced_platform_gpio_t platform_gpio_pins[] = 
{
    [PLATFORM_GPIO_0] = {WICED_P00, WICED_GPIO},
    [PLATFORM_GPIO_1] = {WICED_P01, WICED_GPIO},
    [PLATFORM_GPIO_2] = {WICED_P02, WICED_GPIO},
    [PLATFORM_GPIO_3] = {WICED_P04, pwm_0_pwm_0_TRIGGER_IN},
    [PLATFORM_GPIO_4] = {WICED_P06, uart_1_rxd_0_TRIGGER_IN},
    [PLATFORM_GPIO_5] = {WICED_P07, WICED_GPIO},
    [PLATFORM_GPIO_6] = {WICED_P09, WICED_GPIO},
    [PLATFORM_GPIO_7] = {WICED_P10, uart_1_txd_0_TRIGGER_IN},
    [PLATFORM_GPIO_8] = {WICED_P11, i2c_0_sda_0_TRIGGER_IN},
    [PLATFORM_GPIO_9] = {WICED_P12, i2c_0_scl_0_TRIGGER_IN},
    [PLATFORM_GPIO_10] = {WICED_P13, WICED_GPIO},
    [PLATFORM_GPIO_11] = {WICED_P16, WICED_GPIO},
    [PLATFORM_GPIO_12] = {WICED_P17, WICED_GPIO},
    [PLATFORM_GPIO_13] = {WICED_P18, WICED_GPIO},
    [PLATFORM_GPIO_14] = {WICED_P21, WICED_GPIO},
    [PLATFORM_GPIO_15] = {WICED_P22, WICED_GPIO},
    [PLATFORM_GPIO_16] = {WICED_P23, spi_1_mosi_0_TRIGGER_IN},
    [PLATFORM_GPIO_17] = {WICED_P24, spi_1_miso_0_TRIGGER_IN},
    [PLATFORM_GPIO_18] = {WICED_P25, WICED_GPIO},
    [PLATFORM_GPIO_19] = {WICED_P26, WICED_GPIO},
    [PLATFORM_GPIO_20] = {WICED_P27, WICED_GPIO},
    [PLATFORM_GPIO_21] = {WICED_P28, WICED_GPIO},
    [PLATFORM_GPIO_22] = {WICED_P29, WICED_GPIO},
    [PLATFORM_GPIO_23] = {WICED_P30, spi_1_cs_0_TRIGGER_IN},
    [PLATFORM_GPIO_24] = {WICED_P31, spi_1_clk_0_TRIGGER_IN},
    [PLATFORM_GPIO_25] = {WICED_P33, WICED_GPIO},
    [PLATFORM_GPIO_26] = {WICED_P35, amplifiers_0_tx_pu_0_TRIGGER_IN},
    [PLATFORM_GPIO_27] = {WICED_P36, amplifiers_0_rx_pu_0_TRIGGER_IN},
    [PLATFORM_GPIO_28] = {WICED_P37, WICED_GPIO},
    [PLATFORM_GPIO_29] = {WICED_P38, WICED_GPIO},
};
const size_t platform_gpio_pin_count = (sizeof(platform_gpio_pins) / sizeof(wiced_platform_gpio_t));
const wiced_platform_led_config_t platform_led[] = 
{
    [WICED_PLATFORM_LED_1] = LED1_LED1_N_P26_config,
    [WICED_PLATFORM_LED_2] = LED2_LED2_N_P27_config,
};
const size_t led_count = (sizeof(platform_led) / sizeof(wiced_platform_led_config_t));
const wiced_platform_button_config_t platform_button[] = 
{
    [WICED_PLATFORM_BUTTON_1] = USER_BUTTON_RSVD_1_P17_config,
};
const size_t button_count = (sizeof(platform_button) / sizeof(wiced_platform_button_config_t));
const wiced_platform_gpio_config_t platform_gpio[] = 
{
    [WICED_PLATFORM_GPIO_1] = GPIO01_IO7_P0_config,
    [WICED_PLATFORM_GPIO_2] = GPIO02_IO2_P1_config,
    [WICED_PLATFORM_GPIO_3] = GPIO03_IO3_P2_config,
    [WICED_PLATFORM_GPIO_4] = GPIO04_IO13_P7_config,
    [WICED_PLATFORM_GPIO_5] = GPIO05_A1_P9_config,
    [WICED_PLATFORM_GPIO_6] = GPIO06_IO9_P13_config,
    [WICED_PLATFORM_GPIO_7] = GPIO07_A2_P16_config,
    [WICED_PLATFORM_GPIO_8] = GPIO08_RSVD_2_P18_config,
    [WICED_PLATFORM_GPIO_18] = ARDUINO_RESET_ARD_RST_N_P21_config,
    [WICED_PLATFORM_GPIO_9] = GPIO09_RSVD_5_P22_config,
    [WICED_PLATFORM_GPIO_10] = GPIO10_A5_P25_config,
    [WICED_PLATFORM_GPIO_11] = GPIO11_A3_P28_config,
    [WICED_PLATFORM_GPIO_12] = GPIO12_A4_P29_config,
    [WICED_PLATFORM_GPIO_13] = GPIO13_DEBUG_UART_TXD_IO1_P33_config,
    [WICED_PLATFORM_GPIO_15] = LightSensor_INT_RSVD_8_P37_config,
    [WICED_PLATFORM_GPIO_14] = GPIO14_IO8_P38_config,
};
const size_t gpio_count = (sizeof(platform_gpio) / sizeof(wiced_platform_gpio_config_t));

