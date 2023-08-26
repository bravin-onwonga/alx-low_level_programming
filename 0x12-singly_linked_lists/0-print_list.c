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

	n = 0;
	temp = malloc(sizeof(list_t));

	if (h == NULL)
		return (n);

	/* set temp to first node*/
	*temp = *h;

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
