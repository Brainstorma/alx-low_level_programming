#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: pointer to the list_t
 * Return: free
 **/

void free_list(list_t *head)
{
	list_t *flst;

	while (head)
	{
		flst = head->next;
		free(head->str);
		free(head);
		head = flst;
	}
}
