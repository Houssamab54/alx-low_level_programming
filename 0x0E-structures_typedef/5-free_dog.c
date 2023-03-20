#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dogs
 * @d: Pointer to dog_t struct to be freed
 *
 * Description: This function frees the memory allocated
 *              to a dog_t struct, including its name.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;
if (d->name != NULL)
free(d->name);
free(d);
}
