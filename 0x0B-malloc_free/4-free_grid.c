#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free  2 dimensional grid previously created.
 * @grid: dimensional grid number 1
 * @height: dimensional grid number 2
 * Return: the 2 dimensional.
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
