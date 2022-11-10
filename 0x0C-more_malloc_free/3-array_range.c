#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: a pointer to narray
 **/

int *array_range(int min, int max)
{
	int *narray, fint, sint;

	if (min > max)
		return (NULL);

	sint = max - min + 1;

	narray = malloc(sizeof(int) * sint);

	if (narray == NULL)
		return (NULL);

	for (fint = 0; fint < sint; fint++)
		narray[fint] = min++;

	return (narray);
}
