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
 * add_node_end- add a new node to the end of a linked
 * list
 * @head: head of linked list
 * @str: string to store in node
 *
 * Return: Address to new node or NULL if fail
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;

	new = malloc(sizeof(list_t));
	if (!new)
		return(NULL);
	
	if (str)
	{
		new->str = strdup(str);
		if (!new->str)
			return(NULL);
		new->len = _strlen(str);
	}
	new->next = NULL;
	if (*head)
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
	{
		*head = new;
	}
	return (*head);
}
