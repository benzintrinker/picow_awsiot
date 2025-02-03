#include <stdio.h>
#include "pico/stdlib.h"

#include "FreeRTOS.h"

#include "awsiot_credentials.h"

int main()
{
    stdio_init_all();

    while (true) {
        printf("Hello, world!\n");
        printf("AWS IoT Private Key : %s\n", AWSIOT_PRIVATE_KEY);
        sleep_ms(10000);
    }
}
