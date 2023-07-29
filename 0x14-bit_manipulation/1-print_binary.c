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
	int flag = 0;
	unsigned long int move = 1;

	move <<= 63;
	if (n == 0)
		_putchar('0');

	while (move > 0)
	{
		if ((n & move) == 0 && flag == 1)
			_putchar('0');
		if ((n & move) != 0)
		{
			_putchar('1');
			flag = 1;
		}

		move = move >> 1;
	}
}
