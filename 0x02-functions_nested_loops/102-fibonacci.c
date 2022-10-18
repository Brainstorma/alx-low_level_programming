#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers
 * Challenge: comments 
 * Return: 0 for expected output
**/

int main(void)
{
	long int a, b, c, next;

	b = 1;

	c = 2;

	for (a = 1; a <= 50; ++a)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		} else
		{
			printf("%ld\n", b);
		}
		next = b + c;
		b = c;
		c = next;
	}

	return (0);
}
