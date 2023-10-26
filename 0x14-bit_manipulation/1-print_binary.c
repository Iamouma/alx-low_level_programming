#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number.
 * @n: decimal integer to be printed as binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;
	int count;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (i = n, count = 0; (i >>= 1) > 0; count++)
		;

	for (; count >= 0; count--)
	{
		if ((n >> count) & 1)
			printf("1");
		else
			printf("0");
	}
}
