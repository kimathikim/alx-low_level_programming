#include "hash.h"

/*
create_item: fuction that creates the items
key: an element of the item (param)
value: what the item holds

//all passed by ref
return: item is returned

*/
Ht_item* create_item(char* key, char* value)
{
    //creates a pointer to a new HashTable
    Ht_item* item = (Ht_item*) malloc(sizeof(Ht_item));
    //creating a memory for the ITEM
    item->key = (char*) malloc(strlen(key) + 1);
    //in the Item we create an exact memory for key +1 for the null terminator
    //do the same for value
    item->value = (char*) malloc(strlen(value) + 1);
    strcpy(item->key, key);
    //copy the string pointed to by key including '\0' to the item->key. so is the value
    strcpy(item->value, value);
    return item;
}