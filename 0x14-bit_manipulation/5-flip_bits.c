#include "main.h"

/**
 * flip_bits - Function that returns the number of bits.
 * @n: First number.
 * @m: number to flip.
 * Return: number of bits.
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bitip;
	int biflip;

	bitip = n ^ m;
	biflip = 0;

	while (bitip)
	{
		biflip++;
		bitip &= (bitip - 1);
	}

	return (biflip);
}
