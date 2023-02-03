#include "hash.h"
/*
print_table: fuction that prints index, key and the value for each item
*/
void print_table(HashTable* table){
    printf("\n HASH TABLE\n<><><><><><><><><><><><>\n");

    for (int i = 0; i < table->size; i++)
    {
        //check whether the block(table->item[i]) NULL, else print index,  key and the value
        if(table->items[i])
        {
            printf("Index: %d, key: %s, Value: %s\n", i, table->items[i]->key, table->items[i]->value);
        }
    }
    printf("<><><><><><><><><><><><><>\n\n");
}