#include "function_pointers.h"

/**
 * int_index- returns the index for the first
 * element for which the cmp function does
 * not return 0
 * @array: array to search in
 * @size: size of array
 * @cmp: function to use to compare values
 *
 * Return: index of element else -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
