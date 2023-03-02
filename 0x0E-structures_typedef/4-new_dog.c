#include "dog.h"

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
 * new_dog- creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: Return newly created dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;
	int nameS, ownerS;

	nameS = _strlen(name);
	ownerS = _strlen(owner);

	puppy = malloc(sizeof(dog_t));
	if (!puppy)
		return (NULL);

	puppy->name = malloc((sizeof(char) * nameS) + 1);
	if (!puppy->name)
		return (NULL);
	puppy->owner = malloc((sizeof(char) * ownerS) + 1);
	if (!puppy->owner)
		return (NULL);
	_strcpy(puppy->name, name);
	puppy->age = age;
	_strcpy(puppy->owner, owner);


	return (puppy);
}
