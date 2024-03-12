#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function that frees a 2 dim
 * @grid: 2 dim array of integ to be freed
 * @height: The height of grid
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
