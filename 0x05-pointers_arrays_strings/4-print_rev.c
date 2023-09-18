#include "main.h"
/**
 * print_rev - prints a string.
 * @s: string to print.
 * Return: 0 Success
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
