#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - searches for an integer.
 * @s: Symbol
 * Description: executes a function given as a parameter on an array.
 * Return: integer
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
if (strcmp(s, ops[i].op) == 0)
return (ops[i].f);
i++;
}

return (NULL);
}
