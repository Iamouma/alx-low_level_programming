#include "main.h"
/**
 * create_file - creates a file.
 * @filename: pointer to the name of the file to create.
 * @text_content: pointer to a string to write to the file.
 * Return: -1 if the function fails or 1 on success.
 */
int create_file(const char *filename, char *text_content)
{
	int o;
	int w;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (o == -1)
		return (-1);

	w = write(o, text_content, _strlen(text_content));

	if (w == -1)
		return (-1);

	close(o);

	return (1);
}

/**
 * _strlen - Function that returns the length of string.
 * @s: pointer to the null-terminated byte string to be examined.
 * Return: The length of the null-terminated byte string s.
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

