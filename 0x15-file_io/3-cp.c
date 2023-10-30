#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_buffer - function that allocates 1024 bytes for a buffer.
 * @file: pointer to the file buffer is storing chars for.
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - function that closes file descriptors.
 * @file_descriptor: file descriptor to be closed.
 * Return: No return.
 */
void close_file(int file_descriptor)
{
	int c;

	c = close(file_descriptor);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another file.
 * @argc: pointer to the number of arguments supplied to the program.
 * @argv: an array of character pointers listing all the arguments.
 * Return: 0 success.
 */
int main(int argc, char *argv[])
{
	int count, len, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	count = open(argv[1], O_RDONLY);
	r = read(count, buffer, 1024);

	len = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (count == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(len, buffer, r);
		if (len == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(count, buffer, 1024);
		len = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_file(count);
	close_file(len);
	return (0);
}

