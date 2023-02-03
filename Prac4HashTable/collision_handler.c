#include "hash.h"
void handle_collision(HashTable* table, unsigned long index, Ht_item* item)
{
    LinkedList* head = table->overflow_buckets[index];

    if (head == NULL)
    {
        //create the list.
        head = allocate_list();
        head->item = item;
        table->overflow_buckets[index] = head;
        return;
    }
    else{
        //insert to the list.
        table->overflow_buckets[index] = linkedlist_insert(head, item);
        return;
    }
}