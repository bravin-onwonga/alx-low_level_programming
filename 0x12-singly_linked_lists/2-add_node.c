#include "lists.h"

/**
 * add_node - adds node at the beginning of a linked list
 *
 * @head: head node (points to first node)
 * @str: string (first element of node)
 * Return: pointer to new node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	*head = new;

	return (*head);
}
