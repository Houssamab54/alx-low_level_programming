#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer value to be included in array
 * @max: maximum integer value to be included in array
 *
 * Return: pointer to newly created array or NULL if error
 */
int *array_range(int min, int max)
{
    int *arr, size, i;

    if (min > max)
        return (NULL);

    size = max - min + 1;
    arr = malloc(size * sizeof(int));
    if (arr == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        arr[i] = min++;

    return (arr);
}
