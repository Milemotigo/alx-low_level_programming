#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_t - a function that creates a hash tables
 * @size: size of the array
 * 
 * @Return: Return a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;

	unsigned long int i = 0;

	/* allocate a memory for the newly created hash table*/
	hash_t = malloc(sizeof(hash_table_t));
	/* check if memory was not allocate*/
	if (hash_t == 0)
	return NULL;
	/* create an empty array that can hold element on the hash table */
	hash_t->array = malloc(sizeof(hash_node_t *) * size);
	/* check if memory allocation for for array of hf failed*/
	if (hash_t->array == NULL)
{
	return(NULL);
}
	/* Now we need to check if all the compartment(or bit) of the array is empty */
	while(i < size)
	hash_t->array[i] = NULL;
	i++;
	/*check if we are not out of the  memory*/
	hash_t->size = size;
	return(hash_t);
}
