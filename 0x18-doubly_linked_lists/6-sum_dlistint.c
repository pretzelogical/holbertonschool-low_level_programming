#include "lists.h"

/**
 * sum_dlistint- returns the sum of all the data in a dlistint_t
 * @head: head of list
 *
 * Return: sum of data else 0
*/
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (!head)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
