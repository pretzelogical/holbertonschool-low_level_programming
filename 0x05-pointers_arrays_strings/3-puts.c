#include "main.h"

/**
 * _puts- Prints a string followed by
 * a newline to stdout;
 * @str: pointer to char array
 *
 * Return: Always return nothing (void)
 */
void _puts(char *str)
{
int i;

while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');

return (0);
}

