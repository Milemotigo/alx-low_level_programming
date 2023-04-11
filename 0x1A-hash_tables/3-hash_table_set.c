#include "hash_tables.h"
#include<stdlib.h>
#include <string.h>
/**
 * hash_table_set - a function that is used to add an element to
 * a hash table
 * @key: the name of the element
 *
 * @value: properties of the element
 * Return: Return 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_m;
	/* declaring the copy of key and value */
	char *c_value;
	char *c_key;

	if (ht == NULL || key == NULL|| *key == '\0')
		return(0);
	/* search for the position of the index for the key */
	idx = key_index((const unsigned char *)key, ht->size);
	/* make a new piece of memory to store the things we want to store*/
	new_m = malloc(sizeof(hash_node_t));
	if (new_m == NULL)
		return (0);
	/*set size and value to new_m*/
	c_key = strdup(key);
	new_m->key = c_key;
	c_value = strdup(value);
	new_m->value = c_value;
	new_m->next = ht->array[idx];
	ht->array[idx] = new_m;

	return (1);
}
