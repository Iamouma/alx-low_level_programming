#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: array to copy into.
 * @src: array to copy from.
 * @n: number of elements to copy
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *final;

	final = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (final);
}
