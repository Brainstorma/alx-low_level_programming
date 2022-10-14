#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * Challenge: You can only use putchar trice in your code
 * Return: 0 if result is as expected else !0
 */

int main(void)
{
	char a;
	char b = '0';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
