/*
 * $ Copyright 2021-YEAR Cypress Semiconductor $
 */
#include "wiced.h"

typedef enum
{
    ON_OFF_BUTTON,
    APP_MAX_BUTTON,
} application_button_t;
#define APP_MAX_BUTTON_DEF 1 // define for preprocessor

wiced_result_t app_button_init(void);
