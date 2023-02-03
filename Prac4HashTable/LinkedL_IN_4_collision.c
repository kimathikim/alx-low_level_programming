#include "hash.h"
/*
linkedlist_insert: function that inserts item into the list
list: where the item will  be inserted
item: the item to be inserted into the list
*/
LinkedList *linkedlist_insert(LinkedList *list, Ht_item *item)
{
    // inseting the item into the linkedlist
    // check if the list is empty
    if (!list)
    {
        LinkedList *head = allocate_list();
        head->item = item;
        head->next = NULL;
        list = head;
        return list;
    }
    // if the list"s  has an item but next doesn't,
    else if (list->next == NULL)
    {
        LinkedList *node = allocate_list();
        node->item = item;
        node->next = NULL;
        list->next = node;
        return list;
    }
  
    LinkedList *temp = list;
    // the following loop is used to traverse the list
    while (temp->next->next)
    {
        temp = temp->next;
    }

    //when the end of the loop is reached, we allocate a node to temp->next since it is null
    LinkedList* node = allocate_list();
    node->item = item;
    node->next = NULL;
    temp->next = node;
    return list;
}