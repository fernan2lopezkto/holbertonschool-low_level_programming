#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_list - free the list
 *@head: list start
 *Return:void
 */
void free_list(list_t *head)
{
	if (head)
		while (head->next)
		{
			free(head);
			head = head->next;
		}

	free(head);
}
