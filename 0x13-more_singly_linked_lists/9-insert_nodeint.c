#include "lists.h"

/**
 * insert_nodeint_at_index- inserts a new node at position idx starting
 * at 0
 * @head: head of listint_t list
 * @idx: index of new node
 * @n: number to add into new node
 *
 * Return: Address of new node or NULL if fail
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev;
	listint_t *next;
	listint_t *new;
	unsigned int i;

	if (!*head)
		return (NULL);

	if (!head)
		return (NULL);

	prev = *head;
	next = prev->next;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = prev;
		*head = new;
		return (new);
	}

	for (i = 1; i < idx; i++)
	{
		prev = next;
		next = next->next;
	}

	prev->next = new;
	new->next = next;
	return (new);
}
