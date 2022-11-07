#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to copies
 * Return: pointer to copies(Success), NULL (Error)
 **/

char *_strdup(char *str)
{
	char *copies;
	int fint, lenstr = 0;

	if (str == NULL)
		return (NULL);

	for (fint = 0; str[fint]; fint++)
		lenstr++;

	copies = malloc(sizeof(char) * (lenstr + 1));

	if (copies == NULL)
		return (NULL);

	for (fint = 0; str[fint]; fint++)
		copies[fint] = str[fint];

	copies[lenstr] = '\0';

	return (copies);
}
