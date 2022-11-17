#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings.
 * @separator: string to be printed
 * @n: number of strings
 * @...: number of strings to be printed.
 * Return: void
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	char *pstr;
	unsigned int fint;

	va_start(vlist, n);

	for (fint = 0; fint < n; fint++)
	{
		pstr = va_arg(vlist, char *);

		if (pstr == NULL)
			printf("(nil)");
		else
			printf("%s", pstr);

		if (fint != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(vlist);
}
