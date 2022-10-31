#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to searched
 * @accept: stringcontaining the bytes to look for
 * Return: s that matches one of the bytes in accept
 **/

char *_strpbrk(char *s, char *accept)
{
	int fint;

	while (*s)
	{
		for (fint = 0; accept[fint]; fint++)
		{
			if (*s == accept[fint])
				return (s);
		}

		s++;
	}
	return ('\0');
}
