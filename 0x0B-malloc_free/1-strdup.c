#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a new string which is a duplicate
 * @str: char
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int count = 0;
	int i;

	ptr = malloc((count + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	for (count = 0; count != ('\0'); count++)
	{
		ptr = malloc((count + 1) * sizeof(char));
	}

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
