#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: pointer to the head of the listint_t list address.
 * @n: The integer for the new node to contain.
 * Return: head.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nenode;

	nenode = malloc(sizeof(listint_t));

	if (nenode == NULL)
	{
		return (NULL);
	}

	nenode->n = n;
	nenode->next = *head;
	*head = nenode;
	return (*head);
}
