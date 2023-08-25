#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_list - prints all elements of a list_t.
 * @h: pointer.
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t j;

	for (j = 0; h; j++)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
	}
	return (j);
}
