#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * Challenge: Returns 1 if c is lowercase
 * Return: 1 if result is as expected else 0
**/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
