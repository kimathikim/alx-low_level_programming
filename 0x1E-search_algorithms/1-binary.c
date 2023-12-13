#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t head = 0, tail = size - 1, i = 0;

	if (array == NULL)
		return (-1);
	while (head <= tail)
	{
		printf("Searching in array: ");
		for (i = head; i < tail; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = (head + tail) / 2;
		if (array[i] == value)
			return (i);
		else if (array[i] > value)
			tail = i - 1;
		else
			head = i + 1;
	}
	return (-1);
}
