#include "main.h"

/**
 * print_binary prints the binary representation of a number.
 * @n:decimal digit to convert in binary.
 */

#include <stdio.h>

void print_binary(unsigned long int n) {
    int i;
    for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--) {
        if ((n >> i) & 1) {
            _putchar("1");
        } else {
            _putchar("0");
        }
    }
    _putchar("\n");
}
