#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp, *prev;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	temp = *h;
	while (i < idx)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}

	new_node->n = n;

	prev = temp->prev;
	temp->prev = new_node;
	new_node->next = temp;
	prev->next = new_node;

	return (new_node);
}
