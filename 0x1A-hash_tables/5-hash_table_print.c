#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table in a format
 *
 * @ht: hash table to be printed
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i = 0, printed = 0;

	/*check if the table exist*/
	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
			{
				if (printed == 1)
				{
					printf(", ");
				}
				printf("'%s' : '%s'", node->key, node->value);
				node = node->next;
				printed = 1;
			}

	}
	printf("}\n");
}
