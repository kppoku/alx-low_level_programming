#include "main.h"

/**
 * print_binary prints the binary representation of a number.
 * @n:decimal digit to convert in binary.
 */

#include <stdio.h>
#include <stdlib.h>

void print_binary(int num) {
    int* binary = malloc(sizeof(int) * 32);
    int i = 0;

    // Convert decimal to binary
    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    // Print binary representation
    for (int j = i - 1; j >= 0; j--) {
        _putchar(binary[j] + '0');
    }

    // Free dynamically allocated memory
    free(binary);
}

int main() {
    int num = 10;
    print_binary(num);
    return 0;
}
