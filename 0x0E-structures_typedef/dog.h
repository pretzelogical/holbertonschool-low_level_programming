#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
/**
 * struct dog- puppy arf arf woof :))))
 * @name: name of dog
 * @age: age of dog
 * @owner: did u know dog spelled backwards
 * is god haha.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
