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
int jump_search(int *array, size_t size, int value)
{
	size_t start, end, step, i;
	start = 0;
	end = 0;
	step = sqrt(size);
	if (array == NULL)
		return (-1);
	while (end < size && array[end] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		start = end;
		end += step;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	if (end >= size)
		end = size - 1;
	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
