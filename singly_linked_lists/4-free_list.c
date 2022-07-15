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
	list_t *tmp;

	if (head != NULL)
	{
		while (head)
		{
			tmp = head->next;
			free(head->str);
			free(head);
			head = tmp;
		}
	}
}
