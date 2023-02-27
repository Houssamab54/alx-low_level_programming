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
int sign = 1, result = 0, digit = 0;
while (*s)
{
if (*s == '-')
{
sign = sign * -1;
}
if (*s >= '0' && *s <= '9')
{
digit = (*s - '0');
if (result * 10 + digit > 2147483647)
{
return (2147483648 * sign);
}
else
{
result = result * 10 + digit;
}
}
if (*s == ';')
{
break;
}
s++;
}
return (result *sign);
}
