#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - function to display two dimensional grid
 * @width: integer value
 * @height: integer value
 * Return: double integer pointer
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int hgt = 0, wdt;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);
	while (hgt < height)
	{
		grid[hgt] = malloc(sizeof(int) * width);

		if (grid[hgt] == NULL)
		{
			while (hgt >= 0)
				free(grid[hgt]);
			hgt--;
			free(grid);
			return (NULL);
		}
		hgt++;
	}
	hgt = 0;

	while (hgt < height)
	{
		wdt = 0;
		while (wdt < width)
		{
			grid[hgt][wdt] = 0;
			wdt++;
		}
		hgt++;
	}
	return (grid);
}
