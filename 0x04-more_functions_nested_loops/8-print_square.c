#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @n: size of both width and length
 * Return: a square made of '#'
 **/

void print_square(int n)
{
	int fn = 0, sn;

	while (fn < n && n > 0)
	{
		sn = 0;
		while (sn < n)
		{
			_putchar('#');
			sn++;
		}
		_putchar('\n');
		fn++;
	}
	if (fn == 0)
		_putchar('\n');
}
