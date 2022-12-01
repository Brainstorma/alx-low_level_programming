#include "main.h"

/**
 * get_endianness - Checks the endianness.
 * Return: 0
 **/

int get_endianness(void)
{
	int biend;

	biend = 1;
	if (*(char *)&biend == 1)
		return (1);
	else
		return (0);
}
