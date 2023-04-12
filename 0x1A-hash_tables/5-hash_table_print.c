#include "hash_tables.h"

/**
 *
 *
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_table_t *node;

	if (ht == NULL)
		return (NULL);
	ht = node;
	while (node != NULL)
	{
		printf("%s", node);
		node = node->next;
	}
}

