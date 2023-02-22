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
