#include "hash_tables.h"
/**
 * key_index - function that finds the index where the index is
 *
 * @key: used to
 * @size:size of the array of hash table
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index = index % size;
	return (index);
}