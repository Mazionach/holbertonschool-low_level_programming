#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
 * get_op_func - returns correct function of operator
 * @s: operator char
 * Return: the function pointer
 */
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
	int i = 0;

	while (ops[i].s != NULL)
	{
		if (!strcmp(s,ops[i].s))
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
