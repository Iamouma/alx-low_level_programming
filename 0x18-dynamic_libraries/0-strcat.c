#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: a pointer to the destination string.
 * @src: a pointer to the source string.
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
