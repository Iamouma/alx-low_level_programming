#include <stdio.h>
/**
 * main - prints the lowercase in reverse.
 * Return: Always 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
