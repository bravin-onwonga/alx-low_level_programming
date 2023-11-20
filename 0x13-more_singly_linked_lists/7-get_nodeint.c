#include "lists.h"

/**
 * get_nodeint_at_index - get node at index
 *
 * @head: head node
 * @index: index of node to find
 * Return: address of node; otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		if (i == index)
		{
			return (temp);
		}
		temp = temp->next;
		i++;
	}

	return (NULL);
}
