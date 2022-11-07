#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 * Return: pointer to the array (Success), NULL (Error)
 **/
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int fint = 0;

	if (size == 0)
		return (NULL);

	ch = (char *) malloc(sizeof(char) * size);

	if (ch == NULL)
		return (0);

	while (fint < size)
	{
		*(ch + fint) = c;
		fint++;
	}

	*(ch + fint) = '\0';

	return (ch);
}
