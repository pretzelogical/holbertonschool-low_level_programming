#include "main.h"

/**
 * times_table- print the 9 times table
 *
 * Return: Always return nothing (void)
 */
void times_table(void)
{
int multiplier, num, output;
for (multiplier = 0; multiplier < 10; multiplier++)
	{
	for (num = 0; num < 10; num++)
		{
		output =  multiplier * num;
		/* if its in the first row dont put space*/
		if (num == 0)
			{
			_putchar(output + '0');
			}
		else if (output < 10)
			{
			_putchar(' ');
			_putchar(output + '0');
			}
		else if (output >= 10)
			{
			_putchar(((output / 10) % 10) + '0');
			_putchar((output % 10) + '0');
			}

		if (num < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		else
			{
			_putchar('\n');
			}
		}
	}
}
