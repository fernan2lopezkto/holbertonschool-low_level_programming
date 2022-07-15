#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - print list whith int
 * @h: is head to the list
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t counter  = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
