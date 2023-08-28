#include "lists.h"

/**
 * get_nodeint_at_index - finds node at index.
 *
 * @head: pointer to first node
 * @index: index of node to be found
 * Return: node's address; otherwise NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	i = 0;
	temp = head;
	while (i < index)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	return (temp);
}
