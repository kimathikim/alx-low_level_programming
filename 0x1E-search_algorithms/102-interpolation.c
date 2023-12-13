#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 * @array:  is a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 if value is not present in array or if array is NULL, otherwise
 * the first index where value is located
 */

int interpolation_search(int *array, size_t size, int value) {
  size_t pos, low, high;

  low = 0;
  high = size - 1;
  while (low <= high) {
    pos = low + (((double)(high - low) / (array[high] - array[low])) *
                 (value - array[low]));
    if (array == NULL)
      return (-1);
    if (pos > high) {
      printf("Value checked array[%lu] is out of range\n", pos);
      return (-1);
    }
    if (value > array[pos]) {
      printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
      low = pos + 1;
    } else if (value < array[pos]) {
      printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
      high = pos - 1;
    } else {
      printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
      return (pos);
    }
  }
  return (-1);
}
