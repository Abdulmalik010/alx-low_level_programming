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
	int a, n = 0, i, t;
	int c[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	if (a <= 0)
	{
		puts("0");
		return (1);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			t = a / c[i];
			a -= t * c[i];
			n += t;
			if (a == 0)
			break;
		}
	}
	printf("%d\n", n);
	return (0);
}
