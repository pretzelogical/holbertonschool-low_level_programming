#include "main.h"
#include <stdio.h>

/**
 * print_diagsums- print the sum of two diagonals of
 * a square matrix of integers
 * @a: array
 * @size: size of array
 *
 * Return: Always return nothing (void)
*/
void print_diagsums(int *a, int size)
{
	int i, n1, n2;

	n1 = 0;
	n2 = 0;

	for (i = 0; i < size; i++)
	{
		n1 += a[(i * size) + i];
		n2 += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", n1, n2);
}
