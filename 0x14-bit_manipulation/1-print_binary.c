#include "main.h"

/**
 * print_binary prints the binary representation of a number.
 * @n:decimal digit to convert in binary.
 */

#include <stdio.h>
#include <stdlib.h>

void print_binary(unsigned long int n) {
    if (n > 1) {
        print_binary(n >> 1);
    }
    _putchar((n & 1) ? '1' : '0');
}

int main() {
    unsigned long int num = 10;
    print_binary(num);
    return 0;
}
