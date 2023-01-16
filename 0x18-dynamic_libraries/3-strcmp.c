#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: first string pointer.
 * @s2: second string pointer.
 * Return: 0 for expected results.
 **/

int _strcmp(char *s1, char *s2)
{
	int cmp;

	for (cmp = 0; s1[cmp] != '\0' && s2[cmp] != '\0'; cmp++)
	{
		if (s1[cmp] != s2[cmp])
			return (s1[cmp] - s2[cmp]);
	}
	return (0);
}
