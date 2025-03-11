#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: int
 * @height: int
 *
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);

}
