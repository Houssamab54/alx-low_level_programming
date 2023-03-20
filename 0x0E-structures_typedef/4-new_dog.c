#include <stdlib.h>
#include <string.h>
#include "main.h"
#include "dog.h"

/**
 * _strdup - returns a pointer located space in
 * which contains a copy of theiven as a paramet
 * @str: string to be d
 * Return: pointer to the du insufficient memory
 */
char *_strdup(char *str)
{
char *duplicate;
int length = 0, i;
if (str == NULL)
return (NULL);
while (str[length])
length++;
duplicate = malloc(sizeof(char) * (length + 1));
if (duplicate == NULL)
return (NULL);
for (i = 0; i <= length; i++)
duplicate[i] = str[i];
return (duplicate);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dunction fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
/* allocate memory for new dog */
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
/* make copies of name and owner */
new_dog->name = _strdup(name);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
new_dog->owner = _strdup(owner);
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
