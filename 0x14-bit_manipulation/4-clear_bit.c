#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0at a given index.
 * @n: pointer to decimal number to change.
 * @index: index position to change.
 * Return: 1 successful, -1 fails.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int count;

	if (index > 64)
		return (-1);
	count = index;
	for (i = 1; count > 0; i *= 2, count--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
