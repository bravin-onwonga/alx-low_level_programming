#include "lists.h"

/**
 * add_nodeint_end - adds new element at the end of linked list
 *
 * @head: pointer to first node
 * @n: data for new element
 * Return: pointer to new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
