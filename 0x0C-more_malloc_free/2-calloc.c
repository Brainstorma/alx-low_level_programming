#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory.
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *allmem;
	char *nomem;
	unsigned int fint;

	if (nmemb == 0 || size == 0)
		return (NULL);

	allmem = malloc(size * nmemb);

	if (allmem == NULL)
		return (NULL);

	nomem = allmem;

	for (fint = 0; fint < (size * nmemb); fint++)
		nomem[fint] = '\0';

	return (allmem);
}
