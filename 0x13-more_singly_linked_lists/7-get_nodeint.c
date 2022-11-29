#include "lists.h"

/**
 * *get_nodeint_at_index - Returns the node of a list.
 * @head: Pointer to first node.
 * @index: count of node in the list.
 * Return: The address of node.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int gnode;

	for (gnode = 0; gnode < index; gnode++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
