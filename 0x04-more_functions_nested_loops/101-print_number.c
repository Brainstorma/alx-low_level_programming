#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: void
 **/

void print_number(int n)
{
	unsigned int pn;

	pn = n;
	if (n < 0)
	{
		_putchar(45);
		pn = -n;
	}
	if (pn / 10)
		print_number(pn / 10);
	_putchar((pn % 10) + '0');
}
