#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *
 * @h: head node
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	if (h == NULL)
		return (NULL);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
