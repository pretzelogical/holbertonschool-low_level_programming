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
	int *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	return (arr);
}
