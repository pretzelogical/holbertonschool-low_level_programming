#include "main.h"

/**
 * _count_bits- count the bit places in a given number
 * @n: number to count bit places
 *
 * Return: number of bit places in n
*/
int _count_bits(unsigned long int n)
{
	int count;

	count = 0;
	while (n != 0)
	{
		count++;
		n = n >> 1;
	}
	return (count);
}

/**
 * get_bit- gets the value of a bit at a given index
 * @n: number to get bit from
 * @index: index starting from 0 of the bit you want to get
 *
 * Return: The value of the bit at index or -1 if fail
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int mask, count;

	if (n == 0 && index == 0)
		return (0);

	count = _count_bits(n);

	if ((int) index > count)
		return (-1);

	mask = (1 << index);

	if (n & mask)
		return (1);
	else
		return (0);
}
