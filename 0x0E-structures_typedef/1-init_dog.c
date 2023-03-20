#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include "main.h"

/**
 * init_dog - initializes a struct dog
 * @d: pointer to the struct dog to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This function takes a pointer to a struct dog and initializes
 * its name, age, and owner with the values provided as arguments.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
