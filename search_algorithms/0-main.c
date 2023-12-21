#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
*/
int main(void)
{
	int array[] = {
	    10, 1, 42, 3, 4, 42, 6, 7, -1, 9
	};

	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found at index: %d\n", linear_search(array, size, 14135));
	return (EXIT_SUCCESS);
}
