#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that prints the binary
 * @n: number to print in binary
 *
 * Return: number in binary
 */

void print_binary(unsigned long int n)
{
	int i;

	for (i = 31; i >= 0; i--)
	{
		if (n >> i & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
