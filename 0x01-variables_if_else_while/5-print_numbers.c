#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - prints all single digit numbers of base 10
 * Challenge: starting from 0, followed by a new line
 * Return: 0 if result is as expected else !0
 */

int main(void)
{
	int bt;

	for (bt = 0; bt < 10; bt++)
		printf("%d", bt);
	printf("\n");
	return (0);
}
