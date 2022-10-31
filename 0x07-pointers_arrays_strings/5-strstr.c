#include "main.h"

/**
 * *_strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 * Return: pointer to the beginning of the located substring else 0
 **/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *hay = haystack;
		char *ned = needle;

		while (*hay == *ned && *ned != '\0')
		{
			hay++;
			ned++;
		}

		if (*ned == '\0')
			return (haystack);
	}

	return (NULL);
}
