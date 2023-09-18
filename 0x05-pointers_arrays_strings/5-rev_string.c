#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: 0 Success
 */
void rev_string(char *s)
{
	int j = 0, i = 0;
	char c;

	while (s[i++])
		j++;

	for (i = j - 1; i >= j / 2; i--)
	{
		c = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = c;
	}
}
