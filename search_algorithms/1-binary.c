#include "search_algos.h"


/**
 * binary_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: integer to search for
 * Description: Searches for a value in an array of integers using the binary
 * search method.
 *
 * Return: index of the value in the array, or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size - 1;
	size_t mid;
	size_t i;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i != end)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				printf("%d", array[i]);
			}
		}
		printf("\n");
		mid = (start + end) / 2;
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	return (-1);
}
