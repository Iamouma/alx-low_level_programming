#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string to be concatenated upon.
 * @s2: string to be concatenated to s1.
 * Return: NULL on failure, or pointer to the newly allocated space.
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		k++;

	p = malloc(sizeof(char) * k++);

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		p[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		p[j++] = s2[i];

	return (p);
}
