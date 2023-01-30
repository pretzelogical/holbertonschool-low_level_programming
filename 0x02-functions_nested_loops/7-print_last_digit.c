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

last = _abs(x % 10);

_putchar(last + '0');

return (last);
}
