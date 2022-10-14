#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main -  prints the alphabet in lowercase,
 * Challenge: You can only use the putchar twice
 * Return: 0 if result is as expected otherwise !0
 */

int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
