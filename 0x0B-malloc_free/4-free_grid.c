#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: 2d Array
 * @height: number of rows
 * Return: void
 **/
void free_grid(int **grid, int height)
{
int row = 0;
while (row < height)
{
free(grid[row]);
row++;
}
}
