#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Challenge: Only use _putchar twice
 * Return: void
 **/

void more_numbers(void)
{
	char fn, sn;
	int i = 0;

	while (nb < 10)
	{
		for (fn = 0; fn <= 14; fn++)
		{
			sn = fn;
			if (fn > 9)
			{
				_putchar('1');
				sn = fn % 10;
			}
			_putchar('0' + sn);
		}

		_putchar('\n');
		nb++;
	}
}
