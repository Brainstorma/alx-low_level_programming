#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - prints all possible combinations of 2.2 digits
 * Challenge: You can only use putchar 6 times in your co...
 * Return: 0 if result is as expected else !0
 */

int main(void)
{
	int dv, i, dd, dw;

	for (dv = 48; dv <= 57; dv++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (dd = 48; dd <= 57; dd++)
			{
				for (dw = 48; dw <= 57; dw++)
				{
				if (((dd + dw) > (dv + i) &&  dd >= dv) || dv < dd)
				{
					putchar(dv);
					putchar(i);
					putchar(' ');
					putchar(dd);
					putchar(dw);

					if (dv + i + dd + dw == 227 && dv == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
