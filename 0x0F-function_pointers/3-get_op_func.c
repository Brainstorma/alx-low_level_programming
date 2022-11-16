#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function pointer that selects the correct function to perform
 * @s: the operator given by the user
 * Return: pointer to the function
 **/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int fint = 0;

	while (ops[fint].op != NULL && *(ops[fint].op) != *s)
		fint++;

	return (ops[fint].f);
}
