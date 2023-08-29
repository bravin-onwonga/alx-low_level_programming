#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 *
 * @head: pointer to first node
 * @index: index of node to delete
 * Return: 1 (success) ; otherwise -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	prev = *head;
	if (!index)
	{
		*head = prev->next;
		free(prev);
		return (1);
	}

	i = 0;
	while (i < index - 1)
	{
		if (prev == NULL)
			return (-1);
		prev = prev->next;
		i++;
	}
	if (prev->next == NULL || prev == NULL)
		return (-1);

	temp = prev->next->next;
	free(prev->next);
	prev->next = temp;
	return (1);
}
