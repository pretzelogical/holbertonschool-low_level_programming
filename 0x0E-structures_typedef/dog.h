#ifndef DOG_H
#define DOG_H

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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
