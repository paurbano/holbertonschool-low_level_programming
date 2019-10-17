#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: ancho
 * @height: alto
 * Description: frees a 2 dimensional grid
 * Return: no return
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0 ; i < height ; i++)
{
free(grid[i]);
}
free(grid);
}
