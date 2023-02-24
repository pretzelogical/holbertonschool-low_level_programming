#include "main.h"

/**
 * array_range- creates an array of integers
 * ordered from min to max
 * @min: start of range
 * @max: end of range
 *
 * Return: pointer to array otherwise 0
*/
int *array_range(int min, int max)
{
	int i, size;
	int *arr;

	if (min > max)
		return (NULL);
	size = max - min;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		arr[i] = min++;
	return (arr);
}
