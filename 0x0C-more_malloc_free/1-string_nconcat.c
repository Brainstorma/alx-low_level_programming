#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 * Return: pointer to conmem
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conmem;
	unsigned int fint = 0, sint = 0, flenstr = 0, slenstr = 0;

	while (s1 && s1[flenstr])
		flenstr++;
	while (s2 && s2[slenstr])
		slenstr++;

	if (n < slenstr)
		conmem = malloc(sizeof(char) * (flenstr + n + 1));
	else
		conmem = malloc(sizeof(char) * (flenstr + slenstr + 1));

	if (!conmem)
		return (NULL);

	while (fint < flenstr)
	{
		conmem[fint] = s1[fint];
		fint++;
	}

	while (n < slenstr && fint < (flenstr + n))
		conmem[fint++] = s2[sint++];

	while (n >= slenstr && fint < (flenstr + slenstr))
		conmem[fint++] = s2[sint++];

	conmem[fint] = '\0';

	return (conmem);
}
