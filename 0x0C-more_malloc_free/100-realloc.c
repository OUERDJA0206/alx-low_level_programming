#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to previously allocated memory
* @old_size: size in bytes of the allocated space for ptr
* @new_size: size in bytes for the new memory block
* Return: pointer to the newly allocated memory, or NULL on failure
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr = ptr;
	unsigned int i, min_size;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	min_size = old_size < new_size ? old_size : new_size;
	for (i = 0; i < min_size; i++)
		new_ptr[i] = old_ptr[i];
	free(ptr);
	return (new_ptr);
}
