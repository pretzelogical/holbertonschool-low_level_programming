#include "lists.h"

/**
 * get_nodeint_at_index- gets node at index starting at 0
 * @head: head of the listint_t list
 * @index: index of the node
 *
 * Return: address of node else NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (index == 0)
		return (head);

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (!head)
			return (NULL);
	}
	return (head);
}
