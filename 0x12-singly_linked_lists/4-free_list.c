#include "lists.h"

/**
 * free_list - frees memory held by a singly linked list
 *
 * @head: pointer to first node.
*/
void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
