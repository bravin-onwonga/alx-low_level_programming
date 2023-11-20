#include "lists.h"

/**
 * free_listint2 - frees a singly linked list
 *		and sets head to NULL
 *
 * @head: head node
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *curr;

	curr = *head;
	while (curr != NULL)
	{
		temp = curr->next;
		free(curr);
		curr = temp;
	}
	free(temp);
	*head = NULL;
}
