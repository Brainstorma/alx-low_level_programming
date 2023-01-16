#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: character to find
 * Return: pointer to the first occurrence of the character
 **/

char *_strchr(char *s, char c)
{
	int cstring;

	for (cstring = 0; s[cstring] >= '\0'; cstring++)
	{
		if (s[cstring] == c)
			return (s + cstring);
	}

	return ('\0');
}
