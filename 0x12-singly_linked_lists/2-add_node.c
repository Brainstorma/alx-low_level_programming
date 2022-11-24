#include "lists.h"

/**
 * add_node - Adds a new node at the beginning
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 * Return: new node
 **/

list_t *add_node(list_t **head, const char *str)
{
	int fint, ncc = 0;
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (fint = 0; str[fint] != '\0'; fint++)
		ncc++;

	new->len = fint;
	new->str = strdup(str);
	new->next = *head;

	*head = new;

	return (new);
}
