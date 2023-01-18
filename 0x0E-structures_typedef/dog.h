#ifndef HEADER_H_
#define HEADER_H_

/**
 * struct_dog - struct with members
 * @name*: member1
 * @age: member2
 * @owner*: membe3
 * Return: Null
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
