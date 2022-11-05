#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area
 * @src: source of memory area
 * @n: length of memory area
 * Return: pointer to dest
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cpmem;

	for (cpmem = 0; cpmem < n; cpmem++)
	{
		dest[cpmem] = src[cpmem];
	}
	return (dest);
}
