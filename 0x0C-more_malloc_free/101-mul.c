#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * x_digit - checks if test string contains test non-digit char
 * @s: string to be evaluated
 * Return: 0 if test non-digit is found, 1 otherwise
 **/
int x_digit(char *s)
{
	int digitx = 0;

	while (s[digitx])
	{
		if (s[digitx] < '0' || s[digitx] > '9')
			return (0);
		digitx++;
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
	int flenstr, slenstr, allenstr, digitx, hold, digit1, digit0, *multiN, test = 0;

	beta = argv[1], demo = argv[2];
	if (argc != 3 || !x_digit(beta) || !x_digit(demo))
		errors();
	flenstr = _strlen(beta);
	slenstr = _strlen(demo);
	allenstr = flenstr + slenstr + 1;
	multiN = malloc(sizeof(int) * allenstr);
	if (!multiN)
		return (1);
	for (digitx = 0; digitx <= flenstr + slenstr; digitx++)
		multiN[digitx] = 0;
	for (flenstr = flenstr - 1; flenstr >= 0; flenstr--)
	{
		digit1 = beta[flenstr] - '0';
		hold = 0;
		for (slenstr = _strlen(demo) - 1; slenstr >= 0; slenstr--)
		{
			digit0 = demo[slenstr] - '0';
			hold += multiN[flenstr + slenstr + 1] + (digit1 * digit0);
			multiN[flenstr + slenstr + 1] = hold % 10;
			hold /= 10;
		}
		if (hold > 0)
			multiN[flenstr + slenstr + 1] += hold;
	}
	for (digitx = 0; digitx < allenstr - 1; digitx++)
	{
		if (multiN[digitx])
			test = 1;
		if (test)
			_putchar(multiN[digitx] + '0');
	}
	if (!test)
		_putchar('0');
	_putchar('\n');
	free(multiN);
	return (0);
}
