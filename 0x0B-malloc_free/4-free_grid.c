#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - function that frees up memory
 * @grid: double pointer integer
 * @height: integer value
 * Return: always return nothing
 */

void free_grid(int **grid, int height)
{
	int count = 0;

	while (count < height)
	{
		free(grid[count]);
		count++;
	}
	free(grid);
}
