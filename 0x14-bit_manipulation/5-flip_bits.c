#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns the number of bits you would need to flip.
 * @n: first number.
 * @m: second number.
 * Return: number of bits that was needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int count;

	i = n ^ m;
	count = 0;

	while (i)
	{
		count++;
		i &= (i - 1);
	}

	return (count);
}
