#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of the random
 * Challenge: output should be i>5, i=0, i<6.
 * Return: 0 if result is as expected otherwise !0
 */

int main(void)
{
	int n, i;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	i = n % 10;

	if (i > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	else if (i < 6 && i != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
	else
		printf("Last digit of %d is %d and is 0\n", n, i);
	return (0);
}
