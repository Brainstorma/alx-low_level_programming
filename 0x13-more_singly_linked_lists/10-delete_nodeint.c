#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index of a list.
 * @head: head node.
 * @index: Index given by main.
 * Return: 1 for expected results else -1
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *dnode, *dlist = *head;
	unsigned int fun;

	if (dlist == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(dlist);
		return (1);
	}

	for (fun = 0; fun < (index - 1); fun++)
	{
		if (dlist->next == NULL)
			return (-1);

		dlist = dlist->next;
	}

	dnode = dlist->next;
	dlist->next = dnode->next;
	free(dnode);
	return (1);
}
