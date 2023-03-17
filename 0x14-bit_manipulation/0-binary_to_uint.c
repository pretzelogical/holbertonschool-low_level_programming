#include "main.h"

/**
 * _pow- returns x raised to exponent
 * @x: number to raise
 * @exponent: power to raise to
 *
 * Return: x raised to exponent
*/
int _pow(int x, int exponent)
{
	for (; exponent; exponent--)
		x *= x;
	return (x);
}

/**
 * _strlen- returns the length of a string
 * @s: string to check lenght of
 *
 * Return: Always return length of string
 */
int _strlen(const char *s)
{
int l;

l = 0;
while (*(s + l) != '\0')
	l++;

return (l);
}

/**
 * binary_to_uint- converts a string of 1 & 0 chars
 * to an unsigned int
 * @b: string to convert
 *
 * Return: The converted number or 0 if string is invalid
 * or null
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int out;
	int outl, mult;

	out = 0;

	if (!b)
		return (out);
	outl = _strlen(b);

	mult = 1;
	for (outl -= 1; outl >= 0; outl--)
	{
		if (b[outl] != '0' && b[outl] != '1')
			return (0);
		out += (b[outl] - '0') * mult;
		mult *= 2;
	}
	return (out);
}
