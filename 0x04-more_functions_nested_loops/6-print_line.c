#include "main.h"

/**
 * print_line- draws a straight line in the terminal
 * @n: length of line to draw
 *
 * Return: Always return nothing (void)
*/
void print_line(int n)
{
	int i;

	for (i = 0; i != n && n > 0; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
