#include "lists.h"

dlistint_t *handle_idx_zero(dlistint_t **h, dlistint_t *new_node, int n);

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
	dlistint_t *new_node, *temp, *curr;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
		new_node = handle_idx_zero(h, new_node, n);

	else
	{
		curr = *h;
		while (i < idx - 1)
		{
			if (curr == NULL)
				return (NULL);
			curr = curr->next;
			i++;
		}

		new_node->n = n;

		temp = curr->next;
		curr->next = new_node;
		new_node->next = temp;
		new_node->prev = curr;
		if (temp)
			temp->prev = new_node;
	}

	return (new_node);
}

/**
 * handle_idx_zero - handles for when index is zero
 *
 * @h: address of head node
 * @new_node: node to create
 * @n: integer data for (n) in node
 * Return: address of new node
 */

dlistint_t *handle_idx_zero(dlistint_t **h, dlistint_t *new_node, int n)
{
	dlistint_t *temp;

	new_node->n = n;

	if (*h == NULL)
	{
		new_node->next = *h;
		*h = new_node;
		new_node->prev = NULL;
	}

	else if (*h != NULL)
	{
		temp = *h;
		temp->prev = new_node;
		new_node->next = *h;
		*h = new_node;
		new_node->prev = NULL;
	}

	return (new_node);
}
