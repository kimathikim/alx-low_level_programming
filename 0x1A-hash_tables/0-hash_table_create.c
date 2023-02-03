#include "hash_tables.h"
/**
 * hash_table_create - fuction that creates a hash table
 *
 * @size: size of the table
 * Return: *table or NUll
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i = 0;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->array = malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);
	table->size = size;

	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}
	return (table);
}
