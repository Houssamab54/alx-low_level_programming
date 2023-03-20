#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a structure representing a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: This structure, and owner.
 */

typedef struct dog
{
char *name;
float age;
char *owner;
}
dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

/**
 * struct dog - a struct representing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This struct represents a dog with a name, age, and owner.
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner);

void print_dog(dog_t *d);

#endif /* DOG_H */
