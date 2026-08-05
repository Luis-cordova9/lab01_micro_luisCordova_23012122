#include "RTE_Components.h"
#include CMSIS_device_header
#include <stdio.h>
#include "utilities.h"

int main() {

    uint32_t reg = 0;
    uint8_t texto[] = "Hola mundo";

    printf("Inicial: %d\r\n", reg);

    bitSet(&reg, 3);
    printf("bitSet(3): %d\r\n", reg);

    bitClear(&reg, 3);
    printf("bitClear(3): %d\r\n", reg);

    bitToggle(&reg, 4);
    printf("bitToggle(4): %d\r\n", reg);

    bitToggle(&reg, 4);
    printf("bitToggle(4): %d\r\n", reg);

    printf("Largo de \"%s\": %u\r\n", texto, stringLength(texto));


    for (;;) {
    }
}
