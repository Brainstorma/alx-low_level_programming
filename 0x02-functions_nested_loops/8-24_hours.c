#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Challenge: Returns the value of the last digit
 *@void: def in main.h
 * Return: void
**/

void jack_bauer(void)
{
	int bauer, jack;

	bauer = 0;

	while (bauer < 24)
	{
		jack = 0;
		while (jack < 60)
		{
			_putchar((bauer / 10) + '0');
			_putchar((bauer % 10) + '0');
			_putchar(':');
			_putchar((jack / 10) + '0');
			_putchar((jack % 10) + '0');
			_putchar('\n');
			jack++;
		}
		bauer++;
	}
}
