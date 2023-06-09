#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that adds positive numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, res = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			res = res + atoi(argv[i]);
		}

	}

	printf("%d\n", res);

	return (0);
}

