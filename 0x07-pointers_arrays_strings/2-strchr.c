#include "main.h"

/**
 * _strchr- returns a pointer to the first occourrence
 * of character c in string s
 * @s: string to search
 * @c: character to search for
 *
 * Return: pointer to first occurrence of c or NULL if c
 * not found
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);

	return (0);
}
