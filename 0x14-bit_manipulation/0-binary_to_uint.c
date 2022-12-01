#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: string to cenvert.
 * Return: The converted number, or 0.
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int biuns = 0;
	unsigned int fint = 0;

	if (b == NULL)
		return (0);

	while (b[fint] != '\0')
	{
		if (b[fint] == '1')
		{
			biuns = (biuns * 2) + 1;
			fint++;
		}
		else if (b[fint] == '0')
		{
			biuns = (biuns * 2);
			fint++;
		}
		else
			return (0);

	}

	return (biuns);
}
