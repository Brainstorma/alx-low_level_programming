#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143\n
 * Challenge: Standard library are allowed
 * Return: 0 for (Success)
 **/

int main(void)
{
	long x = 612852475143;
	long dv = 2;
	long Lp = 0;

	while (x != 1)
	{
		if (x % dv == 0)
		{
			x = x / dv;
			Lp = dv;
		}
		dv += 1;
	}
	printf("%ld\n", Lp);
	return (0);
}
