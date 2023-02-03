#include "hash.h"
/*
free_item: functio to free the memory allocated th the items
*/
void free_item(Ht_item* item){
    free(item->key);
    free(item->value);
    free(item);
}

/*
free_table: frees the memory allocated to the table
*/
void free_table(HashTable* table)
{
    //free the array blocks
    for (int i = 0; i <= table->size; i++){
        //first allocate the block to (Ht_item* item) since it  several allocation
        //then free the item using 'free_item' function
        Ht_item* item = table->items[i];
        
        if (item != NULL)
        {
            free_item(item);
        }
    }
    //free the overflow bucket lists and its items
    free_overflow_buckets(table);
    free(table->items);
    free(table);
}