#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - print list whith int
 * @h: is head to the list
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t counter  = 0;

	while (h)
	{
		if (h->n)
			printf("%d\n", h->n);

		h = h->next;
		counter++;
	}
	return (counter);
}
