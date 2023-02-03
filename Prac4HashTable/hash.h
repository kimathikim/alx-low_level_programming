#ifndef __MAIN__
#define __MAIN__

#define CAPACITY 50000
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// define the hash table item structure
typedef struct Ht_item
{
    char *key;
    char *value;

} Ht_item;

// define linked list to be used to handle collision on the basis of the item
typedef struct LinkedList
{
    Ht_item *item;
    struct LinkedList *next;
} LinkedList;

// defining hash table itself
typedef struct HashTable
{
    // contains an array of pointers to the items
    Ht_item **items;
    // this ensures that the table is an array of linkedlist pointers
    LinkedList **overflow_buckets;
    int size;
    int count;
} HashTable;

// allocating memory for the Lined list

LinkedList *allocate_list();
Ht_item *create_item(char *key, char *value);
HashTable *create_table(int size);
unsigned long hash_function(char *str);
void free_item(Ht_item *item);
void free_table(HashTable *table);
void print_table(HashTable *table);
void ht_insert(HashTable *table, char *key, char *value);
char *ht_search(HashTable *table, char *key);
void handle_collision(HashTable *table, unsigned long index, Ht_item *item);
LinkedList *linkedlist_insert(LinkedList *list, Ht_item *item);
Ht_item *linkedlist_remove(LinkedList *list);
void free_linkedlist(LinkedList *list);
LinkedList **create_overflow_buckets(HashTable *table);
void free_overflow_buckets(HashTable *table);
void ht_delete(HashTable *table, char *key);

#endif