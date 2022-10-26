#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 * Return: encoded string
 **/

char *rot13(char *str)
{
	int fn, sn;

	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (fn = 0; str[fn] != '\0'; fn++)
	{
		for (sn = 0; x[sn] != '\0'; sn++)
		{
			if (str[fn] == x[sn])
			{
				str[fn] = y[sn];
				break;
			}
		}
	}

	return (str);
}
