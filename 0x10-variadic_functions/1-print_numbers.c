#include "variadic_functions.h"

/**
 * print_numbers- prints numbers followed by
 * a newline
 * @separator: string to be printed between numbers
 * @n: number of integers that will be passed to the function
 *
 * Return: void return
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i <= n && separator != NULL)
			printf("%s", separator);

	}
	putchar('\n');

	va_end(nums);
}