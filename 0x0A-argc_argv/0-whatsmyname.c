#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 for expected results
 **/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
