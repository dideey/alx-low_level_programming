#include <stddef.h>
#include "3-calc.h"
/**
 * get_op_func - decides on the function to call
 * Return:pointer to function
 * @s:the opperator input
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
	};

	while (i < 5)
	{
		if (*s == *(ops[i].op) && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
	}

	return (NULL);
}

