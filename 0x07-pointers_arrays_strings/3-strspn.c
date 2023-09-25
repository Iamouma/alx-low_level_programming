#include "main.h"
/**
 *  _strspn - gets the length of a prefix substring
 *  @s: string to be searched
 *  @accept: array to be measured
 *  @Return: number of bytes in 's' which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int h;
	int k;
	int l;

	h = 0;
	l = 0;

	while (s[h] != '\0')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (s[h] == accept[k])
			{
				l++;
				break;
			}
			k++;
		}
		if (accept[k] == '\0')
			break;
		h++;
	}
	return (l);
}
