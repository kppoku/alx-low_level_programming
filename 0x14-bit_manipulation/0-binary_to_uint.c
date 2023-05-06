#include "main.h"

/**
 * @b: binary string
 * 
 * binary_to_uint - converts binary to int
 *
 * Return: unsigned int with decimal value of binary number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
if (!b)
return (0);

unsigned int num = 0;

for (int i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
}

for (int i = 0; b[i] != '\0'; i++)
{
num <<= 1;
if (b[i] == '1')
num += 1;
}

return (num);
}
