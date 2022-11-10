#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 * Return: a pointer to newmem
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newmem;
	char *oldmem;
	unsigned int fint;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	newmem = malloc(new_size);
	if (!newmem)
		return (NULL);

	oldmem = ptr;

	if (new_size < old_size)
	{
		for (fint = 0; fint < new_size; fint++)
			newmem[fint] = oldmem[fint];
	}

	if (new_size > old_size)
	{
		for (fint = 0; fint < old_size; fint++)
			newmem[fint] = oldmem[fint];
	}

	free(ptr);
	return (newmem);
}
