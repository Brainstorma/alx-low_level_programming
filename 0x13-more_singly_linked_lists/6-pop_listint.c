#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list.
 * @head: Pointer to first node.
 * Return: dlist or 0.
 **/

int pop_listint(listint_t **head)
{
	listint_t *dnode;
	int dlist;

	if (*head == NULL)
		return (0);

	dnode = *head;
	dlist = (*head)->n;
	*head = (*head)->next;

	free(dnode);

	return (dlist);
}
