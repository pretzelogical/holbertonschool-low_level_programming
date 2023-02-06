#include "main.h"

/**
 * print_rev- Prints a string in reverse
 * followed by a newline
 * @s: string to print in reverse
 *
 * Return: Always return nothing (void)
 */
void print_rev(char *s)
{
char *start;

start = s;

while (*s != '\0')
	{
	s++;
	}
/* stops some invisible character(?) from printing  */
s--;
while (s != start - 1)
	{
	_putchar(*s);
	s--;
	}

_putchar('\n');

}
