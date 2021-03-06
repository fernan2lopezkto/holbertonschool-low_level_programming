#include <stdio.h>
#include "lists.h"
/**
 *list_len - print list items
 *@h: nodo
 *Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
