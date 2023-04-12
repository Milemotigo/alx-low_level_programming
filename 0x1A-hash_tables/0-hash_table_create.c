#include "hash_tables.h"
#include <stdlib.h>

/**
<<<<<<< HEAD
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
=======
 * hash_table_t - a function that creates a hash tables
 * @size: size of the array
 * 
>>>>>>> 012e766b818af6723b523e7b2eb557ef2c9fb126
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	unsigned long int i = 0;

	if (size == 0)
<<<<<<< HEAD
		return (NULL);
	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
	return (NULL);
	hash_t->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_t->array == NULL)
	return (NULL);
	while (i < size)
=======
		return NULL;
	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
	return NULL;
	hash_t->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_t->array == NULL)
	return(NULL);
	while(i < size)
>>>>>>> 012e766b818af6723b523e7b2eb557ef2c9fb126
	hash_t->array[i] = NULL;
	i++;
	/*check if we are not out of the  memory*/
	hash_t->size = size;
	return (hash_t);
}
