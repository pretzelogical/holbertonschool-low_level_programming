#include "main.h"

/**
 * more_numbers- prints 10-14 10 times followed by a newline
 *
 * Return: Always return nothing (void)
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar(((j / 10) % 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
