#include <stdlib.h>
#include <string.h>
#include "dog.h"
#include "main.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    char *n, *m;

    /* allocate memory for new dog */
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    /* make copies of name and owner */
    _strcpy(new_dog->name,name);
    if (new_dog->name == NULL)
    {
        free(new_dog);
        return (NULL);
    }
    _strcpy(new_dog->owner,owner);
    if (new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog);
        return (NULL);
    }

    /* set age of new dog */
    new_dog->age = age;

    return (new_dog);
}
