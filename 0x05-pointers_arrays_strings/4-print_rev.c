#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * Rstr is to first count to end and back
 * @s: str input
 * Return: string in reverse
 **/

void print_rev(char *s)
{
	int Rstr = 0;

	while (s[Rstr])
		Rstr++;
	while (Rstr--)
		_putchar(s[Rstr]);
	_putchar('\n');
}
