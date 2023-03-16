#include "lists.h"
#include <stdio.h>

/**
 * print_node- prints the contents of a node
 * @h: node to print contents of
 *
 * Return: Void return
*/
void print_node(const list_t *h)
{
	if (h->str)
		printf("[%u] %s\n", h->len, h->str);
	else if (h->len)
		printf("[0] (nil)\n");
}

/**
 * print_list- prints all the elements of a
 * list_t list
 * @h: list to print elements of
 *
 * Return: The number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t size;

	if (!h)
		return (0);

	size = 0;
	while (h->next)
	{
		print_node(h);
		size++;
		h = h->next;
	}
	print_node(h);
	size++;
	return (size);
}
