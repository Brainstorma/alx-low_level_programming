#include "main.h"

/**
 * _strncat - concatenates n bytes from a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of string to concatenate
 * Return: pointer to the resulting string dest
 **/

char *_strncat(char *dest, char *src, int n)
{
	int fn = 0, dlen = 0;

	while (dest[fn++])
		dlen++;
	for (fn = 0; src[fn] && fn < n; fn++)
		dest[dlen++] = src[fn];
	return (dest);
}
