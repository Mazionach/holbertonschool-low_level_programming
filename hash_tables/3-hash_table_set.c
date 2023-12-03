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
	hash_node_t *new, *cur;
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
	{
		cur = ht->array[i];
		while (cur)
		{
			if (strcmp(cur->key, new->key) == 0)
			{
				free(cur->value);
				cur->value = new->value;
				free(new->key);
				free(new);
				break;
			}
			cur = cur->next;
		}
		if (!cur)
		{
			new->next = ht->array[i];
			ht->array[i] = new;
		}
	}
	else
	{
		new->next = NULL;
		ht->array[i] = new;
	}
	return (1);
}
