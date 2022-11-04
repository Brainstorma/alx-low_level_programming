#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 for expected results
 **/

int main(int argc, char *argv[])
{
	int fnum, snum;

	if (argc == 1 || argc == 2)
	{
		printf("Something went Wrong\n");
		return (1);
	}
	else
	{
		snum = 1;

		for (fnum = 1; fnum < 3; fnum++)
		snum *= atoi(argv[fnum]);

		printf("%d\n", snum);
	}

	return (0);
}
