#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - a fuction that frees a 2D Array
 * @grid: input
 * @height: height of array
 *
 * Return: void
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
