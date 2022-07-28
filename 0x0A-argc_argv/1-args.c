#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints the number of arguments passed into it.
 *
 * @argc: The number of command line arguments or the size of @argv array.
 * @argv: The array containing the program command line arguments
 * or the array of size @argc.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
