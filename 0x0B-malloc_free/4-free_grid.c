#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Entry point
 * @grid: grid checked
 * @height: grid height
 * Return: (Success)
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
