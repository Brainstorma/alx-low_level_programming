#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * Challenge: You can only use putchar twice in your code
 * Return: 0 if result is as expected else !0
 */

int main(void)
{
	int rl;

	for (rl = 'z'; rl >= 'a'; rl--)
	{
		putchar(rl);
	}
	putchar('\n');
	return (0);
}
