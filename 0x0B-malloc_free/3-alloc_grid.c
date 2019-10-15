#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Makes a two dimensional array
 * @width: Width
 * @height: Height
 * Return: Always zero
 */
int **alloc_grid(int width, int height)
{
	int col, row;
	int **temp;

	if (width <= 0 || height <= 0)
		return (NULL);

	temp = malloc(height * sizeof(int *));
	if (temp == NULL)
		return (NULL);

	for (col = 0; col < height; col++)
	{
		temp[col] = malloc(width * sizeof(int));
		if (temp[col] == NULL)
		{
			for (row = 0; row < col; row++)
				free(temp[row]);
			free(temp);
			return (NULL);
		}
		for (row = 0; row < width; row++)
			temp[col][row] = 0;
	}
	return (temp);


}
