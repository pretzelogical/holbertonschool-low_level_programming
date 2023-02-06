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

start = s;
end = s;

while (*s != '\0')
	{
	s++;
	len++;
	}
for (i = 0; i < len - 1; i++)
	{
	end++;
	}
for (i = 0; i < len / 2; i++)
	{
	tmp = *end;
	*end = *start;
	*start = tmp;

	start++;
	end--;
	}
}
