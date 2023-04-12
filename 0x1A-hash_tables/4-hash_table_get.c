#include "hash_tables.h"

/**
 * hash_table_get - Retrieve a value associated with a key from a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to look up - cannot be an empty string.
 * Return: Upon success - the value associated with key.
 *         Otherwise - NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *nodeFind;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	nodeFind = ht->array[idx];
	while (nodeFind != NULL)
	{
		if (strcmp(nodeFind->key, key) == 0)
		{
			return (nodeFind->value);
		}
		nodeFind = nodeFind->next;
	}
	return (NULL);
}
