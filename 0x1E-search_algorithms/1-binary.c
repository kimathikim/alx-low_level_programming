#include "search_algos.h"

/**
 * binary_search - function to search the index of a value
 * sorted array of numbers
 * @array: an array of sorted members
 * @size: the size of of the array
 * Value: the value to search
 *
 * return: return the the index of of the value being searched or -1
 * if the array is NULL or the VALUE being searched does not exist
 */
int binary_search(int *array, size_t size, int value) {
  size_t i, head, tail, mid;

  head = 0;
  tail = size - 1;
  if (array == NULL)
    return -1;
  while (head <= tail) {
    printf("Searching in the array: ");
    for (i = head; i <= tail; i++)
      if (i < tail)
        printf("%lu, ", i);
      else
        printf("%lu ", i);

    printf("\n");
    mid = (head + tail) / 2;
    if (array[mid] == value)
      return mid;
    if (array[mid] < value)
      head = mid + 1;
    else
      tail = mid - 1;
  }
  return -1;
}
