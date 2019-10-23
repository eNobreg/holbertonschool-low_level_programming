#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - gets operation function
 * @s: String passed in
 * Return: Null or the operator
 */
int (*get_op_func(char *s))(int a, int b)
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

	while (i < 5)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
