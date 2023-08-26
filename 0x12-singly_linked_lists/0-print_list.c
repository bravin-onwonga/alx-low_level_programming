#include "lists.h"

/**
 * print_list - prints the elements of a linked list
 *
 * @h: pointer to first node
 * Return: number of nodes.
*/

size_t print_list(const list_t *h)
{
	unsigned int n;

	n = 0;
	if (h == NULL)
		return (n);

	while (h != NULL)
	{
		n++;
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}

	return (n);
}
