#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * Challenge except 2 and 3
 * Return: void
 **/

void print_most_numbers(void)
{
	int pmn = 0;

	while (pmn <= 9)
	{
		if (pmn != 2 && pmn != 4)
		{
			_putchar(pmn + '0');
		}
		pmn++;
	}
	_putchar('\n');
}
