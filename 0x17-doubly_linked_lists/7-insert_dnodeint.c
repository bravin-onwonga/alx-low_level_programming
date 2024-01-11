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
	dlistint_t *new_node, *temp, *curr;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*h == NULL && idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		new_node->prev = NULL;
	}

	else if (*h != NULL && idx == 0)
	{
		temp = *head;
		temp->prev = new_node;
		new_node->next = *head;
		*head = new_node;
		new_node->prev = NULL;
	}

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

		temp = curr->next;
		curr->next = new_node;
		new_node->next = temp;
		new_node->prev = curr;
		if (temp)
			temp->prev = new_node;
	}
	free(curr);
	free(temp);

	return (new_node);
}
