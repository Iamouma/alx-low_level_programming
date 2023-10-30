#include "main.h"
/**
 * append_text_to_file - appends text at the end of a line.
 * @filename: pointer to the name of the file.
 * @text_content: - string to add to the end of the file.
 * Return: 1 success, -1 if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o;
	int w;

	if (!filename)
		return (-1);

	o = open(filename, O_WRONLY | O_APPEND);

	if (text_content)
	{
		w = write(o, text_content, _strlen(text_content));

		if (w == -1)
			return (-1);
	}

	close(o);

	return (1);
}

/**
 * _strlen - Function that returns the length of string.
 * @s: pointer to the null-terminated byte string to be examined.
 *
 * Return: The length of the null-terminated byte string s.
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
