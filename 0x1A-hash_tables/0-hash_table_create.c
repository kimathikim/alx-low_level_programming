#include "hash_tables.h"

/**
 * hash_table_create - fuction that creates a hash table
 *
 * @size: size of the table
 * Return: *table or NUll
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	if (size)
	{
		hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

		table->size = size;

		table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t));

		for (int i = 0; i <= table->size; i++)
		{
			table->array[i] = NULL;
		}
		return (table);
	}
	else
		return (NULL);
}
