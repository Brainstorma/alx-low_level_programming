#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters.
 * @n: const unsigned int type.
 * Return: sum of all parameters.
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list varia;
	unsigned int fint, total = 0;

	if (n == 0)
		return (0);

	va_start(varia, n);

	for (fint = 0; fint < n; fint++)
	{
		total += va_arg(varia, const unsigned int);
	}

	va_end(varia);

	return (total);
}
