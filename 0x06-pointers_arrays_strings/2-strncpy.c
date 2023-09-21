#include "main.h"
/**
 * _strncpy - copies a string of inputed number of bytes from src into dest.
 * @dest: the destination string.
 * @src: the source string
 * @n: number of bytes to copy from dest.
 * Return: pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

