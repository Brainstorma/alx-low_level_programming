#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int rdex);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * add_strings - Adds two strings.
 * infinite_add - Adds two numbers.
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 * @rdex: The current index of the buffer.
 * Return: 0 for expected outcome.
 **/

char *add_strings(char *n1, char *n2, char *r, int rdex)
{
	int x, y = 0;

	for (; *n1 && *n2; n1--, n2--, rdex--)
	{
		x = (*n1 - '0') + (*n2 - '0');
		x += y;
		*(r + rdex) = (x % 10) + '0';
		y = x / 10;
	}

	for (; *n1; n1--, rdex--)
	{
		x = (*n1 - '0') + y;
		*(r + rdex) = (x % 10) + '0';
		y = x / 10;
	}

	for (; *n2; n2--, rdex--)
	{
		x = (*n2 - '0') + y;
		*(r + rdex) = (x % 10) + '0';
		y = x / 10;
	}

	if (y && rdex >= 0)
	{
		*(r + rdex) = (y % 10) + '0';
		return (r + rdex);
	}

	else if (y && rdex < 0)
		return (0);

	return (r + rdex + 1);
}

/**
 * infinite_add - Adds two numbers.
 * @size_r: The buffer size.
 **/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int 	fn, fnlen = 0, snlen = 0;

	for (fn = 0; *(n1 + fn); fn++)
		fnlen++;

	for (fn = 0; *(n2 + fn); fn++)
		snlen++;

	if (size_r <= fnlen + 1 || size_r <= snlen + 1)
		return (0);

	n1 += fnlen - 1;
	n2 += snlen - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
