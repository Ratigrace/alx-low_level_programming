#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	char c;
	int i;
	float f;
	char *s;
	int index = 0;

	while (format[index] != '\0')
	{
		if (format[index] == 'c')
		{
			c = (char)va_arg(args, int);
			printf("%c", c);
		}
		else if (format[index] == 'i')
		{
			 i = va_arg(args, int);
			 printf("%d", i);
		}
		else if (format[index] == 'f')
		{
			f = (float)va_arg(args, double);
			printf("%f", f);
		}
		else if (format[index] == 's')
		{
			s = va_arg(args, char*);
			if (s != NULL)
				printf("%s", s);
			else
				printf("(nil)");
		}

		index++;

		va_end(args);
		printf("\n");
	}
}
