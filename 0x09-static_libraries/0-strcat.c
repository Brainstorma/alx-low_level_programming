#include "main.h"

/**
 * *_strcat - concatenates two strings @src to @dest
 * @src: second string
 * @dest: main string to be concatenated
 * Return: pointer to the resulting string
 **/

char *_strcat(char *dest, char *src)
{
	int fn, sn;

	fn = 0;
	sn = 0;

	while (dest[fn] != '\0')
		fn++;

	while (src[sn] != '\0')
	{
		dest[fn] = src[sn];
		sn++;
		fn++;
	}

	dest[fn] = '\0';

	return (dest);
}
