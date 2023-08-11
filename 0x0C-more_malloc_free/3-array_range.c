#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_range - creates an array of integers
* @min: minimum value of the array
* @max: maximum value of the array
* Return: pointer to the newly created array, or NULL on failure or if
* min > max
*/
int *array_range(int min, int max)
{
	int *arr;
	int i, range_size;

	if (min > max)
		return (NULL);
	range_size = max - min + 1;
	arr = malloc(sizeof(int) * range_size);
	if (!arr)
		return (NULL);
	for (i = 0; i < range_size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
