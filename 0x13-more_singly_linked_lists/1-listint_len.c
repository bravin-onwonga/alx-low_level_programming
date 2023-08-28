#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 *
 * @h: pointer to first node
 * Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	unsigned int num;

	num = 0;
	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
