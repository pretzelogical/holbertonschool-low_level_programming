#include "lists.h"
#include <stdio.h>

/**
 * print_listint- prints all the elements of a listint_t list
 * @h: list to print
 *
 * Return: The number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t count;

	if (!h)
		return (0);

	count = 0;
	while (h->next)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	printf("%d\n", h->n);
	count++;

	return (count);
}