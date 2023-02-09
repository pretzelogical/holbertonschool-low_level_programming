#include "holberton.h"

/**
 * reverse_array- reverses the content of an array
 * of integers
 * @a: array to reverse
 * @n: number of elements in array
 *
 * Return: Always return nothing (void)
*/
void reverse_array(int *a, int n)
{
	int *start, *end, tmp;

	start = a;
	end = a + (n - 1);
	tmp = 0;

	while (start <= end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
