#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	current = *head;

	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*head = NULL;
}
