#include "main.h"

/**
 * _strncat - A function that concatenates two strings.
 *
 * @dest: Destination of the string.
 * @src: Source of the string.
 * @n: Length of the strings.
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
