#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index
 *
 * @head: head node
 * @idx: index to insert node
 * @n: element of new node
 * Return: address of new node; otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev, *curr, *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	curr = *head;
	while (curr != NULL)
	{
		if (i == idx)
		{
			new_node->n = n;
			new_node->next = curr;
			prev->next = new_node;

			return (new_node);
		}
		prev = curr;
		curr = curr->next;
		i++;
	}
	free(new_node);

	return (NULL);
}
