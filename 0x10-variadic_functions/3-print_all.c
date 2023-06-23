#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int index = 0;

	char *str;

	va_list args;

	va_start(args, format);

	if (format)
	{

		while (format[index] != '\0')
		{
			switch (format[index])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;

				case 'i':
			 		printf("%d", va_arg(args, int));
					break;
		
				case 'f':
					printf("%f", va_arg(args, double));
					break;

				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s", str);
					break;

				default:
					index++;
					continue;
			}
		}
	}

		va_end(args);
		printf("\n");
}
