#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - creates 2D array of ints
* @width: width of 2D array
* @height: height of 2D array
* Return: pointer to 2D array or NULL if failure
*/
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	int **grille = (int **)malloc(height * sizeof(int *));

	if (grille == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < height; i++)
	{
		grille[i] = (int *)calloc(width, sizeof(int));
		if (grille[i] == NULL)
		{
			for (int j = 0; j < i; j++)
			{
				free(grille[j]);
			}
			free(grille);
			return (NULL);
		}
	}
	return (grille);
}
