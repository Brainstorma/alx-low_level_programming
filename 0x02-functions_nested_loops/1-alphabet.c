#include "main.h"

/**
 * main - prints the alphabet in lowecase followed by a new line
 * Challenge: You can only use _putchar twice in your code
 * Return: void
 */

void print_alphabet(void)
{
	int az;

	for (az = 'a'; az <= 'z'; az++)
	{
		_putchar(az);
	}
	_putchar('\n');
}
