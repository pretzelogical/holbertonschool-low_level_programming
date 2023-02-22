#include "main.h"

/**
 * _strcmp- compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if equal, >0 if first non matching
 * character is greater (in ascii), <0 if less
*/
int _strcmp(char *s1, char *s2)
{
	int i, max, s1len, s2len;

	s1len = _strlen(s1);
	s2len = _strlen(s2);

	if (s1len > s2len)
		max = s1len;
	else
		max = s2len;

	for (i = 0; i < max; i++)
		{
		if (*(s1 + i) != *(s2 + i))
			{
			return (*(s1 + i) - *(s2 + i));
			}
		}
	return (0);
}

/**
 * _strlen- returns the length of a string
 * @s: string to check length of
 *
 * Return: Always return length of string
 */
int _strlen(char *s)
{
int l;

l = 0;
while (*s != '\0')
	{
	s++;
	l++;
	}

return (l);
}
