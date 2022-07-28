#include "main.h"

/**
 * _memcpy - A function that copies memory area.
 *
 * @n: The number of bytes to be copied.
 * @src: The source memory area.
 * @dest:The destination memory area.
 *
 * Return: A pointer to the destination '*dest'.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];

		i++;
	}

	return (dest);
}
