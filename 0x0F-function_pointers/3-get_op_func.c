#include "3-calc.h"
/**
 * get_op_func - get operator functionm
 *
 * @s: The operator
 *
 * Return: a pointer to the function
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

	while (i < 5)
	{
	if (s && ps[i].op[0] == s[0] && != s[1})
		return (ops[i].f);
	i++;
	}
	return (NULL);
}
