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
	int **grille = NULL;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grille = (int **)malloc(height * sizeof(int *));
	if (grille == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grille[i] = malloc(sizeof(int) * width);
		if (grille[i] == NULL)
		{
			for (--i; i >= 0; i--)
			{
				free(grille[i]);
			}
			free(grille);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grille[i][j] = 0;
	return (grille);
}
