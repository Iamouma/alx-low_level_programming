#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase.
 * Returns: 0 Success
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i++ <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
