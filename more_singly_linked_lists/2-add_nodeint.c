#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - add int node to beginn
 * @head: head the list
 * @n: number to add
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	if (!head)
	{
		*head = new;
		new->n = n;
		new->next = NULL;
	}
	else
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}

	return (new);
}
