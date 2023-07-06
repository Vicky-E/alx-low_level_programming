#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - function pointer
 * @s: operator
 * Return: int
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

	while (i < 6 && ((*s) != ops[i].op))
	i++;
	if (i < 4)
	{
		ops[i].f(int a, int b);
	}
	printf("\n");
	return (0);
}
