#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees the memory
 * @grid:the 2d array
 * @height:grids height
 * Return:null
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
