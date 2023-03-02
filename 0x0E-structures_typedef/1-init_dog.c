#include "dog.h"

/**
 * init_dog- initialize variable of type
 * struct dog
 * @d: struct to initalize
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Void return (nothing)
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
