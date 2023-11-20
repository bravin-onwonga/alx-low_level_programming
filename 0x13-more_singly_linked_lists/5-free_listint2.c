#include "lists.h"

/**
 * free_listint2 - frees a singly linked list
 *		and sets head to NULL
 *
 * @head: head node
 */

void free_listint2(listint_t **head)
{
	free_listint(head);
	*head = NULL;
}
