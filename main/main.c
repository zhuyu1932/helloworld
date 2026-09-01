#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

static const char *TAG = "helloworld";

void app_main(void)
{
    unsigned long count = 0;

    while (1) {
        ESP_LOGI(TAG, "Hello World! count=%lu", count++);
        vTaskDelay(pdMS_TO_TICKS(500));
    }
}
