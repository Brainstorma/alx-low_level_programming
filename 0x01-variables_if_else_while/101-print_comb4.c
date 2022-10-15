#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - prints all possible different combinations of 3 digits
 * Challenge: You can only use putchar 6 times in your cod...
 * Return: 0 if result is as expected else !0
 */

int main(void)
{
	int tc, i, a;

	for (tc = '0'; tc <= '9'; tc++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (a = '0'; a <= '9'; a++)
			{
				if (tc < i && i < a)
				{
					putchar(tc);
					putchar(i);
					putchar(a);

					if (tc != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
