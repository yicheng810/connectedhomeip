/*
 * $ Copyright 2021-YEAR Cypress Semiconductor $
 */

#pragma once

#include <lib/core/CHIPError.h>

// Application-defined error codes in the CHIP_ERROR space
#define APP_ERROR_INIT_TIMER_FAILED CHIP_ERROR_NO_MEMORY // should use CHIP_APPLICATION_ERROR when it's ready

// Application configurations
#define ACTUATOR_MOVEMENT_PERIOS_MS 1000
