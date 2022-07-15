#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *
 *
 *
 */
void free_list(list_t *head)
{
	list_t *rm = head;

	while (rm->next)
	{
		free(rm);
		rm = rm->next;
	}
}
