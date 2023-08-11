#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - allocates memory for an array and sets it to zero
* @nmemb: number of elements
* @size: size of each element
* Return: a pointer to the allocated memory, or NULL on failure or if
* nmemb or size is 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	p = malloc(total_size);
	if (!p)
		return (NULL);
	for (i = 0; i < total_size; i++)
		p[i] = 0;
	return (p);
}
