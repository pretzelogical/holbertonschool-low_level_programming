#include "lists.h"

/**
 * add_dnodeint_end- adds a new node to the end of a dlisint_t
 * list
 * @head: head of list
 * @n: number to set n value of dlistint_t to
 *
 * Return: The address of the new element or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	new->next = NULL;
	if (!head || !*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;
	new->prev = tmp;

	return (new);
}
