#include "lists.h"


/**
 * sum_listint- returns the sum of all the data
 * in a linked list
 * @head: head of linked list
 *
 * Return: sum else 0
*/
int sum_listint(listint_t *head)
{
	int sum;

	if (!head)
		return (0);

	sum = 0;
	while (head->next)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}
