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
	if (head->next != NULL)
		free_list(head->next);
	if(head->str != NULL)
		free(head->str);
	free(head);
}
