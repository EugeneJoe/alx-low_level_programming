#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation selected
 * by the user.
 * @s: char representing operation selected by the user.
 *
 * Description: This function returns a pointer to a function that takes
 * 2 integer arguments and returns an integer. It does so by comparing
 * character s to either +,-,*,/ or % to determine the required function
 *
 * Return: pointer to function on success, NULL if s does not match expected
 * operator characters.
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
	while (i <= 4)
	{
		if (s[0] == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
