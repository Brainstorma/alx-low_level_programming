#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: string to cenvert.
 * Return: The converted number, or 0.
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int bidit = 0;
	int binc = 0;

	if (b[binc] == '\0')
		return (0);

	while ((b[binc] == '0') || (b[binc] == '1'))
	{
		bidit <<= 1;
		bidit += b[binc] - '0';
		binc++;
	}

	return (bidit);
}
