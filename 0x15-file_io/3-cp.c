#include "main.h"


char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes
 *
 * @file: The name of the file
 *
 * Return: A pointer
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int v;

	v = close(fd);

	if (v == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file
 * @argc: The number of arguments
 * @argv: An array of pointers
 *
 * Return: 0 on success.
 *
 * Description: the argument count is incorrect - exit code 97.
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int fro, to, e, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	fro = open(argv[1], O_RDONLY);
	e = read(fro, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fro == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(to, buffer, e);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		e = read(fro, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (e > 0);

	free(buffer);
	close_file(fro);
	close_file(to);

	return (0);
}



