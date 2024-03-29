#include "lists.h"

/**
 * dlistint_len- returns the number of elements in a linked
 * dlistint_t list
 * @h: header of list
 *
 * Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	if (!h)
		return (count);

	while (h->next)
	{
		count++;
		h = h->next;
	}
	count++;

	return (count);
}
