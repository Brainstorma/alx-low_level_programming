#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of a element in a linked list.
 * @h: Pointer to the struct.
 * Return: the number of elements.
 **/

size_t listint_len(const listint_t *h)
{
	size_t E_ments = 0;

	while (h)
	{
		E_ments++;
		h = h->next;
	}

	return (E_ments);
}
