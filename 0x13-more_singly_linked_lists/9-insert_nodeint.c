#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at an index
 *
 * @head: pointer to first node
 * @idx: index
 * @n: data for new node
 * Return: address of new node (success); otherwise NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL || *head == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}

	temp = *head;
	i = 0;
	while (i < idx)
	{
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
		temp = temp->next;
		i++;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
