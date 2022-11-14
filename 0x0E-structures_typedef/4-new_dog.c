#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * *_strlen - Finds the length of a string.
 * @str: The string to be measured.
 * Return: The length of the string.
 **/
int _strlen(char *str)
{
	int l = 0;

	while (*str++)
		l++;

	return (l);
}

/**
 * _strcopy - Copies a string pointed to by src
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int d_cpy = 0;

	for (d_cpy = 0; src[d_cpy]; d_cpy++)
		dest[d_cpy] = src[d_cpy];

	dest[d_cpy] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogx;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dogx = malloc(sizeof(dog_t));
	if (dogx == NULL)
		return (NULL);

	dogx->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogx->name == NULL)
	{
		free(dogx);
		return (NULL);
	}

	dogx->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogx->owner == NULL)
	{
		free(dogx->name);
		free(dogx);
		return (NULL);
	}

	dogx->name = _strcopy(dogx->name, name);
	dogx->age = age;
	dogx->owner = _strcopy(dogx->owner, owner);

	return (dogx);
}
