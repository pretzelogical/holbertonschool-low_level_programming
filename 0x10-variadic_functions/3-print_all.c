#include "variadic_functions.h"

/**
 * _strlen- returns the length of a string
 * @s: string to check lenght of
 *
 * Return: Always return length of string
 */
int _strlen(char *s)
{
int l;

l = 0;
while (*s != '\0')
	{
	s++;
	l++;
	}

return (l);
}

/**
 * print_all- prints anything
 * @format: list of types of arguments passed
 *
 * Return: void return
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *str, *sep;

	i = 0;
	j = 0;
	va_start(args, format);
	while (format && format[i])
		i++;
	sep = ", ";
	while (format && format[j])
	{
		if (j  == (i - 1))
		{
			sep = "";
		}
		switch (format[j])
		{
		case 'c':
			printf("%c%s", va_arg(args, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(args, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(args, double), sep);
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		j++;
	}
	putchar('\n');
	va_end(args);
}
