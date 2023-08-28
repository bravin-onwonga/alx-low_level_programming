#include "lists.h"

/**
 * pop_listint - pops the first node of a singly linked list
 *
 * @head: pointer to first node
 * Return: data of the deleted node
*/

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	temp = *head;
	free(temp);
	*head = (*head)->next;

	return (n);
}
