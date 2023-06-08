#include "main.h"

/**
 * factorial - A function that prints the factorial
 * @n: number for factorial
 * Return: A factorial
 **/

int factorial(int n)
{

	if (n < 0)
	{
	return (-1);
	}
	if (n == 0)
	{
	return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
