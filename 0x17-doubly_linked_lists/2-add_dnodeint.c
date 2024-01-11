#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: head node
 * @n: integer element for the new node
 * Return: address of new node; otherwise NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = head;
		*head = new_node;
	}

	else
	{
		new_node->next = *head;
		*head = new_node;
		new_node->prev = *head;
	}

	return (*head);
}
