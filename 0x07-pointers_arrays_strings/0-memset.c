#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of memory to fill
 * Description: fills the first 'n' of the memory area pointed by 's' with 'b'
 * Return: Pointer to the memory area 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j;

	j = 0;
	while (n > 0)
	{
		s[j] = b;
		j++;
		n--;
	}

	return (s);
}
