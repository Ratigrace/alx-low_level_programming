#include "main.h"
#include <stdio.h>

/**
 * flip_bits - a function that returns the number of flip bits
 * @n: unsigned int
 * @m: unsigned int
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num = 0;

	unsigned long int res;
	unsigned long int exor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		res = exor >> i;

		if (res & 1)
			num++;
	}
	return (num);
}
