#include <stdlib.h>

/**
 * free_grid - function that  frees up a 2D array grid
 *		previously created by your alloc_grid function.
 * @grid: double pointer 2d grid
 * @height: height of grid
 *
 * Return: nothing
*/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
