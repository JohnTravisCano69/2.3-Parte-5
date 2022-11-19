)))cpp
/*Lara Segovia Jonathan
19210515
Lenguaje de interfaz
Programa para hacer parpadear un led y usar puerto serial*/

#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

int main() {
    stdio_init_all();
    while (true) {
        
        printf("Hola humano\n");
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
        sleep_ms(2500);
        printf("Adios humano\n");
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
        sleep_ms(2500);

    }
    return 0;
}

)))
