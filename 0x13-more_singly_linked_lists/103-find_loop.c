#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the node where the loop starts
 **/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *floop, *flash;

	if (head == NULL || head->next == NULL)
		return (NULL);

	floop = head->next;
	flash = (head->next)->next;

	while (flash)
	{
		if (floop == flash)
		{
			floop = head;

			while (floop != flash)
			{
				floop = floop->next;
				flash = flash->next;
			}

			return (floop);
		}

		floop = floop->next;
		flash = (flash->next)->next;
	}

	return (NULL);
}
