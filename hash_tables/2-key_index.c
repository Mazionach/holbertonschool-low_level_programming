#include "hash_tables.h"

/**
 * key_index - gets the index of a certain key
 * @key: the key
 * @size: table size
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key)
		return (0);
	return (hash_djb2(key) % size);
}
