#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct dog to print
 *
 * Description: This function takes a pointer to a struct dog and prints out
 * its name, age, and owner, or "(nil)" if any of these fields are NULL.
 */

void print_dog(struct dog *d)
{
if (d == NULL)
return;
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
