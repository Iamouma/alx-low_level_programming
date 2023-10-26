#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: character string.
 * Return: converted decimal number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j;
	int count;

	if (b == NULL)
		return (0);

	for (count = 0; b[count]; count++)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
	}

	for (j = 1, i = 0, count--; count >= 0; count--, j *= 2)
	{
		if (b[count] == '1')
			i += j;
	}

	return (i);
}
