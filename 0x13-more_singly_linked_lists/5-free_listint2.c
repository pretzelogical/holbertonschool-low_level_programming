#include "lists.h"

/**
 * free_listint2- frees a listint_t list
 * @head: head of list
 *
 * Return: void return
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp1;
	listint_t *tmp2;

	if (head)
	{
		tmp2 = *head;
		tmp1 = tmp2;
		while (tmp1->next)
		{
			tmp2 = tmp2->next;
			free(tmp1);
			tmp1 = tmp2;
		}
		free(tmp1);
		*head = NULL;
	}
}
