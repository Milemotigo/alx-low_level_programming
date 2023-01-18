#include"dog.h"
#include<stdlib.h>

/**
 * init_dog - a function that initialize a variable
 * @d: dpg
 * @name: name of dog
 * @age: age of dog
 * @owner: dog own
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
