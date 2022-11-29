#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: pointer to the head of the listint_t list.
 * Return: The size of the list that was freed.
 **/

size_t free_listint_safe(listint_t **h)
{
	size_t girt = 0;
	int slist;
	listint_t *flist;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		slist = *h - (*h)->next;
		if (slist > 0)
		{
			flist = (*h)->next;
			free(*h);
			*h = flist;
			girt++;
		}
		else
		{
			free(*h);
			*h = NULL;
			girt++;
			break;
		}
	}

	*h = NULL;

	return (girt);
}
