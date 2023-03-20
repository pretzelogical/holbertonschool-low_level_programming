#include "main.h"


/**
 * set_bit- sets the value of a bit to 1 in a given index
 * @n: number to set bit in
 * @index: index of bit
 *
 * Return: 1 if success or -1 if fail
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= 1 << index;
	return (1);
}
