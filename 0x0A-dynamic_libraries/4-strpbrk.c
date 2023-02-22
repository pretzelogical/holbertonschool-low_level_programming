#include "main.h"

char is_subst_match(char *c, char *subst)
{
	while (*subst != '\0')
	{
		if (*c == *subst)
			return (*subst);
		subst++;
	}

	return (0);
}

/**
 * _strpbrk- searches for any of a set of bytes
 * @s: string to search
 * @accept: bytes to search for
 *
 * Return: return a pointer to the byte in s that matches
 * one in accept or NULL if no byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (is_subst_match(s, accept) > 0)
			return (s);
		s++;
	}
	return (0);
}

/**
 * is_subst_match- check if c matches substring
 * @c: character to match
 * @subst: substring to match
 *
 * Return: return matching character else 0
*/
