#include "main.h"
#include <stdbool.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @s: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */

char *cap_string(char *s)
{
	char *p = s;
	bool new_word = true;

	while (*p)
	{
		if (new_word && (*p >= 'a' && *p <= 'z'))
		{
			*p -= 'a' - 'A';
		}

		if (*p == ' ' || *p == '\t' || *p == '\n' ||
		    *p == ',' || *p == ';' || *p == '.' ||
		    *p == '!' || *p == '?' || *p == '"' ||
		    *p == '(' || *p == ')' || *p == '{' || *p == '}')
		{
			new_word = true;
		}
		else
		{
			new_word = false;
		}

		p++;
	}

	return s;
}
