#include "utilities.h"

void bitSet(uint32_t *ptr, uint8_t bit) {
    *ptr |= (1UL << bit);
}

void bitClear(uint32_t *ptr, uint8_t bit) {
    *ptr &= ~(1UL << bit);
}

void bitToggle(uint32_t *ptr, uint8_t bit) {
    *ptr ^= (1UL << bit);
}

uint8_t stringLength(uint8_t *str) {
    uint8_t count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}