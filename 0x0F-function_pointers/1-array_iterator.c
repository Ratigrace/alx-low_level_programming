#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array element
 * @array: array to print
 * @size: the number of elements in array
 * @action: pointer to print
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
