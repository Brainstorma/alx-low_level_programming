#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * Challenge: Returns the value of the last digit
 *@Ld: number's last digit result
 * Return: value of the last digit
**/

int print_last_digit(int Ld)
{
	int aLd;

	if (Ld < 0)
		Ld = -Ld;

	aLd = Ld % 10;

	if (aLd < 0)
		aLd = -aLd;

	_putchar(aLd + '0');

	return (aLd);
}
