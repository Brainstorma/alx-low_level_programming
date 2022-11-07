#include <stdlib.h>
#include "main.h"

/**
 * no_words - func for number of swords in a string
 * @s: string
 * Return: number of swords
 **/
int no_words(char *s)
{
	int fint, sint, nwords;

	fint = 0;
	nwords = 0;

	for (sint = 0; s[sint] != '\0'; sint++)
	{
		if (s[sint] == ' ')
			fint = 0;
		else if (fint == 0)
		{
			fint = 1;
			nwords++;
		}
	}

	return (nwords);
}
/**
 * **strtow - splits a string into swords
 * @str: string to split
 * Return: pointer to splstr(Success)
 **/
char **strtow(char *str)
{
	char **splstr, *s_spliter;
	int fspliter, sspliter = 0, splen = 0, swords, sint = 0, begin, split;

	while (*(str + splen))
		splen++;
	swords = no_words(str);
	if (swords == 0)
		return (NULL);

	splstr = (char **) malloc(sizeof(char *) * (swords + 1));
	if (splstr == NULL)
		return (NULL);

	for (fspliter = 0; fspliter <= splen; fspliter++)
	{
		if (str[fspliter] == ' ' || str[fspliter] == '\0')
		{
			if (sint)
			{
				split = fspliter;
				s_spliter = (char *) malloc(sizeof(char) * (sint + 1));
				if (s_spliter == NULL)
					return (NULL);
				while (begin < split)
					*s_spliter++ = str[begin++];
				*s_spliter = '\0';
				splstr[sspliter] = s_spliter - sint;
				sspliter++;
				sint = 0;
			}
		}
		else if (sint++ == 0)
			begin = fspliter;
	}

	splstr[sspliter] = NULL;

	return (splstr);
}
