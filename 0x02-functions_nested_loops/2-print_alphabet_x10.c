#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10 times
 * Challenge: You can only use _putchar twice in your code
 * Return: 0 if result is as expected else !0
**/

void print_alphabet_x10(void)
{
	char st;
	int d;

	d = 0;

	while (d < 10)
	{
		st = 'a';
		while (st <= 'z')
		{
			_putchar(st);
			st++;
		}
		_putchar('\n');
		d++;
	}
}
