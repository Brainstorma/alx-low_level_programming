#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 for expected results
 **/

int main(int argc, char *argv[])
{
	int pall = 0;

	while (pall < argc)
	{
		printf("%s\n", argv[pall]);
		pall++;
	}
	return (0);
}
