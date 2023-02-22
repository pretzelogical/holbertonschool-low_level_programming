#include "main.h"

/**
 * _strncpy- copy a string using n bytes
 * from src
 * @dest: string to copy to
 * @src: string to copy
 * @n: how many bytes to copy
 *
 * Return: Always return a pointer to the resulting
 * string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	/* destlen = _strlen(dest); */

	/* starts at beginning of dest */
	/* do until i greater than n or *src is nullbyte */
	while (i < n && *(src + i) != '\0')
		{
		*(dest + i) = *(src + i);
		i++;
		}

	/* after src null byte replace remaining */
	/* n space with null byte */
	while (i < n)
		{
		*(dest + i) = '\0';
		i++;
		}


	return (dest);
}
