#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowecase followed by a new line
 * Challenge: You can only use _putchar twice in your code
 * Return: void
 */

void print_alphabet(void) //def in the main.h

{
	int az;

	for (az = 'a'; az <= 'z'; az++)
	{
		_putchar(az);
	}
	_putchar('\n');
}
