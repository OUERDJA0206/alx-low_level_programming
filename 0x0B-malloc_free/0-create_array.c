#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
* create_array - Entry point
*@size: size of the array
*@c: character
* Return: a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc(sizeof(char) * (size + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	array[size] = '\0';
	return (array);
}
