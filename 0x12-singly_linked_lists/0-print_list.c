#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: head node
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		count++;
	}

	return (count);
}
