#include "main.h"
/**
 * create_file - creates a file.
 * @filename: pointer to the name of the file to create.
 * @text_content: pointer to a string to write to the file.
 * Return: -1 if the function fails or 1 on success.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, count = 0;

	if (!filename)
		return (-1);

	if (!text_content)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	w = write(o, text_content, count);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
