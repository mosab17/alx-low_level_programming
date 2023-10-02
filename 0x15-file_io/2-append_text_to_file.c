#include "main.h"

/**
 * append_text_to_file - Appends text
 * @filename: A pointer
 * @text_content: The string to add
 *
 * Return: If the function fails or filename is NULL - -1.
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, wr, le = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (le = 0; text_content[le];)
			le++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	wr = write(a, text_content, len);

	if (a == -1 || wr == -1)
		return (-1);

	close(a);

	return (1);
}

