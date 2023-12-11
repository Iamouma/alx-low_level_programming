#include "main.h"
/**
 * _strcpy - copies the string
 * @dest: points to buffer
 * @src: source value
 * Return: 0 Succcess
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	dest[j++] = '\0';

	return (dest);
}
