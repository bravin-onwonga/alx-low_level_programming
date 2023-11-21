#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at an index
 *
 * @head: pointer to first node
 * @index: index at which to delete; starts from 0
 * Return: 1 (success); otherwise -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr, *temp;

	if (!head || !*head)
		return (-1);

	curr = *head;
	if (index == 0)
	{

		*head = curr->next;
		free(curr);
	}

	else
	{
		while (i < index)
		{
			if (curr == NULL)
				return (-1);
			temp = curr;
			curr = curr->next;
			i++;
		}
		temp->next = curr->next;
		free(curr);
	}
	return (1);
}
