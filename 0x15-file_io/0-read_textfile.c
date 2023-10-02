#include "main.h"

/**
 * read_textfile- Read text file
 * @filename: text file
 * @letters: number of letters
 * Return: 1 seccues
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t fo;
	ssize_t wr;
	ssize_t t;

	fo = open(filename, O_RDONLY);
	if (fo == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	t = read(fo, fo, letters);
	wr = write(STDOUT_FILENO, b, t);

	free(b);
	close(fo);
	return (wr);
}
