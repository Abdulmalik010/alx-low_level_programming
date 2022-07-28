#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that adds positive numbers.
 *
 * @argc: The number of command line arguments or the size of @argv array.
 * @argv: The array containing the program command line arguments
 * or the array of size @argc.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
