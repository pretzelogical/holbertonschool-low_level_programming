#include "main.h"

/**
 * puts_recursion- prints a string followed by a new line
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
	_putchar(*s);
	_puts_recursion(s + 1);
}