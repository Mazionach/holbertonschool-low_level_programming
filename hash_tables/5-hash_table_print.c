#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cur;
	unsigned int i;
	int primero = 1;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		for (cur = ht->array[i]; cur; cur = cur->next)
		{
			if (!primero)
				printf(", ");
			primero = 0;
			printf("'%s': '%s'", cur->key, cur->value);
			if (cur->next)
				printf(", ");
		}
	}
	printf("}\n");
}
