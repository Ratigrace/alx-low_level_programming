#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: string input 1
 * @s2: string input 2
 *
 * Return: s1 & s2 concat
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0;
	int j = 0;
	int len1 = 0;
	int len2 = 0;
	int total = (len1 + len2 + 1);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		len2++;
	}

	concat = malloc((total) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		concat[j + len1] = s2[j];
	}

	return (concat);
}
