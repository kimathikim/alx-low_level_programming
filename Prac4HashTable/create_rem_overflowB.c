#include "hash.h"
/*create_overflow_buckets: an array of LinkedList
table: Hash table into which the overflow bucket will be created
return: bucket
*/
LinkedList** create_overflow_buckets(HashTable* table)
{
    LinkedList** buckets = (LinkedList**) calloc(table->size, sizeof(LinkedList*));
    for (int i = 0; i <= table->size; i++){
        buckets[i] = NULL;
    }
    return buckets;
}

void free_overflow_buckets(HashTable* table)
{
    //free all overflow buckets list
    LinkedList** buckets = table->overflow_buckets;
    for (int i = 0; i <= table->size; i++){
      free_linkedlist(buckets[i]);
    }
    free(buckets);
}
