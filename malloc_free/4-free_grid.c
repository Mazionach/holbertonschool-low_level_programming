#include <stdlib.h>
#include <string.h>
/**
 * free_grid - free allocated grid
 * @height: height
 * @grid: the grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (!height)
		return;

	if (!grid)
		return;

	if (grid[0])
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
	free(grid);
}
