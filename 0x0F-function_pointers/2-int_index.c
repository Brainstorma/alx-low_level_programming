#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: Pointer to array
 * @size: Size of array
 * @cmp: Pointer to function of int type
 * Return: search_int
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int search_int;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (search_int = 0; search_int < size; search_int++)
	{
		if (cmp(array[search_int]) != 0)
			return (search_int);
	}

	return (-1);
}
