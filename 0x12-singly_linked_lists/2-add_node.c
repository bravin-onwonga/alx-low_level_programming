#include "lists.h"

/**
 * add_node - adds node at the beginning
 *
 * @head: head node
 * @str: str element of new node; to be duplicated
 * Return: address of new node; otherwise NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;
	return (*head);
}
