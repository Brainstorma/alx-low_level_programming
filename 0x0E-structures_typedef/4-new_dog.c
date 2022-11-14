#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

int d_len(int i);
char *str_cpy(char *dest, char *src);
/**
 * new_dog - a function that creates a new dog
 * dog len of name + owner, malloc them, cpy name + owner to new
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0 for expected results
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_name;
	char *cpy_name, *cpy_owner;
	unsigned int dogx, dn_len = 0, o_len = 0;

	new_name = malloc(sizeof(dog_t));
	if (name == NULL)
		return (NULL);
	if (name == NULL || age <= 0 || owner == NULL)
	{
		free(new_name);
		return (NULL);
	}

	for (dogx = 0; name[dogx] != '\0'; dogx++)
		dn_len++;

	for (dogx = 0; owner[dogx] != '\0'; dogx++)
		o_len++;

	cpy_name = malloc(sizeof(char) * (dn_len + 1));
	if (cpy_name == NULL)
		return (NULL);

	cpy_owner = malloc(sizeof(char) * (o_len + 1));
	if (cpy_owner == NULL)
		return (NULL);

	for (dogx = 0; dogx <= dn_len; dogx++)
		cpy_name[dogx] = name[dogx];

	for (dogx = 0; dogx <= o_len; dogx++)
		cpy_owner[dogx] = owner[dogx];

	new_name->name = cpy_name;
	new_name->owner = cpy_owner;
	new_name->age = age;
	return (new_name);
}
