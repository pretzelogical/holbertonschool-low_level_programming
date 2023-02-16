#include "main.h"

/**
 * _strcat- concatenates two strings
 * @dest: string to append to
 * @src: string to append
 *
 * Return: Always return a pointer to the resulting
 * string dest
*/
char *_strcat(char *dest, char *src)
{
	int i, srclen, destlen;

	srclen = _strlen(src);
	destlen = _strlen(dest);
	i = destlen;
	/* starts at nullbyte of dest*/
	while (i <= destlen + srclen)
		{
		*(dest + i) = *(src + (i - destlen));
		i++;
		}
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
