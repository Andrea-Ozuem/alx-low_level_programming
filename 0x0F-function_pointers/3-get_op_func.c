#include "3-calc.h"
#include <stdlib.h>

/**
  *get_op_func -  selects the correct function to perform the operation asked by the user
  *@s: operator
  *Return: opeator funtion
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
	/*while ((s != ops[i++][0]) && (i < 5))
	if (i >= 5)*/
	while (i < 6)
	{
		if (s == ops[i].op)
			return (ops[i].f);
	}
	return (NULL);
}	
