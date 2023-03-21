#include "lists.h"

/**
 * add_nodeint- adds a new node at the beginning of a listint_t list
 * @head: head of the list
 * @n: number to set node
 *
 * Return: Address of new element or NULL if fail
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;

	if (!*head)
	{
		*head = new;
		return (*head);
	}

	new->next = *head;
	*head = new;
	return (*head);
}
