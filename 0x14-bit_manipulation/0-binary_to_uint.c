#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: string to cenvert.
 * Return: The converted number, or 0.
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int biuns;
	int len, bit;

	if (!b)
		return (0);

	biuns = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, bit = 1; len >= 0; len--, bit *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			biuns += bit;
		}
	}

	return (biuns);
}
