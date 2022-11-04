#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 for expected results
 **/

int main(int argc, char *argv[])
{
	int pnum;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (pnum = 0; *argv; pnum++, argv++)
			;

		printf("%d\n", pnum - 1);
	}

	return (0);
}
