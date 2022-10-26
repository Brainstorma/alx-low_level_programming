#include "main.h"

/**
 * leet - encodes a string to 1337.
 * @str: The string to be encoded.
 * Return: encoded string
 **/

char *leet(char *str)
{
	int fn, sn;

	char *x = "aAeEoOtTlL";
	char *y = "4433007711";

	for (fn = 0; str[fn] != '\0'; fn++)
	{
		for (sn = 0; sn < 10; sn++)
		{
			if (str[fn] == x[sn])
			{
				str[fn] = y[sn];
			}
		}
	}

	return (str);
}
