#include "main.h"
/**
 * _strlen - It returns the length of a string
 * @s: length of string to count
 * Return: String length
 */
int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}

	return (i);
}
