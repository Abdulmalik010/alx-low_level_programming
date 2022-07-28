#include "main.h"
#include <stdlib.h>

/**
 * argstostr - A function that concatenates all the arguments of your program.
 *
 * @ac: Number of arguements passed to to the program.
 * @av: Array of pointers to the arguments.
 *
 * Return: NULL if ac = 0 or a pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, n = 0;

	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac ; i++)
	{
		for (j = 0; av[i][j]; j++)
			n++;
		n++;
	}
	n++;

	s = malloc(n * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';

	return (s);
}
