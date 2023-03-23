#include "lists.h"

/**
 * free_dlistint- frees a dlistint_t list
 * @head: head of list
 *
 * Return: void return
*/
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;


	if (head->next)
		free_dlistint(head->next);
	free(head);
}
