#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 31)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
