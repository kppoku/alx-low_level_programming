#include "main.h"

/**
 * print_binary prints the binary representation of a number.
 * @n:decimal digit to convert in binary.
 */

void print_binary(unsigned long int n)
{
    int i;
    char bits[64];

    for (i = 0; i < 64; i++) {
        bits[i] = '0';
    }

    i = 0;
    while (n > 0) {
        if (n & 1) {
            bits[i] = '1';
        }
        n >>= 1;
        i++;
    }

    for (i = 63; i >= 0; i--) {
        _putchar(bits[i]);
    }
}
