#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * @str: the used string reference
 * Return: void
 **/

void puts2(char *str)
{
	int fn, sn;

	fn = 0;

	while (str[fn] != '\0')
	{
		fn++;
	}

	for (sn = 0; sn < fn; sn += 2)
	{
		_putchar(str[sn]);
	}

	_putchar('\n');
}
