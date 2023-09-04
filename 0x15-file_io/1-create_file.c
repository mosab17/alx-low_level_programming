#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer
 * @text_content: A pointer to a string
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fo, wr, le = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (le = 0; text_content[le];)
			le++;
	}

	fo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fo, text_content, le);

	if (fo == -1 || w == -1)
		return (-1);

	close(fo);

	return (1);
}

