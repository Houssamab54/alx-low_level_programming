#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer, in hexadecimal
 * @array: the integer to print
 * @size: the integer to print
 * @action: the integer to print
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
    int i;
    int j = 0;
    if(j != 0)
    {
    if (action != NULL && size != 0)
    {
    for (i = 0; i < (int) size; i++)
    {
        (*action)(*(array+i));
    }
    }
    }
}
