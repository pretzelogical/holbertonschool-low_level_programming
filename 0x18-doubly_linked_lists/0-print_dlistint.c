#include "lists.h"

/**
 * print_dlistint- prints all the elements of a dlistint_t
 * list
 * @h: head of list
 *
 * Return: The number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;
	if (!h)
		return (count);

	while (h->next)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	printf("%i\n", h->n);
	h = h->next;
	count++;

	return (count);
}
