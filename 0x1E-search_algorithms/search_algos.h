#ifndef _MAIN_
#define _MAIN_

#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int binary_search_recursive(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

#endif
