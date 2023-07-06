#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - a function that converts a bin num to an un int
 * @b: string containing the binary number
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base_ten;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		base_ten = (base_ten * 2) + (*b - '0');
			b++;
	}
	return (base_ten);
}
