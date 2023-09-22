#include "lists.h"

/**
 * print_listint_safe - prints all elements of a linked list
 *
 * @head: pointer to first node
 * Return: size of linked list
*/

size_t print_listint_safe(const listint_t *head)
{
	unsigned int count;

	if (head == NULL)
		exit (98);

	count = 0;
	while (head)
	{
		printf("[%p] %d\n", head, head->n);
		count++;
		head = head->next;
	}
	return (count);

}
