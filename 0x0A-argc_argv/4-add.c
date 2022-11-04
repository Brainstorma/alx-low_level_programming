#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Program that takes in all integer arguments and returns the sum
 * @argc: Number of command line arguments
 * @argv: array of arguents
 * Return: 0 for expected results
 **/

int main(int argc, char *argv[])
{
	int fnum, snum, len, adds;
	char *ptr;

	if (argc < 2)
	printf("0\n");
	else
	{
		adds = 0;
		for (fnum = 1; fnum < argc; fnum++)
		{
			ptr = argv[fnum];
			len = strlen(ptr);

			for (snum = 0; snum < len; snum++)
			{
				if (isdigit(*(ptr + snum)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			adds += atoi(argv[fnum]);
		}

		printf("%d\n", adds);
	}
	return (0);
}
