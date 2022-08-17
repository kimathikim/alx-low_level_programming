#include "lists.h"
/**
 * print_listint - function for printing
 *
 * @h: parameter
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int n;

	n = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
