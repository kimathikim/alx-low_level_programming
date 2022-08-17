#include "lists.h"

/**
 * print_listint - func
 *
 * @h: parameter
 * @Return: size_t
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
}
