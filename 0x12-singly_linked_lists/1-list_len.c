#include "lists.h"

/**
 * list_len - finds the length of a linked list
 *
 * @h: pointer to first node
 * Return: number of nodes.
*/

size_t list_len(const list_t *h)
{
	unsigned long n = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (h == NULL)
		return (n);

	*temp = *h;

	while (temp != NULL)
	{
		n++;
		temp = temp->next;
	}
	return (n);
}
