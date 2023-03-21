#include "lists.h"

/**
 * add_nodeint_end- adds a new node at the end of a listint_t
 * list
 * @head: head of list
 * @n: number to set in node
 *
 * Return: the address of the new element or NULL if fail
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;

	tmp = *head;
	if (!*head)
	{
		*head = new;
		return (*head);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
