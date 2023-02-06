#include "main.h"

/**
 * _strcpy- copies string pointed to by src
 * (including null byte) to buffer pointed
 * to by dest
 *
 * @dest: buffer to copy to
 * @src: string to copy
 *
 * Return: Always return nothing (void)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * _strlen- returns the length of a string
 * @s: string to check lenght of
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
