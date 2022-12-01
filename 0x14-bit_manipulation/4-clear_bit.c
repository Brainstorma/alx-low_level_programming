#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0.
 * @n: Number to be worked.
 * @index: Index of the binary number
 * Return: 1 for expected result else -1
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bicon;
	unsigned int biclear;

	if (index > 64)
		return (-1);
	biclear = index;
	for (bicon = 1; biclear > 0; bicon *= 2, biclear--)
		;

	if ((*n >> index) & 1)
		*n -= bicon;

	return (1);
}
