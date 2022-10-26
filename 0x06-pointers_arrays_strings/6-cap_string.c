#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: input string
 * Return: caps on first letter of a separator
 **/

char *cap_string(char *str)
{
	int fn, sn;

	char separators[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (fn = 0; str[fn] != '\0'; fn++)
	{
		if (fn == 0 && str[fn] >= 'a' && str[fn] <= 'z')
			str[fn] -= 32;

		for (sn = 0; sn < 13; sn++)
		{
			if (str[fn] == separators[sn])
			{
				if (str[fn + 1] >= 'a' && str[fn + 1] <= 'z')
				{
					str[fn + 1] -= 32;
				}
			}
		}
	}

	return (str);
}
