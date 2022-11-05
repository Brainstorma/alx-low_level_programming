#include "main.h"

/**
 * _isalpha - a function that checks for lowercase character
 * Challenge: Returns 1 if c is lower(c)ase
 *@c: single character input
 * Return: 1 if result is as expected else 0
**/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
