#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: the string to be converted.
 * Return: integer value of the converted string
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int i = 1;
	int j = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			i *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			j = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}

		if (j == 1)
		{
			break;
		}

		c++;
	}

	ni *= i;
	return (ni);
}
