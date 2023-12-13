#include "search_algos.h"
/**
 * exponential_search - searches for a value in a sorted array of
 * integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, tail = 0, head = 0, mid = 0;

	if (!array || size == 0)
		return (-1);
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	tail = i / 2;
	if (i >= size)
		head = size - 1;
	else
		head = i;
	printf("Value found between indexes [%lu] and [%lu]\n", tail, head);
	while (tail <= head)
	{
		printf("Searching in array: ");
		for (i = tail; i <= head; i++)
		{
			if (i == head)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		mid = (tail + head) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			head = mid - 1;
		else
			tail = mid + 1;
	}
	return (-1);
}
