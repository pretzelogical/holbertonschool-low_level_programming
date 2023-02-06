#include "main.h"

/**
 * puts2- print every other character of a string
 * followed by a newline
 * @str: string to print
 *
 * Return: Always return nothing (void)
 */
void puts2(char *str)
{
int len, i;

i = 0;
len = _strlen(str);

while (i < len)
	{
	if (i % 2 == 0)
		{
		_putchar(*str);
		}
	str++;
	i++;
	}
_putchar('\n');
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
