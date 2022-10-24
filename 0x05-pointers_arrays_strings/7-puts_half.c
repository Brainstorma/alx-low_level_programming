#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd stlen, fn = (length_of_the_string - 1) / 2
 * @str: string to be printed
 * Return: half of input
 **/

void puts_half(char *str)
{
	int stlen, fn, sn;

	stlen = 0;

	while (str[stlen] != '\0')
	{
		stlen++;
	}

	if (stlen % 2 == 0)
	{
		for (sn = stlen / 2; str[sn] != '\0'; sn++)
		{
			_putchar(str[sn]);
		}
	} else if (stlen % 2)
	{
		for (fn = (stlen - 1) / 2; fn < stlen - 1; fn++)
		{
			_putchar(str[fn + 1]);
		}
	}
	_putchar('\n');
}
