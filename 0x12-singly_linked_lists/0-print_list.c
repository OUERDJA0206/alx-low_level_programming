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

	j = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		j++;
		h = h->next;
	}
	return (j);
}
