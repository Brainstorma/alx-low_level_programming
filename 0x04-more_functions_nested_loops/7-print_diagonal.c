#include "main.h"

/**
 * print_diagonal - diagonal lines made of backslashes
 * @n: number of \ to be printed
 * Return: void
 **/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int sn, fn;

		for (sn = 0; sn < n; sn++)
		{
			for (fn = 0; fn < n; fn++)
			{
				if (fn == sn)
					_putchar('\\');
				else if (fn < sn)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
