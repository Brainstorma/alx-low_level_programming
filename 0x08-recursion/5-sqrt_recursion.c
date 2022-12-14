#include "main.h"

int sqr_root(int base, int rut);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 * Return: sqr root
 **/

int _sqrt_recursion(int n)
{
	int rut = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (sqr_root(n, rut));
}
/**
 * sqr_root - Finds the natural square root of an inputted number.
 * @base: The number to find the square root of.
 * @rut: The root to be tested.
 * Return: sqr root
 **/

int sqr_root(int base, int rut)
{
	if ((rut * rut) == base)
		return (rut);

	if (rut == base / 2)
		return (-1);

	return (sqr_root(base, rut + 1));
}
