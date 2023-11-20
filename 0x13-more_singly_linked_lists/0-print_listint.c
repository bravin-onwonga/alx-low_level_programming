#include "lists.h"

/**
 * print_listint - prints all elements of a singly linked list
 *
 * @h: head node
 * Return: number of element printed
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
