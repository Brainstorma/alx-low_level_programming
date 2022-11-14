#include <stdio.h>

/**
 * main: program that prints the name of the file it was compiled from/n
 * Return: 0 for expected results.
 **/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
