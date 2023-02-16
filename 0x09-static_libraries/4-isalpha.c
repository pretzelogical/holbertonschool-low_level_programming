#include "main.h"

/**
 * _isalpha- checks for alphabetic character
 * @c: input character
 *
 * Return: return 1 if c is a letter 0 if otherwise
 */
int _isalpha(int c)
{
if (c > 64 && c < 123)
{
	return (1);
}
else
{
	return (0);
}

}
