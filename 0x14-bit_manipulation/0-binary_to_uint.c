#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: the Converted number.
 */


unsigned int binary_to_uint(const char *b)
{
	int len, i;
	uint sum = 0;

	if (!b)
		return (sum);

	len = slen(b);
	if (!valid(b))
		return (0);

	for (i = 0, len--; b[i]; i++, len--)
		if (b[i] == '1')
			sum += 1 * (1 << len);

	return (sum);
}
