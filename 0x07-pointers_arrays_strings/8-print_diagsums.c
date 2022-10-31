#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a sqr matrix.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 * Return: void
 **/

void print_diagsums(int *a, int size)
{
	int fm;

	unsigned int ftotal, stotal;

	ftotal = 0;
	stotal = 0;

	for (fm = 0; fm < size; fm++)
	{
		ftotal += a[(size * fm) + fm];
		stotal += a[(size * (fm + 1)) - (fm + 1)];
	}

	printf("%d, %d\n", ftotal, stotal);
}
