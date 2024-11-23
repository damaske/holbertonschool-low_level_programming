#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Allocates a 2D array of integers.
 * @width: The number of columns.
 * @height: The number of rows.
 *
 * Return: a pointer to the 2D array, or NULL if allocation fails.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **grid;
	
	if (width <= 0 || height <= 0)
		return (NULL);
	
	grid = malloc(height * sizeof(int *));
	
	if (grid == NULL)
		return (NULL);
	
	for (i = 0; i < height; i++)
	
	{
		grid[i] = malloc(width * sizeof(int));
		
		if (grid[i] == NULL;
				}
				for (j = 0; j < i; j++)
				free(grid[j]);
				free(grid);
				return (NULL);
				}
				}
				return (grid);
			}
