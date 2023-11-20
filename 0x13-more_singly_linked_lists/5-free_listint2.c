#include "lists.h"

void free_listint(listint_t *head);

/**
 * free_listint2 - frees a singly linked list
 *		and sets head to NULL
 *
 * @head: head node
 */

void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}

/**
 * free_listint - frees a singly linked list
 * @head: head node
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
