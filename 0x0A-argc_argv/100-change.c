#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Takes in exactly one argument for minimum coin count
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 for expected results
 **/

int main(int argc, char *argv[])
{
	int fnum, snum, lcoin;
	int bank[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	fnum = atoi(argv[1]);
	lcoin = 0;

	if (fnum < 0)
	{
		printf("0\n");
		return (0);
	}

	for (snum = 0; snum < 5 && fnum >= 0; snum++)
	{
		while (fnum >= bank[snum])
		{
			lcoin++;
			fnum -= bank[snum];
		}
	}

	printf("%d\n", lcoin);
	return (0);
}
