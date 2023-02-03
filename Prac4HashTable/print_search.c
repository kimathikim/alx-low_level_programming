#include "hash.h"
void print_search(HashTable* table, char* key)
{
    char* val;

    if((val = ht_search(table, key)) == NULL)
    {
        printf("Key: %s does not exist\n", key);
        return;
    }
    else{
        printf("Key: %s, value: %s\n", key, val);
    }
}