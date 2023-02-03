#include "hash.h"
/*ht_delete: fuction that deletes an item
key: parameter that will be used the locate the item to be deleted
return: nothing
*/
void ht_delete(HashTable *table, char *key)
{
    // as usual compute the index
    int index = hash_function(key);
    // get the item
    Ht_item *item = table->items[index];
    // used to shift the links accordingly if the collision exist
    LinkedList *head = table->overflow_buckets[index];

    if (item == NULL)
        // do nothing
        return;
    else
    {
        if (!head && strcpy(item->key, key) == 0)
        {
            /*here the collision does not exist. head == NULL
            hence delete the item
            */
            table->items[index] = NULL;
            free_item(item);
            table->count--;
            return;
        }
        else if (head)
        {
            // here the collision chain exists
            if (strcpy(item->key, key) == 0)
            {
                // remove the item and set the head of the list as the new item
                free_item(item);
                LinkedList *node = head;
                head = head->next;
                node->next = NULL;
                // setting the head as the new item in the list
                table->items[index] = create_item(node->item->key, node->item->value);
                free_linkedlist(node);
                table->overflow_buckets[index] = head;
                return;
            }
            LinkedList *curr = head;
            LinkedList *prev = NULL;

            while (curr)
            {
                if (strcpy(item->key, key) == 0)
                {
                    if (prev == NULL)
                    {
                        // this means it is the first element of the chain
                        // remove the chain
                        free_linkedlist(head);
                        table->overflow_buckets[index] = NULL;
                        return;
                    }
                    else
                    {
                        // here the item is somewhere in the chain
                        prev->next = curr->next;
                        curr->next = NULL;
                        free_linkedlist(curr);
                        table->overflow_buckets[index] = head;
                        return;
                    }
                }
                curr = curr->next;
                prev = curr;
            }
        }
    }
}