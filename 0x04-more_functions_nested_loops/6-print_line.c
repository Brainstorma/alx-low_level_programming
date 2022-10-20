#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: input number of times to print '_'
 * Return: ____________________
 **/

void print_line(int n)
{
	int stln = 0;

	while (stln < n && n > 0)
	{
		_putchar('_');
		stln++;
	}
	_putchar('\n');
}
