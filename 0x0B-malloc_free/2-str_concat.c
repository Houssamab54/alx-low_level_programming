#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointery containing concatenated strings
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int s1_length = 0, s2_length = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_length])
		s1_length++;
	while (s2[s2_length])
		s2_length++;

	concatenated = malloc(sizeof(char) * (s1_length + s2_length + 1));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < s1_length; i++)
		concatenated[i] = s1[i];
	for (j = 0; j <= s2_length; j++)
		concatenated[i + j] = s2[j];

	return (concatenated);
}
