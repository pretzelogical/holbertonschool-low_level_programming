#include "lists.h"

/**
 * get_dnodeint_at_index- returns the nth node of a dlistint_t list
 * @head: head of list
 * @index: index of node you want (starting from 0)
 *
 * Return: nth node of list else NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; i != index; i++)
	{
		head = head->next;
		if (!head)
			return (NULL);
	}
	return (head);
}
