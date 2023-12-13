#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 if value is not present in array or if array is NULL,
 * otherwise the first index where value is located
 * Description: Prints a value every time it is compared in the array
 * using the Jump search algorithm
 */
int jump_search(int *array, size_t size, int value) {
  size_t head, tail, s_root, i;

  head = 0;
  s_root = sqrt(size);
  tail = s_root;

  while (tail < size) {
    printf("Value checked array[%lu] = [%d]\n", head, array[head]);
    if (array[tail] < value) {
      head = tail;
      tail = tail + s_root;
    } else
      break;
  }
  printf("value found between indexes [%lu] and [%lu]\n", head, tail);
  if (tail > size)
    tail = size - 1;
  for (i = head; i <= tail; i++) {
    printf("Value checked array[%lu] = [%d]\n", i, array[i]);
    if (array[i] == value)
      return (i);
  }

  return (-1);
}
