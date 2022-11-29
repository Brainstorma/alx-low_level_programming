#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the list.
 **/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *plist = NULL;
	const listint_t *len = NULL;
	size_t inc = 0;
	size_t inew;

	plist = head;
	while (plist)
	{
		printf("[%p] %d\n", (void *)plist, plist->n);
		inc++;
		plist = plist->next;
		len = head;
		inew = 0;
		while (inew < inc)
		{
			if (plist == len)
			{
				printf("-> [%p] %d\n", (void *)plist, plist->n);
				return (inc);
			}
			len = len->next;
			inew++;
		}
		if (!head)
			exit(98);
	}
	return (inc);
}
