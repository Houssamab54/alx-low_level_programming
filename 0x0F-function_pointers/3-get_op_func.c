#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * get_op_func - operator given as a p
 *@s: hhhhhh
 *Return: A pointer to the function that corresponds to the op
 *a parameter, or NULL if the operator is invali
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
while (ops[i].op)
{
if (*(ops[i].op) == *s && *(s + 1) == '\0')
return (ops[i].f);
i++;
}
return (NULL);
}
