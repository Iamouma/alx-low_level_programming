#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a duplicate string.
 * @str: sring to duplicate.
 * Return: NULL if string is null, or duplicated string on success.
 */
char *_strdup(char *str)
{
	int i, j = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		j++;

	p = malloc(sizeof(char) * (j + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		p[i] = str[i];

	p[j] = '\0';

	return (p);
}
