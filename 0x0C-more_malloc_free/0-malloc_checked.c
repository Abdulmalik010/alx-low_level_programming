#include "main.h"

/**
 * malloc_checked - A function that allocates memory using malloc.
 *
 * @b: The allocated number of bytes.
 *
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);

}
