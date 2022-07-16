#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delete the head node
 * @head: head node to the list
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int n_value = 0;
	listint_t *tmp = *head;

	if (!*head)
		return (n_value);

	n_value = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (n_value);
}
