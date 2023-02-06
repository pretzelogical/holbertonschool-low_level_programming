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
int i, odd;

i = 0;
odd = 0;

if (_strlen(str) % 2 != 0)
	odd += 1;

for (i = (_strlen(str) + odd) / 2; i < _strlen(str); i++)
	_putchar(str[i]);

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
