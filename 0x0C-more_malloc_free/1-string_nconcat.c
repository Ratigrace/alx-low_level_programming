#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, len1, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	for (j = 0; s2[j] != '\0'; j++)
		len2++;

	if (n >= len2)
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	else
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!ptr)
		return (NULL);

	for (i = 0; i <= j; i++)
	if (i <= len1)
		ptr[i] = s1[i];
	else
		ptr[i] = s2[i - len1];

	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr[j + len1] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
