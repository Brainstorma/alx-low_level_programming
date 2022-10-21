#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100'\n'
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int fn;
	char fz[] = "Fizz";
	char bz[] = "Buzz";
	char fzb[] = "FizzBuzz";

	for (fn = 1; fn <= 100; fn++)
	{
		if (fn == 100)
			printf("%s", bz);
		else if ((fn % 3 == 0) && (fn % 5 == 0))
			printf("%s ", fzb);
		else if (fn % 3 == 0)
			printf("%s ", fz);
		else if (fn % 5 == 0)
			printf("%s ", bz);
		else
			printf("%d ", fn);
	}
	printf("\n");
	return (0);
}
