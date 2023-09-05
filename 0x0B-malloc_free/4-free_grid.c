#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees the 2 dimensional array
 * @grid: of array
 * @height: of array
 * Return: nothing
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
