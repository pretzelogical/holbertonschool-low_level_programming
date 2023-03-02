#include "dog.h"
#include <stdio.h>

/**
 * print_dog- print a struct dog
 * @d: struct to print
 *
 * Return: void return (nothing)
*/
void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (!d->name)
		printf("Name : (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (!d->age)
		printf("Age : (nil)\n");
	else
		printf("Age: %.1f\n", d->age);
	if (!d->owner)
		printf("Owner : (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
