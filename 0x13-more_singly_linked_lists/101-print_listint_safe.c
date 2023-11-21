#include "lists.h"

/**
 * print_listint_safe - prints a list
 *
 * @head: head node
 * Return: number of elements
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr, *cycle_check = head;
	void *ptr;
	size_t n = 0;

	if (!head)
	{
		exit(98);
	}

	curr = head;
	while (curr != NULL)
	{
		if (curr->next->next == cycle_check->next)
			curr = head;
		ptr = (void *)curr;
		printf("[%p] %d\n", ptr, curr->n);
		curr = curr->next;
		n++;
	}

	return (n);
}
