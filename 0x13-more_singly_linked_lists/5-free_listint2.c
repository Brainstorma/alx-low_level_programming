#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list to be freed.
 **/

void free_listint2(listint_t **head)
{
	listint_t *flist;

	if (head == NULL)
		return;

	while (*head)
	{
		flist = (*head)->next;
		free(*head);
		*head = flist;
	}
	head = NULL;
}
