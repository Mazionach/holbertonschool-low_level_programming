#include "hash_tables.h"

void free_hash_nodes(hash_node_t *l);
/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
		free_hash_nodes(ht->array[i]);
	free(ht->array);
	free(ht);
}

/**
 * free_hash_nodes - frees node list
 * @l: node list
 */
void free_hash_nodes(hash_node_t *l)
{
	if (!l)
		return;
	free_hash_nodes(l->next);
	free(l->key);
	free(l->value);
	free(l);
}
