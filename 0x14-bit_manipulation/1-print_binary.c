#include "main.h"

/**
 * print_binary- prints the binary representation of a number
 * @n: number to print binary representation of
 *
 * Return: void return
*/
void print_binary(unsigned long int n)
{
	int i, mask;
	unsigned long int count;

	if (n == 0)
	{
		_putchar('0');
	}

	count = n;
	i = 0;
	while (count != 0)
	{
		i++;
		count = count >> 1;
	}

	i--;
	for (; i >= 0; i--)
	{
		mask = (1 << i);

		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
	}
}
