#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 *
 * @s: A pointer to the string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int sign = 1, result = 0;
while (*s)
{
if (*s == '-')
{
sign = sign * -1;
}
if (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s - '0');
}
if (*s == ';')
{
break;
}
s++;
}
return (result * sign);
}
