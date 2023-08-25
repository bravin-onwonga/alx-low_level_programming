#include "lists.h"

/**
 * list_len - finds the length of a linked list
 *
 * @h: pointer to first node
 * Return: number of nodes.
*/

size_t list_len(const list_t *h)
{
	unsigned int n;
	list_t *temp;

	n = 0;
	temp = malloc(sizeof(list_t));

	*temp = *h;

	while (temp != NULL)
	{
		n++;
		temp = temp->next;
	}
	return (n);
}
