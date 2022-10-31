#include "main.h"

/**
 * *_strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 * Return: pointer to the beginning of the located substring else 0
 **/

char *_strstr(char *haystack, char *needle)
{
	int fint, sint;

	for (fint = 0; haystack[fint] != '\0'; fint++)
	{
		for (sint = 0; needle[sint] != '\0'; sint++)
		{
			if (haystack[fint + sint] != needle[sint])
				break;
		}
		if (!needle[sint])
			return (&haystack[fint]);
	}
	return (NULL);
}
