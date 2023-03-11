#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints the number of arguments passed to it
 * @argc: number of arguments
 * @argv: number of arrays
 *
 * Return: Alway 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv;/*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
