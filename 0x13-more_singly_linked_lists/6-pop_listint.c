#include "lists.h"

/**
 * pop_listint - deletes first node
 *
 * @head: head node
 * Return: address of new first node
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	temp = temp->next;
	free(*head);
	*head = temp;

	return (n);
}
