#include <stdio.h>
#include "pico/stdlib.h"
#include "mpu6050.h"

int16_t ax, ay, az;

void init_setup(){

    stdio_init_all();

    sleep_ms(1000);

    mpu6050_init();
    
}

int main()
{
    init_setup();

    while (true) {
        mpu6050_read_raw(&ax, &ay, &az);

        float inclunation = mpu6050_get_inclination(ax, ay, az);
        if (inclunation > 15){
            printf("Inclinação acima de 15 graus\n");
            sleep_ms(1000);
        }
        if (inclunation < 5){
            printf("Inclinação abaixo de 5 graus -> %.2f\n", inclunation);
            sleep_ms(1000);
        }
    }
}
