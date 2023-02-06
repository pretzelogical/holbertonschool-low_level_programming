#include "main.h"

/**
 * rev_string- reverses a string
 * @s: string to reverse
 *
 * Return: Always return nothing (void)
 */
void rev_string(char *s)
{
int len, i;
char *start, *end, tmp;

len = _strlen(s);
start = s;
end = s;

for (i = 0; i < len - 1; i++)
	end++;

for (i = 0; i < len / 2; i++)
	{
	tmp = *end;
	*end = *start;
	*start = tmp;

	start++;
	end--;
	}
}

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

