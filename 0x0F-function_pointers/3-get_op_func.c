#include "3-calc.h"

/**
 * get_op_func -  function returns a pointer to the function
 * that corresponds to the operator given as a parameter.
 * Example: get_op_func("+") should return a pointer to the
 * function op_add
 * @s: operator passed as arg to the prog
 *
 * Return: pointer to corresponding function in 3-op_functions.c
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"*", op_mul},
		{"-", op_sub},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
