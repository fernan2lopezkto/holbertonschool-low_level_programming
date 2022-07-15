#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - add a number to the end of linked list
 * @head: is the list
 * @n: is the number to add
 * Return: pointer to new add
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
	}
	else
	{
		while (last->next)
			last = last->next;

		last->next = new;
	}
	return (new);
}
