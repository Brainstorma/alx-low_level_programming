#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9,
 * Challenge no global variables allowed.
 **/

void print_numbers(void)
{
	char pn = 0;

	while (pn <= 9)
	{
		_putchar(pn + '0');
		pn++;
	}
	_putchar('\n');
}
