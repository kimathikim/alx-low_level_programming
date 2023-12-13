#ifndef _MAIN_
#define _MAIN_

#include <stddef.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int binary_search_recursive(int *array, size_t size, int value);

#endif
