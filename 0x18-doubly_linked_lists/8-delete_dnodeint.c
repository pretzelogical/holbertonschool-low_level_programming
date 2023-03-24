#include "lists.h"

/**
 * delete_dnodeint_at_index- deletes the node at index of a dlistint_t
 * linked list
 * @head: head of list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *del;

	if (!head || !*head)
		return (-1);

	del = *head;
	for (i = 0; i != index; i++)
	{
		if (!del)
			return (-1);
		del = del->next;
	}


	if (del == *head)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		del->prev->next = del->next;
		if (del->next)
			del->next->prev = del->prev;
	}

	free(del);
	return (1);
}
