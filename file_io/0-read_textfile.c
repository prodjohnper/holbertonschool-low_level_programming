#include "main.h"

/**
 * read_textfile - Function that reads a
 * text file and prints it to the POSIX stdout.
 *
 * @filename: variable pointer.
 * @letters: letters size.
 *
 * Return: actual number of letters it could read
 * and print, 0 if filename is NULL or if write fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *txt;
	ssize_t file, r, w;

	txt = malloc(letters);
	if (txt == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(txt);
		return (0);
	}

	r = read(file, txt, letters);

	w = write(STDOUT_FILENO, txt, r);

	close(file);

	return (w);
}
