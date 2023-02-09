#include "holberton.h"

/**
 * string_toupper- changes all lowercase letters of a string to
 * uppercase
 * @s: string to reverse
 *
 * Return: Always return pointer to first element in string
*/
char *string_toupper(char *s)
{
	char *zero;

	/* zero as in the zero-th  address/array space */
	zero = s;

	while (*s != 0)
	{
		if (*s >= 97 && *s <= 122)
			*s -= 32;
	s++;
	}
	return (zero);

}
