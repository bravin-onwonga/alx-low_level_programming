#include "lists.h"

/**
 * sum_listint - calculate sum of elements
 *
 * @head: head node
 * Return: sum of elements; otherwise 0
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
