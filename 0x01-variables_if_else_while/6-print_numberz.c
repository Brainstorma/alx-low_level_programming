#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * Challenge: You can only use putchar twice in your code
 * Return: 0 if result is as expected else !0
 */

int main(void)
{
	int sd;

	for (sd = 0; sd < 10; sd++)
	{
		putchar(sd+'0');
	}
	putchar('\n');
	return (0);
}
