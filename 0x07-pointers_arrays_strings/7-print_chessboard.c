#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: two dimension array pointer
 * Return: void
 **/

void print_chessboard(char (*a)[8])
{
	int fint, sint;

	fint = 0;
	sint = 0;
	while (fint < 64)
	{
		if (fint % 8 == 0 && fint != 0)
		{
			sint = fint;
			_putchar('\n');
		}

		_putchar(a[fint / 8][fint - sint]);
		fint++;
	}
	_putchar('\n');
}
