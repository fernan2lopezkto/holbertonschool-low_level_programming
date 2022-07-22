#include "lists.h"

/**
 * sum_dlistint - sum datai in n
 * @head: pointer of list
 * Return: counter
 */
int sum_dlistint(dlistint_t *head)
{
	int counter = 0;

	while (head)
	{
		counter += head->n;
		head = head->next;
	}
	return (counter);
}
