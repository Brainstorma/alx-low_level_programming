#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * challenge: Long is prohibited 
 * Return: the int converted from the string
 **/

int _atoi(char *s)
{
	int sg = 1;
	unsigned int fn = 0;

	do {

		if (*s == '-')
			sg *= -1;

		else if (*s >= '0' && *s <= '9')
			fn = (fn * 10) + (*s - '0');

		else if (fn > 0)
			break;
	} while (*s++);

	return (fn * sg);
}
