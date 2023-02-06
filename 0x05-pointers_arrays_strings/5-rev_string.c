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
end = len - 1;

for (i = 0; i < _strlen(s) / 2; i++;)
	{
	tmp = *end;
	*end = *start;
	*start = tmp;

	start++;
	end++;
	}
}
