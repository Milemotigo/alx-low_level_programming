#include "hash_tables.h"

/**
 * hash_table_delete - a function that delete a hash table
 *
 * @ht: hash table to delete
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			/*copy the node*/
			temp = node;
			free(temp->key);
			free(temp->value);
			free(temp);
			node = node->next;
		}
	}
	free(ht->array);
	free(ht);
}
