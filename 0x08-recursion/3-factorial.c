#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 * Return: factored number
 **/

int factorial(int n)
{
	int factor = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	factor *= factorial(n - 1);

	return (factor);
}
