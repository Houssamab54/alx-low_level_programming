#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if they can be considered
 * identical, otherwise returns 0. The second string can contain the special
 * character * which can replace any string (including an empty string).
 * @s1: the first string to compare.
 * @s2: the second string to compare.
 *
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s2 == '*')
{
if (*(s2 + 1) == '*')
{
return (wildcmp(s1, s2 + 1));
}
if (*s1 == '\0')
{
return (wildcmp(s1, s2 + 1));
}
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}
