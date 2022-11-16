#include <stdio.h>
#include <stdlib.h>

/**
 * main - func that prints the opcodes of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 for expected results
 **/

int main(int argc, char *argv[])
{
	int fint, sint;
	char *charray;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	fint = atoi(argv[1]);

	if (fint < 0)
	{
		printf("Error\n");
		exit(2);
	}

	charray = (char *)main;

	for (sint = 0; sint < fint; sint++)
	{
		if (sint == fint - 1)
		{
			printf("%02hhx\n", charray[sint]);
			break;
		}
		printf("%02hhx ", charray[sint]);
	}
	return (0);
}
