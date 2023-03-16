#include "lists.h"

/**
 * free_list- frees a singly linked list
 * @head: head of list to free
 *
 * Return: Void return
*/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
