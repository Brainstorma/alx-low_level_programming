#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate length
 * Return: void
 **/

int _strlen_recursion(char *s)
{
	int lenstr = 0;

	if (*s)
	{
		lenstr++;
		lenstr += _strlen_recursion(s + 1);
	}

	return (lenstr);
}
