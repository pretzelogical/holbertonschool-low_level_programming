#include "main.h"
/**
 * create_array- creates an array of chars and
 * initializes it with a specific char
 * @size: size of array to create
 * @c: character to initialize with
 *
 * Return: pointer to array of NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;


	arr = malloc((size + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	arr[size + 1] = '\0';

	return (arr);
}
