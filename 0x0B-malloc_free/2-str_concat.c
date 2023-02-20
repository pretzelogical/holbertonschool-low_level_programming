#include "main.h"

/**
 * _strlen- returns the length of a string
 * @s: string to check lenght of
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

/**
 * str_concat- concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to newly allocated space in memory
 * which contains the contents of s1 & s2 and is null
 * terminated
*/
char *str_concat(char *s1, char *s2)
{
	int i, lf, l1, l2;
	char *out;

	if (s1 != NULL)
		l1 = _strlen(s1);
	else
		l1 = 0;

	if (s2 != NULL)
		l2 = _strlen(s2);
	else
		l2 = 0;
	lf = l1 + l2;
	out = malloc((lf + 1) * sizeof(char));
	if (out == NULL)
		return (NULL);

	for (i = 0; i < lf; i++)
	{
		if (i > l1 - 1)
			out[i] = s2[i - l1];
		else
			out[i] = s1[i];
	}
	out[lf] = '\0';
	return (out);
}
