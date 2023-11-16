#include "lists.h"

/**
 * list_len - calculates the no of elements in a linked list
 *
 * @h: head node
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
