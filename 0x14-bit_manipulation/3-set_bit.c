#include "main.h"

/**
 * set_bit - Sets a bit in given position.
 * @n: Number.
 * @index: Index.
 * Return: 1 for expected result else -1
 **/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
