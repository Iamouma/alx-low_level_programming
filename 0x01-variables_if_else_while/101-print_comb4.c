#include <stdio.h>
/**
 * main - print all possible different combinations of three digits.
 * Return: 0 success
 */
int main(void)
{
	int j, k, l;

	for (j = 0; j < 8; j++)
	{
		for (k = j + 1; k < 9; k++)
		{
			for (l = k + 1; l < 10; l++)
			{
				putchar((j % 10) + '0');
				putchar((k % 10) + '0');
				putchar((l % 10) + '0');

				if (j == 7 && k == 8 && l == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);

}
