#include "blinking.h"

static const char * TAG = "BLINKING";

static uint8_t LED_PIN;
static uint8_t LED_STATE;

esp_err_t Led_Init(uint8_t gpio_pin)
{
    LED_PIN = gpio_pin;
    gpio_reset_pin(LED_PIN);
    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT);
    ESP_LOGI(TAG, "Led_Init"); // loginfo
    return ESP_OK;
}

esp_err_t Led_Blinking(void)
{
    LED_STATE = ~LED_STATE;
    gpio_set_level(LED_PIN, LED_STATE);
    return ESP_OK;
}