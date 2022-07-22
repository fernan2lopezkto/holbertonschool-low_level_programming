#include "lists.h"

/**
 * get_dnodeint_at_index - find node
 * @head: pointer of dlistint_t
 * @index: index
 * Return: position of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	tmp = head;

	if (tmp == NULL)
	{
		return (NULL);
	}
	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
