#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to evaluate.
 * @index: index starting from 0of the bit.
 * Return: value of bit at index or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);

	i = n >> index;

	return (i & 1);
}
