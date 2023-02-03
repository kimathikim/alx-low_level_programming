#include "hash.h"
/*
create_table: the fuction creates a new hash table
size: param of the size of the hash table
return: table*/
HashTable* create_table(int size)
{
//creating a memory location for the hash T
//we have used hastable as the data type since it defines the basic structure of the hashtable
HashTable* table = (HashTable*) malloc(sizeof(HashTable));
//initialize size to table.size
table->size = size;
table->count = 0;
//allocate memory for an array of pointers to item
table->items = (Ht_item**) calloc(table->size, sizeof(Ht_item));
//creating the array and initialize every block to null
for (int i = 0; i < table->size; i++)
{
    table->items[i] = NULL;
}
table->overflow_buckets = create_overflow_buckets(table);
return table;
}

