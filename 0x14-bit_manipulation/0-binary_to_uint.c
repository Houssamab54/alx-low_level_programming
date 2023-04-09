#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number string to an unsigned int
 * @b: pointer to the binary number string
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 *         string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int power = 1;

	if (b == NULL)
		return (0);

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			power *= 2;
		else if (b[i] == '1')
		{
			result += power;
			power *= 2;
		}
		else
			return (0);
	}

	return (result);
}