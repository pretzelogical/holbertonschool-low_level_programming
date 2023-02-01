#include "main.h"

/**
 * print_diagonal- draws a diagonal line on the terminal
 * @n: number of lines to draw
 *
 * Return: Always return nothing (void)
*/
void print_diagonal(int n)
{
	int i, j, spaces = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i != n; i++)
		{
			for (j = 0; j != spaces; j++)
			{
			_putchar(' ');
			}
			spaces++;
			_putchar('\\');
			_putchar('\n');
		}
	}

}
