#include "main.h"

/**
 * *array_range - A function that  creates an array of integers.
 *
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: A pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *a, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	a = malloc(sizeof(int) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = min++;

	return (a);
}
