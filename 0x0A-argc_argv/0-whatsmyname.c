#include "main.h"
#include <stdio.h>
/**
 * main - prints its name.
 * @argc: contains the number of arguments passed to the program.
 * @argv: one dimensional array of argument vector.
 * Return: 0 Success.
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
