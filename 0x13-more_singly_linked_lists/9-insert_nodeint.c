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
	listint_t *curr, *new_node;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	curr = *head;
	while (i < idx)
	{
		if (curr == NULL)
			return (NULL);
		curr = curr->next;
		i++;
	}
	new_node->next = curr->next;
	curr->next = new_node;

	return (new_node);
}
