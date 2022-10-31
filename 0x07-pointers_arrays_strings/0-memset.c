#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer for constant
 * @b: constant
 * @n: max bytes to use
 * Return:s for success
 **/
 
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int constant;

	for (constant = 0; constant < n; constant++)
	{
		s[constant] = b;
	}

	return (s);
}
