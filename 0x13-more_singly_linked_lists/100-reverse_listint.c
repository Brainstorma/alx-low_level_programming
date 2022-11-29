#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of the head of the list_t list.
 * Return: A pointer to the first node of the reversed list.
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *relist = NULL;
	listint_t *verse = NULL;

	if (head == NULL)
		return (NULL);
	for (; *head != NULL; *head = relist)
	{
		relist = (*head)->next;
		(*head)->next = verse;
		verse = *head;
	}
	*head = verse;
	return (*head);
}
