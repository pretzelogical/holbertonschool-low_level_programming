#include "main.h"
#include <stdio.h>

/**
 * print_to_98- print all numbers from n to 98,
 * followed by a newline
 * @n: number to count to 98 from
 *
 * Return: Always return nothing (void)
 */
void print_to_98(int n)
{
while (n != 98)
	{
	printf("%d, ", n);
	if (n > 98)
		n--;
	else
		n++;
	}
printf("%d\n", n);
}
