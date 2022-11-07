#include <stdlib.h>
#include "main.h"

/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of sz ac.
 * Return: dstring
 **/

char *argstostr(int ac, char **av)
{
	char *dstring;
	int alarg, mem, times, sz = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (alarg = 0; alarg < ac; alarg++)
	{
		for (mem = 0; av[alarg][mem]; mem++)
			sz++;
	}

	dstring = malloc(sizeof(char) * sz + 1);

	if (dstring == NULL)
		return (NULL);

	times = 0;

	for (alarg = 0; alarg < ac; alarg++)
	{
		for (mem = 0; av[alarg][mem]; mem++)
			dstring[times++] = av[alarg][mem];

		dstring[times++] = '\n';
	}

	dstring[sz] = '\0';

	return (dstring);
}
