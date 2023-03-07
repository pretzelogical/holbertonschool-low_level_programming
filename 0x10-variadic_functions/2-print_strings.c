#include "variadic_functions.h"

/**
 * print_strings- print strings followed by a newline
 * @separator: string to separate strings
 * @n: number of strings to print
 *
 * Return: void return
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *str;
	unsigned int i;

	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strs, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

	}
	putchar('\n');

	va_end(strs);
}
