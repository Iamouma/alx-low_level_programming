#include <stdio.h>

/**
 * main - Prints the sentence followed by a new line to the standard error'
 * Return: 1 if successful
 */
int main(void)
{
	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
