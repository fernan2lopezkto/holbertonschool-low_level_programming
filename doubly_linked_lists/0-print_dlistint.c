#include "lists.h"

/**
 * print_dlistint - prints all elements of list
 * @h: pointer to dlistint_t
 * Return: n of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if (h->n)
			printf("%d\n", h->n);

		counter++;
		h = h->next;
	}
	return (counter);
}
