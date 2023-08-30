#include "lists.h"

/**
 * reverse_recursively - reverses a linked list recursively
 *
 * @prev: previous node
 * @curr: current node
 * Return: pointer to reversed list
*/
listint_t *reverse_recursively(listint_t *prev, listint_t *curr)
{
	listint_t *next;

	if (curr == NULL)
		return (prev);

	next = curr->next;
	curr->next = prev;

	return (reverse_recursively(curr, next));
}

/**
 * reverse_listint - reverse linked list
 *
 * @head: The pointer to first node in linked lists
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (NULL);

	*head = reverse_recursively(NULL, *head);

	return (*head);
}
