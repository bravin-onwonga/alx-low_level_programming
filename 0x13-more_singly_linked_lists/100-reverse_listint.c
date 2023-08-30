#include "lists.h"

/**
 * reverse_listint - reverse linked list
 *
 * @head: The pointer to first node in linked lists
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *curr = *head;
	listint_t *prev = NULL;

	while (curr)
	{
		temp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = temp;
	}
	*head = prev;
	free(temp);
	return (*head);
}
