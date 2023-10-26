#include "main.h"
/**
 * set_bit - sets value of a bit to 1 at a given index.
 * @n: decimal number passed by a pointer.
 * @index: index position tochange.
 * Return: 1 successs, 0 if fails.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);

	for (i = 1; index > 0; index--, i *= 2)
		;
	*n += i;

	return (1);
}
