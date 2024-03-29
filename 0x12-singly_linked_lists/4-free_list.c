#include "lists.h"

/**
 * free_list- frees a singly linked list
 * @head: head of list to free
 *
 * Return: Void return
*/
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
