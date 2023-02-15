#include "main.h"

/**
 * factorial- returns the factorial of n
 * @n: number to get the factorial of
 *
 * Return: Always return factorial of n
*/
int factorial(int n)
{
	if (n < 1)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
