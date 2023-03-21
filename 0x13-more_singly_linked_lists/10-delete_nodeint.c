#include "lists.h"

/**
 * delete_nodeint_at_index- deletes node at index
 * @head: head of linked list
 * @index: index to delete at
 *
 * Return: 1 if it succeeded -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *tmp;
	unsigned int i;

	if (!head)
		return (-1);

	if (!*head)
		return (-1);

	prev = *head;
	tmp = prev->next;

	if (index == 0)
	{
		free(prev);
		*head = tmp;
		return (1);
	}

	for (i = 1; i < index; i++)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	prev->next = tmp->next;
	free(tmp);
	return (1);
}
