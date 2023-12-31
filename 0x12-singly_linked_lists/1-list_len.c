#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		j++;
		h = h->next;
	}
	return (j);
}
