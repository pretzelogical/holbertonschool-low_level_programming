#include "main.h"

/**
 * _strncat- concatenates two strings using n bytes
 * from src
 * @dest: string to append to
 * @src: string to append
 * @n: how many bytes to copy
 *
 * Return: Always return a pointer to the resulting
 * string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, destlen, srclen;

	destlen = _strlen(dest);
	srclen = _strlen(src);
	i = destlen;

	/* if n is bigger then the srclen */
	/* set n to srclen (print max length)*/
	if (n > srclen)
		n = srclen;

	/* starts at nullbyte of dest*/
	while (i < destlen + n)
		{
		*(dest + i) = *(src + (i - destlen));
		i++;
		}

	if (n < srclen)
		*(dest + i) = '\0';

	return (dest);
}

/**
 * _strlen- returns the length of a string
 * @s: string to check length of
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
