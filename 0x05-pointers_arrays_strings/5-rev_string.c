#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: input string to be reversed
 * Return: void
 **/

void rev_string(char *s)
{
	char Rstr = s[0];
	int nc = 0;
	int sn;

	while (s[nc] != '\0')
		nc++;

	for (sn = 0; sn < nc; sn++)
	{
		nc--;
		Rstr = s[sn];
		s[sn] = s[nc];
		s[nc] = Rstr;
	}
}
