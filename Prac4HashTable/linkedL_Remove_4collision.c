#include "hash.h"
// linkedlist_remove: function to remove the head from the liked list
// list: the list from which the head will be removed
// return the item from the poped element
Ht_item *linkedlist_remove(LinkedList *list)
{
    if (!list)
        return NULL;

    if (!list->next)
        return NULL;

    LinkedList *node = list->next;
    LinkedList *temp = list;
    // the consecutive node in the list is deleted here
    temp->next = NULL;
    list = node;

    Ht_item *it = NULL;
    memcpy(temp->item, it, sizeof(Ht_item));
    free(temp->item->key);
    free(temp->item->value);
    free(temp->item);
    free(temp);
    return it;
}

//free the linked list
void free_linkedlist(LinkedList* list)
{
    LinkedList* temp = list;
    while (list)
    {
        temp = list;
        list = list->next;
        free(temp->item->key);
        free(temp->item->value);
        free(temp->item);
        free(temp);
    }
}