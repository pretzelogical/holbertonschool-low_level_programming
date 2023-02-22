#include "main.h"

/**
 * _memcpy- copies n bytes from memory area
 * @dest: memory location to copy to
 * @src: memory location to copy
 * @n: bytes to copy
 *
 * Return: Always return dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
