#include "hash.h"
#define CAPACITY 50000 //size of the HashTrable

unsigned long hash_function(char* str){
    unsigned long i = 0;

    for (int j = 0; str[j]; j++)
    {
        i += str[j];
    }
    return (i % CAPACITY);
}
