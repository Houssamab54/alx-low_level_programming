#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: a pointer to a string.
 *
 * Return: void.
 */
void puts_half(char *str)
{
int len = 0, i;
while (*(str + len) != '\0')
{
len++;
}
i = len % 2 == 0 ? len / 2 : (len - 1) / 2 + 1;
while (*(str + i) != '\0')
{
_putchar(*(str + i));
i++;
}
_putchar('\n');
}
