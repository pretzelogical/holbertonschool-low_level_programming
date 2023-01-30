#include "main.h"

/**
 * print_last_digit- prints last digit of a number
 * @x: input integer
 *
 * Return: Return the last digit of x
 */
int print_last_digit(int x)
{
int last = x % 10;
_putchar(last);

return (last);
}
