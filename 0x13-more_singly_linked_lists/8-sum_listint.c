#include "lists.h"

/**
 * sum_listint - adds all data in linked list
 *
 * @head: pointer to first node
 * Return: sum of data
*/

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
