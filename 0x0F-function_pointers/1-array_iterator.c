#include "function_pointers.h"

/**
 * array_iterator- executes a function given
 * as a parameter on each element of an array
 * @array: array to iterate on
 * @size: size of array
 * @action: pointer to function to use on
 * array
 *
 * Return: void return
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
