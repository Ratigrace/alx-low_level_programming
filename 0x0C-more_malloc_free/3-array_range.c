#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: minimum array value
 * @max: maximum array value
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
