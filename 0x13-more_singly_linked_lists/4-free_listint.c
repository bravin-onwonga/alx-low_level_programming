#include "lists.h"

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
