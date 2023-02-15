#include "main.h"

/**
 * get_sqrt- checks if i is square root of n and returns it
 * @i: value that will be used to check
 * @n: value to check for square root of
 *
 * Return: Always return value of root
*/
int get_sqrt(int i, int n)
{
	int j;

	if (i * i != n)
	{
		if (i > n)
			return (-1);
		j = get_sqrt(i + 1, n);
		return (j + 1);
	}
	return (0);
}

/**
 * _sqrt_recursion- returns the natural square root
 * of a number
 * @n: number to return square root of
 *
 * Return: If n has natural square root return that
 * else -1
*/
int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	if (get_sqrt(i, n) == n && n != 1)
		return (-1);
	return (get_sqrt(i, n));
}
