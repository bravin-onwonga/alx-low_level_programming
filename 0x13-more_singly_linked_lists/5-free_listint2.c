#include "lists.h"

/**
 * free_listint2 - frees memory held by singly linked list
 *			and intializes the header to NULL
 *
 * @head: pointer to first node.
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return;

	current = *head;

	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*head = NULL; /* Update head pointer to NULL*/
}
