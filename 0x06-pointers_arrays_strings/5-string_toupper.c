#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @s: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */

char *string_toupper(char *s)
{
	char *p = s;

	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p -= 'a' - 'A';
		}

		p++;
	}

	return s;
}
