#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a list.
 * @head: Pointer to first node.
 * Return: combo
 **/

int sum_listint(listint_t *head)
{
	int combo = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		combo += head->n;
		head = head->next;
	}

	return (combo);
}
