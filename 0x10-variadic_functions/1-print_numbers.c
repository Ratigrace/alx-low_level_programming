#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: printed number/ string
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int nums = va_arg(args, int);

		printf("%d", nums);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

		printf("\n");

		va_end(args);
}

