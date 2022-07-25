#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d integer grid previously created by alloc_grid
 * @grid: pointer to array of ints
 * @heights: number of rows
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
