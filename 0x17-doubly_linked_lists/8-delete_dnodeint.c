#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 *			of a dlistint_t linked list.
 * @head: address of head node
 * @index: index at which to delete node
 * Return: 1 success; otherwise -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr, *temp;
	unsigned int i = 0;

	if (!head || !(*head))
		return (-1);

	curr = *head;

	if (index == 0)
	{
		temp = curr->next;
		*head = temp;
		if (temp)
			temp->prev = NULL;
		free(curr);
	}

	else
	{
		while (i < index - 1)
		{
			if (curr == NULL)
				return (-1);
			curr = curr->next;
			i++;
		}
		temp = curr->next;
		curr->next = temp->next;
		temp->next->prev = curr;
		free(temp);
	}

	return (1);
}
