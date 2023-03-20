#include "lists.h"

/**
 * listint_len- returns the number of elements in a linked
 * listint_t
 * @h: header of linked list
 *
 * Return: The number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t count;

	if (!h)
		return (0);

	count = 0;
	while (h->next)
	{
		h = h->next;
		count++;
	}
	count++;

	return (count);
}
