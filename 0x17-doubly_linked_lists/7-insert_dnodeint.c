#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 *
 * @h: address of head node
 * @idx: index at which to add the node
 * @n: interger data (n) for new node
 * Return: pointer to new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp, *prev;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		if (h == NULL)
		{
			new_node->next = *h;
			*h = new_node;
			new_node->prev = NULL;
		}
		else
		{
			temp = *h;
			temp->prev = new_node;
			new_node->next = *h;
			*h = new_node;
			new_node->prev = NULL;
		}
	}

	else
	{
		temp = *h;
		while (i < idx)
		{
			if (temp == NULL)
				return (NULL);
			temp = temp->next;
			i++;
		}

		prev = temp->prev;
		temp->prev = new_node;
		new_node->next = temp;
		prev->next = new_node;
	}

	free(temp);
	free(prev);

	return (new_node);
}
