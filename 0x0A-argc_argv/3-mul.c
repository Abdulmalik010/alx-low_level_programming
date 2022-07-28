#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers.
 *
 * @argc: The number of command line arguments or the size of @argv array.
 * @argv: The array containing the program command line arguments
 * or the array of size @argc.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int x = 1, y = 2, z = 3;

	if (argc != z)
	{
		printf("Error\n");

		return (1);
	}
	printf("%d\n", atoi(argv[x]) * atoi(argv[y]));

	return (0);
}
