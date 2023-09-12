#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2.
 * Return: 0 Success
 */
int main(void)
{
	int count;
	unsigned long i, j, k;
	unsigned long f, g, h, carry;

	count = 0;
	i = 0;
	j = 0;
	for (count = 1; count <= 91; count++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("lu, ", k);
	}
	f = i % 1000;
	i = i / 1000;
	g = j % 1000;
	j = j / 1000;
	while (count <= 98)
	{
		carry = (f + g) / 1000;
		h = (f + g) - carry * 1000;
		k = (i + j) + carry;
		f = g;
		g = h;
		i = j;
		j = k;
		if (p >= 100)
			printf("%lu%lu", k, h);
		else
			printf("%lu0%lu", k, h);
		if (count != 98)
			printf(", ");
		count++;
	}
	putchar('\n');
	return (0);
}
