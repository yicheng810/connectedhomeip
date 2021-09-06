/**
 * $ Copyright 2016-YEAR Cypress Semiconductor $
 */
/** @file
 *
 * This file provides definitions of the LED Manager library interface.
 * LED Manager library provides API's to enable/disable, blink and set brightness of a LED.
 */
#pragma once

#include "wiced_rtos.h"
#include "wiced.h"
#include "wiced_timer.h"
#include "platform_led.h"

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************
 *                      Macros
 ******************************************************/

/******************************************************
 *                    Constants
 ******************************************************/

/******************************************************
 *                   Enumerations
 ******************************************************/

/**
 * @brief Logical LED-id's which map to physical LED's on the board
 *
 */
typedef platform_led_t wiced_led_t;

/**
 * @brief LED configuration
 *
 */
typedef struct {
	wiced_led_t led;    /**< LED id             */
	uint16_t bright;	/**< in % from 1 to 100 */
}
wiced_led_config_t;
/******************************************************
 *                 Global Variables
 ******************************************************/

/******************************************************
 *               Function Declarations
 ******************************************************/

/**
 * Function to Initialize the LED Manager
 *
 * @param  config      : Configuration for the LED.
 * @return             : result.
 */
extern wiced_result_t wiced_led_manager_init( wiced_led_config_t* config);

/**
 * Function to de-initialize the LED Manager
 *
 * @param  void        : No arguments.
 * @return             : result.
 */
extern wiced_result_t wiced_led_manager_deinit(void);

/**
 * Enables the selected LED
 *
 * @param  led      : LED to be enabled.
 * @return          : result.
 */
extern wiced_result_t wiced_led_manager_enable_led(wiced_led_t led);

/**
 * Disables the selected LED
 *
 * @param  led      : LED to be disabled.
 * @return          : result.
 */
extern wiced_result_t wiced_led_manager_disable_led(wiced_led_t led);

/**
 * Reconfigures the LED
 *
 * @param  config      : Configuration for the LED.
 * @return             : result.
 */
extern wiced_result_t wiced_led_manager_reconfig_led( wiced_led_config_t* config);

/**
 * Function called to blink a LED
 *
 * @param  led            : LED to be blinked.
 * @param  on_period      : on period (ms)
 * @param  off_period     : off period (ms)
 * @return                : result.
 */
wiced_result_t wiced_led_manager_blink_led(wiced_led_t led, uint32_t on_period, uint32_t off_period);
#ifdef __cplusplus
} /* extern "C" */
#endif
