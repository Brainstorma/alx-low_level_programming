#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a list
 * @head: A pointer to the head of the listint_t list address.
 * @idx: The index of the listint_t list
 * @n: The integer for the new node to contain.
 * Return: inew
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *inew, *inode;
	unsigned int ilist;

	inode = *head;
	inew = malloc(sizeof(listint_t));

	if (inew == NULL)
		return (NULL);

	inew->n = n;

	if ((idx) == 0)
	{
		inew->next = *head;
		*head = inew;
		return (inew);
	}

	for (ilist = 0; ilist < idx - 1; ilist++)
	{
		if (inode->next == NULL)
			return (NULL);
		inode = inode->next;
	}
	inew->next = inode->next;
	inode->next = inew;
	return (inew);
}
