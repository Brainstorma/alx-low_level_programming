#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * @h: input
 * Return: noe
 **/

size_t list_len(const list_t *h)
{
	size_t noe = 0;

	while (h)
	{
		noe++;
		h = h->next;
	}

	return (noe);
}
