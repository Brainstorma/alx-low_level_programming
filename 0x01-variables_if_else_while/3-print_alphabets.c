#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * Challenge: You can only use the putchar trice
 * Return: 0 if result is as expected otherwise !0
 */

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	for (l = 'A'; l <= 'Z'; l++)
		putchar(l);
		putchar('\n');

	return (0);
}
