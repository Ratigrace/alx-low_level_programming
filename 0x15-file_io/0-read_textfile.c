#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file
 * @filename: text file being read
 * @letters: number of letters to be read
 *
 * Return: actual number of bytes read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t btrd;
	ssize_t btwrt;
	int ls;

	ls = open(filename, O_RDONLY);
	if (ls == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	btrd = read(ls, buffer, letters);

	btwrt = write(STDOUT_FILENO, buffer, btrd);

	free(buffer);
	close(ls);
	return (btwrt);
}
