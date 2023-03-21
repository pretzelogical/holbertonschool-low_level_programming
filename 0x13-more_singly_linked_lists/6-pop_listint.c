#include "lists.h"

/**
 * pop_listint- deletes head node and returns data
 * @head: head of listint_t list
 *
 * Return: head nodes data, if list is empty 0
*/
int pop_listint(listint_t **head)
{
	int out;
	listint_t *tmp;
	listint_t *tmpN;

	if (!*head)
		return (0);

	if (!head)
		return (0);

	tmp = *head;
	tmpN = tmp->next;
	out = tmp->n;
	free(*head);

	*head = tmpN;

	return (out);
}
