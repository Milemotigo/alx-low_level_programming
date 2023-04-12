#include "hash_tables.h"
/**
 * hash_table_print: prints a hash table in a format
 *
 * ht: hash table to be printed
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i = 0, speci = 0;

	/*check if the table exist*/
	if (ht == 0)
		return;
	printf("{");
	for(node = ht->array[i]; node != NULL; node = node->next)
	{
		if (speci == 1)
		{
			printf(",");
		}
		printf("'%s':'%s'", node->key, node->value);
		speci = 1;
	}
	printf("}\n");
}
