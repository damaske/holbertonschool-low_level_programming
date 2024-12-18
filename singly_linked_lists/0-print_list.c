#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints all elements of a list_t linked list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h  = h->next;
		nodes++;
	}
	return (nodes);
}
