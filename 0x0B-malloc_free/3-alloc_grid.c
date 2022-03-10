#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Entry point
 * @width: the width of the grid
 * @height: height of the grid
 * Return: Always agrid (Success)
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j, **agrid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	agrid = malloc(sizeof(*agrid) * height);

	if (agrid == NULL)
	{
		return (NULL);
	}

	while (i < height)
	{
		j = 0;
		*(agrid + i) = malloc(sizeof(int) * width);
		if (*(agrid + i) == NULL)
		{
			i = 0;
			while (i < height)
			{
				free(*(agrid + i));
				i++;
			}
			free(agrid);
			return (NULL);
		}
		while (j < width)
		{
			agrid[i][j] = 0;
			j++;
		}
		i++;
	}

	return (agrid);
}
