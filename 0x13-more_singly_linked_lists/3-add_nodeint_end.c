#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list.
 * @head: pointer to first node.
 * @n: Int to be added.
 * Return: The address of the new element.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *now, *then;

	now = malloc(sizeof(listint_t));
	if (now == NULL)
		return (NULL);

	now->n = n;
	now->next = NULL;

	if (*head == NULL)
		*head = now;

	else
	{
		then = *head;
		while (then->next != NULL)
			then = then->next;
		then->next = now;
	}

	return (*head);
}
