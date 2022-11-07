#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 * Return: pointer to strcat (Success), NULL (Error)
 **/

char *str_concat(char *s1, char *s2)
{
	char *strcat;
	int fconcat, sconcat = 0, lencat = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (fconcat = 0; s1[fconcat] || s2[fconcat]; fconcat++)
		lencat++;

	strcat = malloc(sizeof(char) * lencat);

	if (strcat == NULL)
		return (NULL);

	for (fconcat = 0; s1[fconcat]; fconcat++)
		strcat[sconcat++] = s1[fconcat];

	for (fconcat = 0; s2[fconcat]; fconcat++)
		strcat[sconcat++] = s2[fconcat];

	return (strcat);
}
