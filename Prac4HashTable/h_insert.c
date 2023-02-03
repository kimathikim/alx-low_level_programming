#include "hash.h"

LinkedList *allocate_list()
{
    LinkedList *list = (LinkedList *)malloc(sizeof(LinkedList));
    return list;
}
/*
Ht_insert: the fuction facilitate insertion of the key and value into the H_table
table: this is the table where the key and value will be inserted
key: used to call value
value: what is esentially being stored
*/
void ht_insert(HashTable* table, char* key, char* value){
    //first create the item
    Ht_item* item = create_item(key, value);

    /*
    Comute the index
    -----------------
    This is done by first checking whether the index already exists or not,
    ...by comparing the key
    if not, can directly insert it into the index
    else its a collision*/
    int index = hash_function(key);
    //check whether the item is empty
    Ht_item* current_item = table->items[index];

    if (current_item == NULL)
    {
        //check whether the H_table is full
        if ((table->count == table->size)){
            printf("Insert Error: hash Table is full\n");
            free_item(item);
            return;
        }
        else
        {
            table->items[index] = item;
            table->count++;
        }
    }
    //else if the item already exists, we may 
    
    //1: update the value of the key
    else{
        if (strcpy(current_item->key, key) == 0)
        {
            strcpy(table->items[index]->value, value);
            return;
        }
        //Handle the collision
        else{
            handle_collision(table, index, item);
            return;
        }
    }
}