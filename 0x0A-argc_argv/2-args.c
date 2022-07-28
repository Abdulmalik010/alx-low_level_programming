#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints all arguments it receives.
 *
 * @argc: The number of command line arguments or the size of @argv array.
 * @argv: The array containing the program command line arguments
 * or the array of size @argc.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

		printf("%s\n", argv[i]);

	return (0);
}
