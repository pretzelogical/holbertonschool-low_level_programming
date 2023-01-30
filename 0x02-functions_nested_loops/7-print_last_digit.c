#include "main.h"

/**
 * print_last_digit- prints last digit of a number
 * @x: input integer
 *
 * Return: Return the last digit of x
 */
int print_last_digit(int x)
{
int last;
if (x > 0)
{
last = x % 10;
}
else
{
last = (x % 10) * -1;
}

_putchar(last + '0');

return (last);
}
