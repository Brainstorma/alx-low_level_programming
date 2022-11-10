#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * x_digit - checks if test string contains test non-digit char
 * @s: string to be evaluated
 * Return: 0 if test non-digit is found
 **/
int x_digit(char *s)
{
	int dx = 0;

	while (s[dx])
	{
		if (s[dx] < '0' || s[dx] > '9')
			return (0);
		dx++;
	}
	return (1);
}

/**
 * _strlen - returns the length of test string
 * @s: string to evaluate
 * Return: the length of the string
 **/
int _strlen(char *s)
{
	int lenstr = 0;

	while (s[lenstr] != '\0')
	{
		lenstr++;
	}
	return (lenstr);
}

/**
 * errors - handles errors for main
 **/
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 for Success
 **/
int main(int argc, char *argv[])
{
	char *beta, *demo;
	int fs, slen, tlen, dx, hd, d1, d0, *multiN, test = 0;

	beta = argv[1], demo = argv[2];
	if (argc != 3 || !x_digit(beta) || !x_digit(demo))
		errors();
	fs = _strlen(beta);
	slen = _strlen(demo);
	tlen = fs + slen + 1;
	multiN = malloc(sizeof(int) * tlen);
	if (!multiN)
		return (1);
	for (dx = 0; dx <= fs + slen; dx++)
		multiN[dx] = 0;
	for (fs = fs - 1; fs >= 0; fs--)
	{
		d1 = beta[fs] - '0';
		hd = 0;
		for (slen = _strlen(demo) - 1; slen >= 0; slen--)
		{
			d0 = demo[slen] - '0';
			hd += multiN[fs + slen + 1] + (d1 * d0);
			multiN[fs + slen + 1] = hd % 10;
			hd /= 10;
		}
		if (hd > 0)
			multiN[fs + slen + 1] += hd;
	}
	for (dx = 0; dx < tlen - 1; dx++)
	{
		if (multiN[dx])
			test = 1;
		if (test)
			_putchar(multiN[dx] + '0');
	}
	if (!test)
		_putchar('0');
	_putchar('\n');
	free(multiN);
	return (0);
}
