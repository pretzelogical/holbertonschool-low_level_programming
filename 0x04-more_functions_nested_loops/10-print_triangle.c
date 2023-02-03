#include "main.h"

/**
 * print_triangle- Prints a triangle
 * @size: size of the triangle
 *
 * Return: Always return nothing (void)
 */
void print_triangle(int size)
{
int i, j, k;

k = size;

for (i = 1; i <= size; i++)
	{
	for (j = 1; j <= size; j++)
		{
		if (j >= k)
			_putchar('#');
		else
			_putchar(' ');
		}
	_putchar('\n');
	k--;
	}
if (size <= 0)
	_putchar('\n');

}

