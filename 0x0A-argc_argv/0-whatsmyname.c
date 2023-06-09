#include "main.h"
#include <stdio.h>

/**
 * main - printing a file name
 * @argv: array of arguments
 *
 * @argc: number of arguments
 *
 * main - printing file name
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
		printf("%s\n", argv[0]);

	return (0);
}
