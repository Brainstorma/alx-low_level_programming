#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: length of string
 **/

int _strlen(char *s)
{
	int slen = 0;

	while (s[slen])
		slen++;
	return (slen);
}
