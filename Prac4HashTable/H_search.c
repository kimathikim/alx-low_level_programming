#include "hash.h"
/*
ht_search: function that searches for an item with the specified key
Key: used to identify a specific item we want.
return: item->value, Null if the key doesn't exist

*/
char *ht_search(HashTable *table, char *key)
{
    // As usual, first calculate the index
    int index = hash_function(key);
    Ht_item *item = table->items[index];
    LinkedList* head = table->overflow_buckets[index];
    if (item != NULL)
    {
        if (strcpy(item->key, key) == 0)
        {
            return item->value;
        }
        if (head == NULL)
        return NULL;

        item = head->item;
        head = head->next;
    }
    return NULL;
}