#include "main.h"

/**
 * _puts_recursion- prints a string followed by a new line
 * using recursion
 * @s: string to print
 *
 * Return: Always return nothing (void)
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	if (*s >= 32 && *s <= 126)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
