#include "main.h"

/**
 * _calloc- allocates memory for an array with
 * nmemb member and size bytes
 * @nmemb: value to initialise array with
 * @size: size of bytes
 *
 * Return: pointer to array else NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		arr[i] = 0;
	return (arr);
}
