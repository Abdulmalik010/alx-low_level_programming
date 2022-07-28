#include "main.h"

/**
 * _calloc - A function that allocates memory for an array, using malloc.
 *
 * @nmemb: The number of elements.
 * @size: The size bytes of the element.
 *
 * Return: A pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(nmemb * size);

	if (m == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		m[i] = 0;

	return (m);
}
