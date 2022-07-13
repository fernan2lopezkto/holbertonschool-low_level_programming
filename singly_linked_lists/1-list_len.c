#include <stdio.h>
#include "lists.h"
/**
 *print_list - print list items
 *@h: nodo
 *Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
