#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: array string
 * @c: char to be located
 * Return: pointer to the first of the character 'c' or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
