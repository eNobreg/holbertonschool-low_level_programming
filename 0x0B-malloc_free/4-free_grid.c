#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - Frees a 2D array from memory
 * @grid: Array passed in
 * @height: Height of array
 * Return: Never
 */

void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
		free(grid[row]);
	free(grid);
}
