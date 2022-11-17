#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print num/n
 * @separator: comma space
 * @n: elements to be printed
 * Return: void
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list fint;
	unsigned int usint;

	va_start(fint, n);

	for (usint = 0; usint < n; usint++)
	{
		printf("%d", va_arg(fint, int));

		if (usint != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(fint);
}
