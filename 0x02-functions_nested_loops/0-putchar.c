#include "main.h"

/*
 * main - program that prints _putchar, followed by a new line
 * Challenge: No more than 5 functions per file
 * Return: 0 if result is as expected else !0
 */

int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, ct;

	ct = sizeof(str) / sizeof(int);
	for (count = 0; count < ct; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
