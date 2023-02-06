#include "main.h"

/**
 * puts_half- prints half of a string
 * followed by a newline
 * @str: string to print half of
 *
 * Return: Always return nothing (void)
 */
void puts_half(char *str)
{
int len, i, half;

i = 0;
len = _strlen(str);

if (len % 2 == 0)
	half = len / 2;
else
	half = (len - 1) / 2;

for (i = 0; i < len; i++)
	{
	if (half > 0)
		{
		half--;
		str++;
		}
	else
		{
		_putchar(*str);
		str++;
		}
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
