#include "main.h"

/**
 * create_file - Function that creates a file.
 *
 * @filename: name of file to be created
 * @text_content: is a NULL terminated string to
 * write to the file.
 *
 * Return: 1 Success, -1 otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, file;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	while (text_content[i] != '\0')
	{
		i++;
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
	{
		return (-1);
	}

	write(file, text_content, i);

	return (1);
}
