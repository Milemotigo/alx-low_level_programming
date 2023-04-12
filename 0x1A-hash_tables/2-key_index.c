#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - a function that helps us to find the index
 * @key: name of the element
 * @size: size of the array
 * Return: index
 * Discription: Use the djb2 function
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int idx;

	hash = hash_djb2(key);
	idx = hash % size;
	return (idx);
}
