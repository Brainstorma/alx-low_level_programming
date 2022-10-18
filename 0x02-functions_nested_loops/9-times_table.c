#include "main.h"

/**
 * times_table - prints the 9 times table
 * Challenge: use global variables are prohibited
 *@void: def in main.h
 * Return: void
**/

void times_table(void)
{
	int a, n, t;

	for (a = 0; a < 10; a++)
	{
		for (n = 0; n < 10; n++)
		{
			t = n * a;
			if (n == 0)
			{
				_putchar(t + '0');
			}

			if (t < 10 && n != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(t + '0');
			} else if (t >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((t / 10) + '0');
				_putchar((t % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
