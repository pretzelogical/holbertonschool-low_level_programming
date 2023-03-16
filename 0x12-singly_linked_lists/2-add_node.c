#include "lists.h"
#include <string.h>

/**
 * _strlen- returns the length of a string
 * @s: string to check lenght of
 *
 * Return: Always return length of string
 */
int _strlen(const char *s)
{
int l;

l = 0;
while (*(s + l) != '\0')
	l++;

return (l);
}

/**
 * add_node- adds a new node at the beginning of a list
 * @head: head of list
 * @str: string to store in list
 *
 * Return: address of new node or NULL if fail
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	if (str)
	{
		new->str = strdup(str);
		if (!str)
			return (NULL);
		new->len = _strlen(str);
	}
	else
	{
		return (NULL);
	}

	if (!head)
	{
		*head = new;
		return (new);
	}
	new->next = *head;
	*head = new;
	return (*head);
}
