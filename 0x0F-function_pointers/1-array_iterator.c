#include "function_pointers.h"

/**
 *array_iterator - Execute a function given as a parameter.
 *@array: array
 *@size: Size of array.
 *@action: pointer action
 *Return: void.
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int fint;

	if (!array || !action)
		return;

	for (fint = 0; fint < size; fint++)
		action(array[fint]);
}
