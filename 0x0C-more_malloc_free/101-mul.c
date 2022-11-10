#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int len_search(char *str);
char *make_arrayx(int fit);
char *iterate_zeroes(char *str);
void multi_digit(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *beta, char *flaunch, int next_len);

/**
 * len_search - Finds the length of a string.
 * @str: The string to be measured.
 * Return: The length of the string.
 **/
int len_search(char *str)
{
	int slen = 0;

	while (*str++)
		slen++;

	return (slen);
}

/**
 * make_arrayx - Creates an array of chars and initializes
 * @fit: The fit of the array to be initialized.
 * Description: If there is insufficient space
 * Return: A pointer to the arrayx.
 **/
char *make_arrayx(int fit)
{
	char *arrayx;
	int fint;

	arrayx = malloc(sizeof(char) * fit);

	if (arrayx == NULL)
		exit(98);

	for (fint = 0; fint < (fit - 1); fint++)
		arrayx[fint] = 'x';

	arrayx[fint] = '\0';

	return (arrayx);
}

/**
 * iterate_zeroes - Iterates through a string of numbers
 * @str: The string of numbers to iterate
 * Return: A pointer to the next non-zero element.
 **/
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * xdigit - Converts a digit character to a corresponding int.
 * @c: The character to be converted.
 * Description: If c is a non-digit
 * Return: The converted int.
 **/
int xdigit(char c)
{
	int digitx = c - '0';

	if (digitx < 0 || digitx > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digitx);
}

/**
 * multi_digit - Multiplies a string of numbers by a single digit.
 * @prod: The buffer to store the result.
 * @mult: The string of numbers.
 * @digit: The single digit.
 * @zeroes: The necessary number of leading zeroes.
 * Description: If mult contains a non-digit
 **/
void multi_digit(char *prod, char *mult, int digit, int zeroes)
{
	int mlen, fint, pint = 0;

	mlen = len_search(mult) - 1;
	mult += mlen;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mlen >= 0; mlen--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		fint = (*mult - '0') * digit;
		fint += pint;
		*prod = (fint % 10) + '0';
		pint = fint / 10;
	}

	if (pint)
		*prod = (pint % 10) + '0';
}

/**
 * add_nums - Adds the numbers stored in two strings.
 * @beta: The buffer storing the running final product.
 * @flaunch: The next product to be added.
 * @next_len: The length of flaunch.
 **/
void add_nums(char *beta, char *flaunch, int next_len)
{
	int fint, pint = 0;

	while (*(beta + 1))
		beta++;

	while (*(flaunch + 1))
		flaunch++;

	for (; *beta != 'x'; beta--)
	{
		fint = (*beta - '0') + (*flaunch - '0');
		fint += pint;
		*beta = (fint % 10) + '0';
		pint = fint / 10;

		flaunch--;
		next_len--;
	}

	for (; next_len >= 0 && *flaunch != 'x'; next_len--)
	{
		fint = (*flaunch - '0');
		fint += pint;
		*beta = (fint % 10) + '0';
		pint = fint / 10;

		beta--;
		flaunch--;
	}

	if (pint)
		*beta = (pint % 10) + '0';
}

/**
 * main - Multiplies two positive numbers.
 * @argv: The number of arguments passed to the program.
 * @argc: An array of pointers to the arguments.
 * Description: If the number of arguments is incorrect
 * Return: 0 for expected results.
 **/
int main(int argc, char *argv[])
{
	char *beta, *flaunch;
	int fit, fint, xnumeral, zmax = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	fit = len_search(argv[1]) + len_search(argv[2]);
	beta = make_arrayx(fit + 1);
	flaunch = make_arrayx(fit + 1);

	for (fint = len_search(argv[2]) - 1; fint >= 0; fint--)
	{
		xnumeral = xdigit(*(argv[2] + fint));
		multi_digit(flaunch, argv[1], xnumeral, zmax++);
		add_nums(beta, flaunch, fit - 1);
	}
	for (fint = 0; beta[fint]; fint++)
	{
		if (beta[fint] != 'x')
			putchar(beta[fint]);
	}
	putchar('\n');

	free(flaunch);
	free(beta);

	return (0);
}
