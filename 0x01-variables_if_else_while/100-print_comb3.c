#include <stdio.h>
/**
 * main - prints all possible combinations of two digits.
 * Return: 0 success
 */
int main(void)
{
	int k, l;

	for (k = 0; k < 9; k++)
	{
		for (l = k + 1; l < 10; l++)
		{
			putchar((k % 10) + '0');
			putchar((l % 10) + '0');

			if (k == 8 && l == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
