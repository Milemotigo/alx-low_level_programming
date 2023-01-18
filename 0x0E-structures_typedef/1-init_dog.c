#include"dog.h"

/**
 * struct_dog - a function that initialize a variable
 * @char: var1
 * @int: var2
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
