#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 * Return: new node
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	int fint, acc = 0;
	list_t *new;
	list_t *old;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (fint = 0; str[fint] != '\0'; fint++)
		acc++;

	new->len = fint;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	old = *head;

	while (old->next != NULL)
		old = old->next;

	old->next = new;

	return (new);
}
