#include <stdio.h>
#include "lists.h"
/**
 *
 *
 *
 *
 *
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] (%s", h->len, h->str);
			counter++;
			h = h->next;
		}
	return (counter);
}
