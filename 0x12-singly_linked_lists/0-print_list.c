#include "lists.h"

/**
 * print_list - prints the elements of a linked list
 *
 * @h: pointer to first node
 * Return: number of nodes.
*/

size_t print_list(const list_t *h)
{
	unsigned int n;
	list_t *temp;

	temp = malloc(sizeof(list_t));

	*temp = *h;

	n = 0;
	while (temp != NULL)
	{
		n++;
		if (temp->str != NULL)
			printf("[%d] %s\n", temp->len, temp->str);
		else
			printf("[0] (nil)\n");
		temp = temp->next;
	}
	return (n);
}
