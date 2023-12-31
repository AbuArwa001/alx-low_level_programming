#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perform
 *               the operation aske by the user
 * @s: operator passed by the user
 * Return: returns a pointer to the function foun
 *         returns NULL if not found
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
	int i;

	i = 0;

	while (ops[i].op != NULL)
	{

		if (ops[i].op[0] == *s && *(s + 1) == '\0')
		{
			return (ops[i].f);
		}

		i++;
	}

	return (NULL);
}
