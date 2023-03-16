#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array, using malloc
 *
 * @nmemb: Number of elements to allocate
 * @size: Size in bytes of each element
 *
 * Return: A pointer to the allocated memory or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* Set memory to zero */
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
