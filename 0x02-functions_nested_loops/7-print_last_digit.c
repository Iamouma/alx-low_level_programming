#include "main.h"
/**
 * print_last_digit - printd the last digit of a number.
 * @i: to find the last place of the digit'
 * Return: the value of the last digit.
 */
int print_last_digit(int i)
{
	if (i < 0)
		i = i * -1;
	_putchar((i % 10) + '0');
	return (i % 10);
}
