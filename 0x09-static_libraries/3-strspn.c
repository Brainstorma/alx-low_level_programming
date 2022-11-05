#include "main.h"

/**
 * *_strspn - function that gets the length of a prefix substring.
 * @s: string to search
 * @accept: string containing the list of characters to match in s
 * Return: s which consist only of bytes from accept
 **/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int fint = 0;
	int sint;

	while (*s)
	{
		for (sint = 0; accept[sint]; sint++)
		{
			if (*s == accept[sint])
			{
				fint++;
				break;
			}

			else if (accept[sint + 1] == '\0')
				return (fint);
		}

		s++;
	}

	return (fint);
}
