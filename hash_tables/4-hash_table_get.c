#include "hash_tables.h"

/**
 * hash_table_get - gets value from hash table
 * @ht: the hash table
 * @key: the key
 * Return: the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *cur;
	int i;

	if (!ht)
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);

	if (!ht->array[i])
		return (NULL);

	for (cur = ht->array[i]; cur; cur = cur->next)
	{
		if (strcmp(cur->key, key) == 0)
			break;
	}
	if (cur)
		return (cur->value);
	return (NULL);
}
