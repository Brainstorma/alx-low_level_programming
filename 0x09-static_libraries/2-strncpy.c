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
	int dcpy = 0, slen = 0;

	while (src[dcpy++])
		slen++;

	for (dcpy = 0; src[dcpy] && dcpy < n; dcpy++)
		dest[dcpy] = src[dcpy];

	for (dcpy = slen; dcpy < n; dcpy++)
		dest[dcpy] = '\0';

	return (dest);
}
