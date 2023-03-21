#include "lists.h"

/**
 * free_listint- frees a listint_t list
 * @head: head of listint_t list
 *
 * Return: Void return
*/
void free_listint(listint_t *head)
{
	if (head->next)
		free_listint(head->next);
	free(head);
}
