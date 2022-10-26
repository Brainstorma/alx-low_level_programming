#include "main.h"

/**
 * print_number - prints an integer;
 * @n: number to be printed
 * Return: void
 **/

void print_number(int n)
{
	unsigned int pnum = n;

	if (n < 0)
	{
		_putchar('-');
		pnum = -pnum;
	}

	if ((pnum / 10) > 0)
		print_number(pnum / 10);

	_putchar((pnum % 10) + '0');
}
