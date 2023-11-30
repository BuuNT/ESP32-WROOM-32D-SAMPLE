#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "blinking.h"

void app_main(void)
{
    Led_Init(2); // using gpio2 pin

    while (1)
    {
        Led_Blinking();
        vTaskDelay(pdMS_TO_TICKS(500)); // delay 500ms
    }
}
