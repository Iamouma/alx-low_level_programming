#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: integer to swap
 * @b: integer to swap
 * Return: 0 Success
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

