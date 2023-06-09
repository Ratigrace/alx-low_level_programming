#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints the number or arguments
 * @argv: number of arguments
 * @argc: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (*argv)
		printf("%d\n", argc - 1);

	return (0);
}
