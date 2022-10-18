#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * Challenge: below 1024
 * Return: 0 for expected output
**/

int main(void)
{
	int fn, Ln, multiples;

	Ln = 1024;
	multiples = 0;

	for (fn = 0; fn < Ln; fn++)
	{
		if ((fn % 3 == 0) || (fn % 5 == 0))
		{
			multiples = multiples + fn;
		}
		else
		{
			continue;
		}
	}

	printf("%d", multiples);
	printf("\n");

	return (0);
}
