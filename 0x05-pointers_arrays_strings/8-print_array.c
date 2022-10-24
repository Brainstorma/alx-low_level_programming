#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements of the array to be printed
 * Return: a and n inputs
 **/

void print_array(int *a, int n)
{
	int fn;

	fn = 0;
	for (n--; n >= 0; n--, fn++)
	{
		printf("%d", a[fn]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
