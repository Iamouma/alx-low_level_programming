#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase.
 * Return: Always 0
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);

}
