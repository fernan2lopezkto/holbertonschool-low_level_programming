#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - free the memory
 * @head: linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head)
	{
		while (head)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
	}
}
