#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * Challenge: use global variables are prohibited
 * @n: starting integer
 * Return: void
**/

void print_to_98(int n)
{
	int fn, sn;

	if (n <= 98)
	{
		for (fn = n; fn <= 98; fn++)
		{
			if (fn != 98)
				printf("%d, ", fn);
			else if (fn == 98)
				printf("%d\n", fn);
		}
	} else if (n >= 98)
	{
		for (sn = n; sn >= 98; sn--)
		{
			if (sn != 98)
				printf("%d, ", sn);
			else if (sn == 98)
				printf("%d\n", sn);
		}
	}
}
