#include "main.h"

/**
 * _strspn- Gets number of bytes in initial segment
 * that match accept
 * @s: string to search
 * @accept: bytes to search for
 *
 * Return: Always return number of bytes in
 * initial segment s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;

	n = 0;
	while (*s != '\0')
	{
		if (n == 0 && is_subst_match(s, accept) > 0)
			n++;

		if (n > 0)
		{
			if (is_subst_match(s, accept) > 0)
				n++;
			else
				return (n - 1);
		}
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
