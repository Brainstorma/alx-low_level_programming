#include "main.h"

/**
 * string_toupper - changes all lower of a string to upper string
 * @str: input string
 * Return: upper string
 **/

char *string_toupper(char *str)
{
	int dup = 0;

	while (str[dup])
	{
		if (str[dup] >= 'a' && str[dup] <= 'z')
			str[dup] -= 32;

		dup++;
	}

	return (str);
}
