#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - check if the absolute value of a number is 98
 * @array: the integer to check
 * @size: the integer to check
 * @cmp: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (cmp != NULL && size > 0 && array != NULL)
{
for (i = 0; i < (int) size; i++)
{
if ((*cmp)(*(array + i)) != 0)
{
return (i);
}
}
}
return (-1);
}
