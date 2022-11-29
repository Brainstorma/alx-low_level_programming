#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * @head: A pointer to the head of the listint_t to check.
 * Return: list looped Otherwise 1
 **/

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *floop, *flash;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	floop = head->next;
	flash = (head->next)->next;

	while (flash)
	{
		if (floop == flash)
		{
			floop = head;
			while (floop != flash)
			{
				nodes++;
				floop = floop->next;
				flash = flash->next;
			}

			floop = floop->next;
			while (floop != flash)
			{
				nodes++;
				floop = floop->next;
			}

			return (nodes);
		}

		floop = floop->next;
		flash = (flash->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: nodes list.
 **/
size_t print_listint_safe(const listint_t *head)
{
	size_t new, plist = 0;

	new = looped_listint_len(head);

	if (new == 0)
	{
		for (; head != NULL; new++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (plist = 0; plist < new; plist++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (new);
}
