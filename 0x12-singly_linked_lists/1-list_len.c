#include "lists.h"

/**
 * list_len- Gives number of elements in a linked
 * list
 * @h: list to get length of
 *
 * Return: Length of list
*/
size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;
	if (!h)
		return (len);

	while (h->next)
	{
		len++;
		h = h->next;
	}
	len++;
	return (len);
}
