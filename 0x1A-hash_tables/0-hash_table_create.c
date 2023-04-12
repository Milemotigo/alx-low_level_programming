#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_t - a function that creates a hash tables
 * @size: size of the array
 * 
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	unsigned long int i = 0;

	if (size == 0)
		return NULL;
	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
	return NULL;
	hash_t->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_t->array == NULL)
	return(NULL);
	while(i < size)
	hash_t->array[i] = NULL;
	i++;
	/*check if we are not out of the  memory*/
	hash_t->size = size;
	return(hash_t);
}
