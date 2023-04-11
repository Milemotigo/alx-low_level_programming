#include "hash_tables.h"
#include<stdlib.h>

/**
 * hash_table_set - a function that is used to add an element to
 * a hash table
 * @key: the name of the element
 *
 * @value: properties of the element
 * Return: return the address of the new element
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_m;

	if (ht == NULL || key == NULL|| *key == '\0')
		return(0);
	/* search for the position of the index for the key */
	idx = key_index((const unsigned char *)key, ht->size);
	/* make a new piece of memory to store the things we want to store*/
	new_m = malloc(sizeof(hash_node_t));
	if (new_m == NULL)
		return (0);
	/*set size and value to new_m*/
	new_m->key = strdup(key);
	new_m->value = strdup(value);
	new_m->next = ht->array[idx];
	ht->array[idx] = new_m;

	return (1);
}
