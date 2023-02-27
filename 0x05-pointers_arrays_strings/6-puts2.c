#include "main.h"
#include <stdlib.h>

/**
 * puts2 - prints every other character of a string, starting with the first
 *         character, followed by a new line.
 * @str: a pointer to a string.
 *
 * Return: void.
 */
void puts2(char *str)
{
int i = 0;
if ( *str != '')
{
do
{
_putchar(*(str + i));
i += 2;
}
while ( *(str + i) != '\0' && *(str + i - 1) != '\0');
_putchar('\n');
}
