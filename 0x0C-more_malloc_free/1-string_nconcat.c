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
 * string_nconcat- concatenates two strings
 * @s1: string to concatenate on
 * @s2: string to concatenate
 * @n: number of bytes to copy
 *
 * Return: return pointer to concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, l1, l2, lf;
	char *str;

	if (s1 == NULL)
		*s1 = "";
	if (s2 == NULL)
		*s2 = "";
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	if (n > l2)
		n = l2;
	lf = l1 + n;
	str = malloc(lf * sizeof(char));

	for (i = 0; i < lf; i++)
	{
		if (i > l1)
			str[i] = s2[i - l1];
		else
			str[i] = s1[i];
	}
	return (str);
}
