#include "main.h"

/**
 * print_numbers- print numbers from 0-9 followed by a newline
 *
 * Return: Always return nothing (void)
*/
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
