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
	listint_t *new, *temp, *prev;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (head == NULL || *head == NULL)
		return (NULL);

	temp = *head;
	i = 0;
	while (i < idx)
	{
		prev = temp;
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	new->n = n;
	new->next = prev->next;
	prev->next = new;
	return (new);
}
