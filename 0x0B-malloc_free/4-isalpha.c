#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Makes the sum of two numbers
 * @c: First operand
 *
 * Return: The sum of the two parameters
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
