#include "lists.h"

/**
 * add_dnodeint- adds a new node at the beginning of a dlistint_t
 * list
 * @head: head of list
 * @n: number to set n value of dlistint_t to
 *
 * Return: The address of the new element or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	new->prev = NULL;
	if (!head || !*head)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (new);
}
