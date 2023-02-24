#include "main.h"

/**
 * malloc_checked- allocates a pointer in memory
 * if malloc fails the function terminates with
 * a status value of 98
 *
 * @b: amount of memory to allocate
 *
 * Return: pointer to malloc'd memory
*/
void *malloc_checked(unsigned int b)
{
	void *out;

	out = malloc(b);
	if (out == NULL)
		exit(98);

	return (out);
}
