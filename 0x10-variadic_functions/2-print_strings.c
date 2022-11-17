#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 * Description: If separator is NULL, it is not printed.
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list varia;
	unsigned int fint;
	char *pstr;

	if (separator == NULL)
		return;

	va_start(varia, n);

	for (fint = 0; fint < n; fint++)
	{
		pstr = va_arg(varia, char *);
		if (pstr == NULL)
		{
			pstr = "(nil)";
		}
		printf("%s", pstr);
		if (fint != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(varia);
}
