#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2D grid previously
* created by alloc_grid function
* @grid: pointer to the 2D grid of integers
* @height: height of the grid
*
* This function frees the memory allocated
* by alloc_grid function.
* It loops through the rows and frees
* the memory for each row,
* then frees the memory for the array
* of pointers to the rows.
* Finally, it sets the pointer to the 2D grid to NULL.
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
