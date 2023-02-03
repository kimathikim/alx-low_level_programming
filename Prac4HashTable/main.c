#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash.h"

int main()
{
    HashTable* ht = create_table(CAPACITY);
    ht_insert(ht, (char *)"1", (char *)"First address");
    ht_insert(ht, (char *)"2", (char *)"second address");
    ht_insert(ht, (char *)"Hel", (char *)"Third address");
    ht_insert(ht, (char *)"cau", (char *)"fourth address");
    ht_search(ht, (char *)"1");
    ht_search(ht, (char *)"2");
    ht_search(ht, (char *)"3");
    ht_search(ht, (char *)"Hel");
    ht_search(ht, (char *)"cau"); //collision
    print_table(ht);
    ht_delete(ht, (char *)"1");
    ht_delete(ht, (char *)"cau");
    print_table(ht);
    free_table(ht);
    return 0;
}