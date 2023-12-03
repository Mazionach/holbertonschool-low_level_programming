#include "hash_tables.h"

/**
 * hash_table_set - adds element to hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value
 * Return: success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	int i;

	if (!key || !ht)
		return (0);

	i = key_index((unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	if (ht->array[i])
		new->next = ht->array[i];
	else
		new->next = NULL;

	ht->array[i] = new;
	return (1);
}
