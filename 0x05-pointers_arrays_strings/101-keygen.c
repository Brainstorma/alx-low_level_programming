#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords for the program
 * Return: 0 for expected output.
 **/

int main(void)
{
	int pcode[100];
	int fn, total, sn;

	total = 0;	

	srand(time(NULL));

	for (fn = 0; fn < 100; fn++)
	{
		pcode[fn] = rand() % 78;
		total += (pcode[fn] + '0');
		putchar(pcode[fn] + '0');
		if ((2772 - total) - '0' < 78)
		{
			sn = 2772 - total - '0';
			total += sn;
			putchar(sn + '0');
			break;
		}
	}

	return (0);
}
