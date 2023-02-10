#include "holberton.h"

/**
 * cap_string- capitalizes all words of a string
 * @s: string to capitalize
 * Return: Always return pointer to string
 */
char *cap_string(char *s)
{
	char *start, *next;

	start = s;

	if (*start >= 97 && *start <= 122)
		*start -= 32;

	while (*s != '\0')
	{
		next = s + 1;
			if (is_separator(s) != 0)
				if (*next >= 97 && *next <= 122)
					*next -= 32;
		s++;
	}
	return (start);
}

/**
 * is_separator- checks if a character is a seperator
 * @c: character to check
 * Return: character if c is seperator, else 0
 */
char is_separator(char *c)
{
	int i;
	char seperator[13] = {' ', '\t', '\n', ',', ';', '.',
	 '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; i < 13; i++)
		if (*c == seperator[i])
			return (*c);

	return (0);
}
