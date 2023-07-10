#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *	Otherwise - 1
 */

int create_file(const char *filename, char *text_content)
{
	int fileD, length;
	ssize_t bytwtn;

	if (filename == NULL)
		return (-1);

	fileD = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fileD == -1)
		return (-1);

	if (text_content != NULL)
	{
		char *p = text_content;
		length = 0;

		while (*p != '\0')
		{
			length++;
			p++;
		}
		bytwtn = write(fileD, text_content, length);
		close(fileD);

		if (bytwtn == -1)
			return (-1);
	}
	else
	{
		close(fileD);
	}
	return (1);
}


