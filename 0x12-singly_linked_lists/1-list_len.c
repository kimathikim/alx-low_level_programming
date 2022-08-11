#include "lists.h"

/**
 * list_len - return number of element in a string
 * @h: linked list
 * Return: num of elements
 */
size_t list_len(const list_t *h)
{
	size_t y;

	y = 0;

	while (h != NULL)
	{
		h = h->next;
		y++;
	}
	return (y);
}
