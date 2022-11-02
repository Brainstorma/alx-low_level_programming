#include "main.h"

/**
 * _pow_recursion - func that returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power
 * Return: x^y
 **/

int _pow_recursion(int x, int y)
{
	int repow = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	repow *= _pow_recursion(x, y - 1);

	return (repow);
}
