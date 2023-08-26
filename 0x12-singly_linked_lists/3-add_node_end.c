#include "lists.h"

/**
 * add_node_end - adds node at end of linked list
 *
 * @head: pointer to first node
 * @str: string
 * Return: address of new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
