#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 * Return: A pointer to the resulting string dest.
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int srclen;

	for (srclen = 0; src[srclen] != '\0'; srclen++)
		if (srclen < n)
			dest[srclen] = src[srclen];
		while (srclen < n)
			dest[srclen++] = '\0';

	return (dest);
}
