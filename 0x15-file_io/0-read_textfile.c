#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - readsa text file and prints it to the POSIX stdoutput.
 * @filename: pointer to the name of the file.
 * @letters: number of letters the function should readand print.
 * Return: 0 ithe function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t w, len;
	int count;
	char *buffer;

	if (!filename)
		return (0);

	count = open(filename, O_RDONLY);

	if (count == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	len = read(count, buffer, letters);
	buffer[len] = '\0';

	w = write(STDOUT_FILENO, buffer, len);

	close(count);
	free(buffer);

	return (w);
}
