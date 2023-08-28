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
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL && idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}

	temp = *head;

	i = 0;
	while (i < (idx - 1))
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}

	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (new);
}
