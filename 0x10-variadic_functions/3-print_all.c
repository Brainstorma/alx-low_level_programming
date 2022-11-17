#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of arg types
 * Return: 0 for expected result
 **/

void print_all(const char * const format, ...)
{
	va_list varia;
	int n = 0, i = 0;
	char *s = ", ";
	char *vstr;

	va_start(varia, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			s = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(varia, int), s);
			break;
		case 'i':
			printf("%d%s", va_arg(varia, int), s);
			break;
		case 'f':
			printf("%f%s", va_arg(varia, double), s);
			break;
		case 's':
			vstr = va_arg(varia, char *);
			if (vstr == NULL)
				vstr = "(nil)";
			printf("%s%s", vstr, s);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(varia);
}
