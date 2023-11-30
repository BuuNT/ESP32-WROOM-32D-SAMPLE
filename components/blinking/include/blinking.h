#pragma once

#include "esp_err.h"
#include "esp_log.h"
#include "driver/gpio.h"

#ifdef __cplusplus
extern "C" {
#endif

esp_err_t Led_Init(uint8_t led);
esp_err_t Led_Blinking(void);

#ifdef __cplusplus
}
#endif


