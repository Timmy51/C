#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees the 2D grid
 * @grid: pointer to pointer
 * @height: an integer parameter
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
