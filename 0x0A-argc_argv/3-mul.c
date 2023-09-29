#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers passed to main or error.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 1 if error or 0 if successful.
 */
int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
