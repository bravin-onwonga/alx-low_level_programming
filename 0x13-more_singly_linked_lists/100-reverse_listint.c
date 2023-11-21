#include "lists.h"

/**
 * reverse_listint - reverses a singly linked list
 *
 * @head: head node
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *curr = *head;

	if (!head || !*head)
		return NULL;

	while (curr->next != NULL)
	{
		next = curr->next;
		curr->next = next->next;
		next->next = (*head);
		*head = next;
	}

	return (*head);
}
