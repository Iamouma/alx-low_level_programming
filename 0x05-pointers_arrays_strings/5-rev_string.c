#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: 0 Success
 */
void rev_string(char *s)
{
	int j, k, l;
	char *a, i;

	a = s;

	while (s[k] != '\0')
	{
		k++;
	}

	for (l = 1; l < k; l++)
	{
		a++;
	}

	for (j = 0; j < (k / 2); j++)
	{
		i = s[j];
		s[j] = *a;
		*a = i;
		a--;
	}
}
