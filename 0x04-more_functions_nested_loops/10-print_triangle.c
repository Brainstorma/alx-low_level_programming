#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 **/

void print_triangle(int size)
{
	int fn = 1, sn;

	while (fn <= size && size > 0)
	{
		sn = 0;
		while (sn < size - fn)
		{
			_putchar(' ');
			sn++;
		}
		sn = 0;
		while (sn < fn)
		{
			_putchar('#');
			sn++;
		}

		_putchar('\n');
		fn++;
	}
	if (fn == 1)
		_putchar('\n');
}
