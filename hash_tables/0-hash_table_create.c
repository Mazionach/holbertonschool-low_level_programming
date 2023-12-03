#include "hash_tables.h"

/**
 * hash_table_create - create a table
 * @size: number of cells
 * Return: pointer to the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	hash_node_t **array = malloc(sizeof(*array)*size);
	int i;

	if (!table || !array)
	{
		free(table);
		free(array);
		return (NULL);
	}
	table->size = size;
	table->array = array;

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
