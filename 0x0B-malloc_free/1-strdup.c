#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 *
 * @str: The string to be copied.
 *
 * Return: NULL if str = NULL or return a pointer to the duplicated string on
 * success, or NULL if insufficient memory was available.
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *dup;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;
		i++;

	dup = malloc(i * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		dup[j] = str[j];
	}
	return (dup);
}
